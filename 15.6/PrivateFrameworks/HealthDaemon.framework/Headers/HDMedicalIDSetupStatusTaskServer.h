// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HDMEDICALIDSETUPSTATUSTASKSERVER_H
#define HDMEDICALIDSETUPSTATUSTASKSERVER_H

@class NSString;
@protocol HKMedicalIDSetupStatusServerInterface;


#import "HDStandardTaskServer.h"

@interface HDMedicalIDSetupStatusTaskServer : HDStandardTaskServer <HKMedicalIDSetupStatusServerInterface>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)validateClient:(id)arg0 error:(*id)arg1 ;
+(id)requiredEntitlements;
+(id)taskIdentifier;
-(id)exportedInterface;
-(id)remoteInterface;
-(void)remote_medicalIDSetUpStatusWithCompletion:(id)arg0 ;


@end


#endif