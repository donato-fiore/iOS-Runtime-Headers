// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VNFRAMEWORKMANAGER_H
#define VNFRAMEWORKMANAGER_H

@class NSNotificationCenter, NSRecursiveLock, NSArray, NSString;
@protocol VNLegacyForcedCleanupImplementing, VNMTLDeviceWisdomParametersProviding, NSLocking;

#import <Foundation/Foundation.h>

#import "_VNWeakSessionsCollection.h"
#import "VNMTLDeviceWisdomParameters.h"

@interface VNFrameworkManager : NSObject <VNLegacyForcedCleanupImplementing, VNMTLDeviceWisdomParametersProviding>

 {
    NSNotificationCenter *_notificationCenter;
    NSRecursiveLock *_detectorAccessingLock;
    os_unfair_lock_s _sessionsAccessLock;
    _VNWeakSessionsCollection *_sessions;
    os_unfair_lock_s _wisdomParametersLock;
    VNMTLDeviceWisdomParameters *_wisdomParameters;
}


@property (readonly, copy) NSArray *allSessions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSObject<NSLocking> *detectorAccessingLock;
@property (readonly) NSUInteger hash;
@property (readonly) NSNotificationCenter *notificationCenter;
@property (readonly) Class superclass;


+(id)manager;
-(id)_locateDetectorOfClass:(Class)arg0 configuredWithOptions:(id)arg1 inSessions:(id)arg2 excludingSession:(id)arg3 ;
-(id)detectorOfClass:(Class)arg0 configuredWithOptions:(id)arg1 forSession:(id)arg2 error:(*id)arg3 ;
-(id)init;
-(id)loadedDetectors;
-(id)wisdomParameterForMTLDevice:(id)arg0 error:(*id)arg1 ;
-(id)wisdomParameterForMTLDeviceWithName:(id)arg0 error:(*id)arg1 ;
-(void)legacyForcedCleanupOfFacePipelineWithLevel:(id)arg0 ;
-(void)legacyForcedCleanupOfJunkPipelineWithLevel:(id)arg0 ;
-(void)legacyForcedCleanupOfScenePipelineWithLevel:(id)arg0 ;
-(void)legacyForcedCleanupOfSmartCamPipelineWithLevel:(id)arg0 ;
-(void)legacyForcedCleanupWithOptions:(id)arg0 ;
-(void)registerSession:(id)arg0 ;
-(void)releaseMetalDeviceWisdomParameters;


@end


#endif