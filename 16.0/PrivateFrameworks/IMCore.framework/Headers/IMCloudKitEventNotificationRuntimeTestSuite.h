// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IMCLOUDKITEVENTNOTIFICATIONRUNTIMETESTSUITE_H
#define IMCLOUDKITEVENTNOTIFICATIONRUNTIMETESTSUITE_H

@class IMRuntimeTestSuite, NSString;
@protocol IMCloudKitEventHandler;


#import "IMCloudKitHookTestSingleton.h"

@interface IMCloudKitEventNotificationRuntimeTestSuite : IMRuntimeTestSuite <IMCloudKitEventHandler>



@property (retain, nonatomic) IMCloudKitHookTestSingleton *cloudKitHooks; // ivar: _cloudKitHooks
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property BOOL shouldTearDown; // ivar: _shouldTearDown
@property (readonly) Class superclass;


+(void)runTestsIfNeeded;
-(id)init;
-(void)cloudKitEventNotificationManager:(id)arg0 syncProgressDidUpdate:(id)arg1 ;
-(void)setUp;
-(void)tearDown;


@end


#endif