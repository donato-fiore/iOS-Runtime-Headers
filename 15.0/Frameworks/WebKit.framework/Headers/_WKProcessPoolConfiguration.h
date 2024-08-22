// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _WKPROCESSPOOLCONFIGURATION_H
#define _WKPROCESSPOOLCONFIGURATION_H

@class NSArray, NSSet, NSString, NSURL;
@protocol WKObject, NSCopying;

#import <Foundation/Foundation.h>


@interface _WKProcessPoolConfiguration : NSObject <WKObject, NSCopying>

 {
    ObjectStorage<API::ProcessPoolConfiguration> _processPoolConfiguration;
}


@property (nonatomic, getter=isJITEnabled) BOOL JITEnabled;
@property (readonly) *Object _apiObject;
@property (copy, nonatomic) NSArray *additionalReadAccessAllowedURLs;
@property (nonatomic) BOOL alwaysKeepAndReuseSwappedProcesses;
@property (copy, nonatomic) NSArray *alwaysRevalidatedURLSchemes;
@property (nonatomic) BOOL alwaysRunsAtBackgroundPriority;
@property (nonatomic) BOOL attrStyleEnabled;
@property (copy, nonatomic) NSArray *cachePartitionedURLSchemes;
@property (nonatomic) BOOL configureJSCForTesting;
@property (copy, nonatomic) NSSet *customClassesForParameterCoder;
@property (copy, nonatomic) NSString *customWebContentServiceBundleIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) NSInteger diskCacheSizeOverride;
@property (nonatomic) BOOL diskCacheSpeculativeValidationEnabled;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic, setter=setHSTSStorageDirectory:) NSURL *hstsStorageDirectory;
@property (nonatomic) BOOL ignoreSynchronousMessagingTimeoutsForTesting;
@property (copy, nonatomic) NSURL *injectedBundleURL;
@property (nonatomic) NSUInteger maximumProcessCount;
@property (nonatomic) BOOL pageCacheEnabled;
@property (nonatomic) int presentingApplicationPID;
@property (nonatomic) BOOL prewarmsProcessesAutomatically;
@property (nonatomic) BOOL processSwapsOnNavigation;
@property (nonatomic) BOOL processSwapsOnNavigationWithinSameNonHTTPFamilyProtocol;
@property (nonatomic) BOOL processSwapsOnWindowOpenWithOpener;
@property (nonatomic) BOOL shouldCaptureAudioInUIProcess; // ivar: _shouldCaptureAudioInUIProcess
@property (nonatomic) BOOL shouldTakeUIBackgroundAssertion;
@property (nonatomic) BOOL shouldThrowExceptionForGlobalConstantRedeclaration;
@property (copy, nonatomic) NSString *sourceApplicationBundleIdentifier;
@property (copy, nonatomic) NSString *sourceApplicationSecondaryIdentifier;
@property (readonly) Class superclass;
@property (nonatomic) BOOL usesSingleWebProcess;
@property (nonatomic) BOOL usesWebProcessCache;
@property (nonatomic) NSUInteger wirelessContextIdentifier;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(void)dealloc;


@end


#endif