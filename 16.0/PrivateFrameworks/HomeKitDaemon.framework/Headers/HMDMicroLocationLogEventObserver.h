// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDMICROLOCATIONLOGEVENTOBSERVER_H
#define HMDMICROLOCATIONLOGEVENTOBSERVER_H

@class HMFObject, NSString;
@protocol HMFLogging, HMMLogEventObserver, HMDMicroLocationLogEventObserverDataSource;


#import "HMDMicroLocationManager.h"

@interface HMDMicroLocationLogEventObserver : HMFObject <HMFLogging, HMMLogEventObserver>

 {
    HMDMicroLocationManager *_microLocationManager;
    id<HMDMicroLocationLogEventObserverDataSource> *_dataSource;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)logCategory;
-(id)initWithDataSource:(id)arg0 microLocationManager:(id)arg1 ;
-(void)didReceiveEventFromDispatcher:(id)arg0 ;


@end


#endif