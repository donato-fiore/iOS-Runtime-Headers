// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDSHPLUGINSERVER_H
#define HDSHPLUGINSERVER_H

@class HDStandardTaskServer, HDProfile, HDHealthStoreClient, NSString;
@protocol HDDiagnosticObject, HDSleepHealthDaemonPluginServerInterface, OS_dispatch_queue;


#import "HDSHProfileExtension.h"

@interface HDSHPluginServer : HDStandardTaskServer <HDDiagnosticObject, HDSleepHealthDaemonPluginServerInterface>

 {
    HDProfile *_profile;
    HDSHProfileExtension *_profileExtension;
    HDHealthStoreClient *_client;
    NSObject<OS_dispatch_queue> *_serializer;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)requiredEntitlements;
+(id)taskIdentifier;
-(BOOL)_deleteSamples:(id)arg0 error:(*id)arg1 ;
-(BOOL)_insertSamplesWithClientSource:(id)arg0 error:(*id)arg1 ;
-(BOOL)_populateSamplesToInsert:(id)arg0 samplesToDelete:(id)arg1 forSleepDurationGoal:(id)arg2 error:(*id)arg3 ;
-(BOOL)_populateSamplesToInsert:(id)arg0 samplesToDelete:(id)arg1 forSleepSchedules:(id)arg2 error:(*id)arg3 ;
-(BOOL)_replaceSamples:(id)arg0 withSamples:(id)arg1 error:(*id)arg2 ;
-(id)diagnosticDescription;
-(id)exportedInterface;
-(id)initWithUUID:(id)arg0 configuration:(id)arg1 client:(id)arg2 delegate:(id)arg3 ;
-(id)remoteInterface;
-(void)_saveSleepTrackingSamplesAfterFirstUnlock:(id)arg0 completion:(id)arg1 ;
-(void)connectionInvalidated;
-(void)remote_saveSleepTrackingSamples:(id)arg0 completion:(id)arg1 ;
-(void)remote_startSleepTrackingSession;
-(void)remote_stopSleepTrackingSession;
-(void)remote_updateCurrentSleepSchedules:(id)arg0 sleepDurationGoal:(id)arg1 completion:(id)arg2 ;


@end


#endif