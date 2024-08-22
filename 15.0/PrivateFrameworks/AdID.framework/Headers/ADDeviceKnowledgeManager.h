// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ADDEVICEKNOWLEDGEMANAGER_H
#define ADDEVICEKNOWLEDGEMANAGER_H

@class ADSingleton, NSString, NSNumber, ADBackgroundTaskRequest;
@protocol BackgroundTaskDelegate;



@interface ADDeviceKnowledgeManager : ADSingleton <BackgroundTaskDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSNumber *refreshInterval; // ivar: _refreshInterval
@property (readonly) Class superclass;
@property (nonatomic) BOOL taskIsRunning; // ivar: _taskIsRunning
@property (retain, nonatomic) ADBackgroundTaskRequest *xpc_task; // ivar: _xpc_task


+(id)sharedInstance;
-(BOOL)runTask:(id)arg0 ;
-(id)init;
-(void)checkOnTask:(id)arg0 activity:(id)arg1 ;
-(void)processDeviceData:(id)arg0 ;
-(void)scheduleDeviceDataProcessing:(CGFloat)arg0 ;


@end


#endif