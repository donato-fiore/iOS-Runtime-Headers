// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AMSFEATUREFLAGTASK_H
#define AMSFEATUREFLAGTASK_H

@class NSString;
@protocol AMSBagConsumer;


#import "AMSTask.h"

@interface AMSFeatureFlagTask : AMSTask <AMSBagConsumer>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)_cacheResponse:(id)arg0 error:(*id)arg1 ;
+(id)_cacheDirectory;
+(id)_cachePath;
+(id)bagSubProfile;
+(id)bagSubProfileVersion;
+(id)cachedRemoteGroups;
+(id)createBagForSubProfile;
+(id)lastFetchedDate;
+(void)_handleDeletedITFEsFromResponse:(id)arg0 ;
+(void)clearCache;
-(id)_updateRemoteFeatureFlags;
-(id)perform;


@end


#endif