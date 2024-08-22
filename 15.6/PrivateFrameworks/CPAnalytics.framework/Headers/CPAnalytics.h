// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CPANALYTICS_H
#define CPANALYTICS_H

@class PHPhotoLibrary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "CPAnalyticsDestinationsRegistry.h"
#import "CPAnalyticsSystemProperties.h"

@interface CPAnalytics : NSObject

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *eventsQueue; // ivar: _eventsQueue
@property (retain, nonatomic) PHPhotoLibrary *photoLibrary; // ivar: _photoLibrary
@property (readonly, nonatomic) CPAnalyticsDestinationsRegistry *registry; // ivar: _registry
@property (readonly) NSInteger signpostUniqueValue; // ivar: _signpostUniqueValue
@property (readonly, nonatomic) CPAnalyticsSystemProperties *systemProperties; // ivar: _systemProperties


+(BOOL)isAllowed;
+(NSInteger)startSignpost;
+(id)_sharedInstance;
+(id)bucketNameForDouble:(CGFloat)arg0 bucketLimits:(id)arg1 numberFormatter:(id)arg2 ;
+(id)bucketNameForInteger:(NSInteger)arg0 bucketLimits:(NSInteger)arg1 ;
+(id)creationDateForSignpost:(NSInteger)arg0 ;
+(id)systemPropertyForKey:(id)arg0 ;
+(void)activateEventQueue;
+(void)addDestination:(id)arg0 ;
+(void)endSignpost:(NSInteger)arg0 forEventName:(id)arg1 withPayload:(id)arg2 ;
+(void)releasePhotoLibrary;
+(void)removeDestination:(id)arg0 ;
+(void)sendEvent:(id)arg0 withPayload:(id)arg1 ;
+(void)setupSystemPropertyProvidersForLibrary:(id)arg0 ;
+(void)setupWithConfigurationAtURL:(id)arg0 ;
+(void)setupWithConfigurationFilename:(id)arg0 inBundle:(id)arg1 ;
+(void)startAppTracking;
+(void)startViewTracking;
+(void)updateWithConfigurationFilename:(id)arg0 inBundle:(id)arg1 ;
-(NSInteger)_generateNextSignpostID;
-(NSInteger)startSignpost;
-(id)init;
-(void)_setupSystemPropertyProviders;
-(void)activateEventQueue;
-(void)addDestination:(id)arg0 ;
-(void)endSignpost:(NSInteger)arg0 forEventName:(id)arg1 withPayload:(id)arg2 ;
-(void)releasePhotoLibrary;
-(void)removeDestination:(id)arg0 ;
-(void)sendEvent:(id)arg0 withPayload:(id)arg1 ;
-(void)setupSystemPropertyProvidersForLibrary:(id)arg0 ;
-(void)setupWithConfigurationAtURL:(id)arg0 ;
-(void)setupWithConfigurationFilename:(id)arg0 inBundle:(id)arg1 ;
-(void)updateWithConfigurationFilename:(id)arg0 inBundle:(id)arg1 ;


@end


#endif