// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDCOUNTERTHRESHOLDTTRTRIGGER_H
#define HMDCOUNTERTHRESHOLDTTRTRIGGER_H

@class NSString;
@protocol HMDEventCounterObserver, RadarDialogPresenting;

#import <Foundation/Foundation.h>


@interface HMDCounterThresholdTTRTrigger : NSObject <HMDEventCounterObserver>

 {
    os_unfair_lock_s _lock;
}


@property (readonly, nonatomic) NSInteger activeThreshold; // ivar: _activeThreshold
@property (readonly, weak, nonatomic) NSObject<RadarDialogPresenting> *dialogPresenter; // ivar: _dialogPresenter
@property (nonatomic) NSInteger targetThreshold; // ivar: _targetThreshold
@property (readonly, nonatomic) NSString *ttrCategory; // ivar: _ttrCategory


-(id)initWithThreshold:(NSInteger)arg0 ttrCategory:(id)arg1 dialogPresenter:(id)arg2 ;
-(void)updatedCounterForEventName:(id)arg0 fromOldValue:(NSUInteger)arg1 toNewValue:(NSUInteger)arg2 ;


@end


#endif