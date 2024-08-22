// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CMPOCKETSTATEMANAGER_H
#define CMPOCKETSTATEMANAGER_H

@class NSMutableArray;
@protocol OS_dispatch_source, OS_dispatch_queue, CMPocketStateDelegate;

#import <Foundation/Foundation.h>


@interface CMPocketStateManager : NSObject {
    NSObject<OS_dispatch_source> *fQueryTimer;
    NSObject<OS_dispatch_queue> *fPrivateQueue;
    int fCachedState;
    unique_ptr<CLMotionNotifier::Dispatcher, std::default_delete<CLMotionNotifier::Dispatcher>> fDispatcher;
    CGFloat fMaxMonitorTime;
    NSMutableArray *fQueryBlocks;
}


@property (nonatomic) NSObject<CMPocketStateDelegate> *delegate; // ivar: _delegate


+(BOOL)isPocketStateAvailable;
-(NSInteger)translateInternalState:(int)arg0 ;
-(id)externalStateToString:(NSInteger)arg0 ;
-(id)init;
-(void)_disableDispatcher;
-(void)_prepareDispatcher;
-(void)addToAggdScalarWithName:(id)arg0 andScalar:(NSUInteger)arg1 ;
-(void)dealloc;
-(void)onNotification:(id)arg0 ;
-(void)onPocketStateUpdated:(int)arg0 ;
-(void)queryStateOntoQueue:(id)arg0 andMonitorFor:(CGFloat)arg1 withTimeout:(CGFloat)arg2 andHandler:(id)arg3 ;
-(void)queryStateOntoQueue:(id)arg0 withTimeout:(CGFloat)arg1 andHandler:(id)arg2 ;


@end


#endif