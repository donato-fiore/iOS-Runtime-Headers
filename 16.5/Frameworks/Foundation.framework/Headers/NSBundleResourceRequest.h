// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NSBUNDLERESOURCEREQUEST_H
#define NSBUNDLERESOURCEREQUEST_H

@class NSSet;
@protocol NSProgressReporting;

#import <Foundation/Foundation.h>

#import "NSBundle.h"
#import "NSProgress.h"
#import "NSString.h"

@interface NSBundleResourceRequest : NSObject <NSProgressReporting>

 {
    NSSet *_tags;
    CGFloat _priority;
    NSBundle *_bundle;
    NSProgress *_progress;
    NSInteger _fetchState;
}


@property (readonly) NSBundle *bundle;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property CGFloat loadingPriority;
@property (readonly) NSProgress *progress;
@property (readonly) Class superclass;
@property (readonly, copy) NSSet *tags;


+(id)_assetPackBundleForBundle:(id)arg0 withAssetPackID:(id)arg1 ;
+(id)_connection;
+(id)_extensionEndpoint;
+(id)_extensionEndpointForMainBundleOfHostApplication:(id)arg0 ;
+(id)_manifestWithBundle:(id)arg0 error:(*id)arg1 ;
+(void)_addExtensionEndpoint:(id)arg0 ;
+(void)_flushCacheForBundle:(id)arg0 ;
+(void)_setConnection:(id)arg0 ;
-(id)init;
-(id)initWithTag:(id)arg0 ;
-(id)initWithTags:(id)arg0 ;
-(id)initWithTags:(id)arg0 bundle:(id)arg1 ;
-(void)beginAccessingResourcesWithCompletionHandler:(id)arg0 ;
-(void)conditionallyBeginAccessingResourcesWithCompletionHandler:(id)arg0 ;
-(void)dealloc;
-(void)endAccessingResources;


@end


#endif