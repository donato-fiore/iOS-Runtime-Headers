// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SOSFLOWMANAGER_H
#define SOSFLOWMANAGER_H

@class HKHealthStore, NSString;
@protocol SOSFlowObserver, SOSFlowManagerCoexProtocol;

#import <Foundation/Foundation.h>

#import "SOSFlow.h"

@interface SOSFlowManager : NSObject <SOSFlowObserver, SOSFlowManagerCoexProtocol>

 {
    HKHealthStore *_healthStore;
}


@property (retain, nonatomic) SOSFlow *activeSOSFlow; // ivar: _activeSOSFlow
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedInstance;
-(id)_init;
-(id)init;
-(void)emergencyCallInitiated;
-(void)kappaWasRequested;
-(void)sosFlow:(id)arg0 didChangeToState:(NSInteger)arg1 ;
-(void)sosFlow:(id)arg0 willHandleEvent:(NSUInteger)arg1 withMetaData:(id)arg2 ;
-(void)startFreshSOSFlowWithTriggerMechanism:(NSInteger)arg0 ;
-(void)startSOSFlowWithTriggerMechanism:(NSInteger)arg0 ;


@end


#endif