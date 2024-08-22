// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MKTRANSITITEMREFERENCEDATEUPDATER_H
#define MKTRANSITITEMREFERENCEDATEUPDATER_H

@protocol MKTransitItemReferenceDateUpdaterDelegate;

#import <Foundation/Foundation.h>


@interface MKTransitItemReferenceDateUpdater : NSObject {
    os_unfair_lock_s _lock;
}


@property (nonatomic, getter=isActive) BOOL active; // ivar: _active
@property (weak, nonatomic) NSObject<MKTransitItemReferenceDateUpdaterDelegate> *delegate; // ivar: _delegate


+(BOOL)_needsUpdateReferenceDate;
+(CGFloat)referenceDateAsTimeInterval;
+(NSUInteger)_updaterCount;
+(id)_currentTimeWithRoundedSeconds;
+(id)referenceDate;
+(void)_addUpdater:(id)arg0 ;
+(void)_cancelReferenceDateUpdate;
+(void)_referenceDateUpdateTimerFired;
+(void)_removeUpdater:(id)arg0 ;
+(void)_scheduleReferenceDateUpdate;
+(void)_updateReferenceDate;
+(void)initialize;
-(id)initWithDelegate:(id)arg0 ;


@end


#endif