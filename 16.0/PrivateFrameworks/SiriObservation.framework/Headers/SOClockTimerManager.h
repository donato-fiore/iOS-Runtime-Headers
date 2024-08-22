// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SOCLOCKTIMERMANAGER_H
#define SOCLOCKTIMERMANAGER_H

@class AFInstanceContext, NSMutableDictionary, MTTimerManager;

#import <Foundation/Foundation.h>


@interface SOClockTimerManager : NSObject {
    AFInstanceContext *_instanceContext;
    NSMutableDictionary *_registeredObservations;
    MTTimerManager *_mtTimerManager;
}




+(void)warmUp;
-(id)_registeredObservations;
-(id)addTimer:(id)arg0 ;
-(id)dismissTimerWithIdentifier:(id)arg0 ;
-(id)init;
-(id)initWithInstanceContext:(id)arg0 ;
-(id)removeTimer:(id)arg0 ;
-(id)timers;
-(id)updateTimer:(id)arg0 ;
// -(void)addHandler:(id)arg0 forEvent:(unk)arg1  ;
-(void)checkIn;
-(void)dealloc;
-(void)removeHandlerForEvent:(NSInteger)arg0 ;


@end


#endif