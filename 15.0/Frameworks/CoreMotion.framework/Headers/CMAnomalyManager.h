// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CMANOMALYMANAGER_H
#define CMANOMALYMANAGER_H

@protocol OS_dispatch_queue, CMAnomalyDelegate;

#import <Foundation/Foundation.h>

#import "CMAnomalyEvent.h"

@interface CMAnomalyManager : NSObject {
    NSObject<OS_dispatch_queue> *fPrivateQueue;
    NSObject<OS_dispatch_queue> *fAppQueue;
    *void fLocationdConnection;
    CMAnomalyEvent *fLastReceivedEvent;
    CMAnomalyEvent *fLastDispatchedEvent;
    BOOL fRegisteredForNotification;
}


@property (nonatomic) NSObject<CMAnomalyDelegate> *delegate; // ivar: _delegate


+(BOOL)isAnomalyDetectionAvailable;
+(NSInteger)getAnomalyFeatureEnablingStrategyForUserAge:(id)arg0 ;
-(id)init;
-(void)_registerForAnomalyDetection:(BOOL)arg0 ;
-(void)_sendRegistrationForAnomalyEvent:(id)arg0 ;
-(void)ackAnomalyEvent:(id)arg0 withResolution:(NSInteger)arg1 ;
-(void)dealloc;
-(void)resolveAnomalyEvent:(id)arg0 withResolution:(NSInteger)arg1 ;
-(void)respondToAnomalyEvent:(id)arg0 withResponse:(NSInteger)arg1 ;
-(void)startAnomalyDetection;
-(void)stopAnomalyDetection;
-(void)updateAnomalyEventSOSCallState:(id)arg0 withSOSSCallState:(NSInteger)arg1 ;


@end


#endif