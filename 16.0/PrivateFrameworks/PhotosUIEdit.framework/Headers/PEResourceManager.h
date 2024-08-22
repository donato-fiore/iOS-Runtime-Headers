// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PERESOURCEMANAGER_H
#define PERESOURCEMANAGER_H

@class NSString, NSMutableSet;
@protocol PEResourceLoaderDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface PEResourceManager : NSObject <PEResourceLoaderDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *loadingQueue; // ivar: _loadingQueue
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *resourceQueue; // ivar: _resourceQueue
@property (readonly, nonatomic) NSMutableSet *resourceSet; // ivar: _resourceSet
@property (readonly) Class superclass;


-(id)compositionControllerWithoutSource:(id)arg0 ;
-(id)compositionControllerWithoutSource:(id)arg0 originalComposition:(BOOL)arg1 editorBundleID:(*id)arg2 ;
-(id)init;
-(id)originalCompositionControllerWithoutSource:(id)arg0 reconstructIfMissing:(BOOL)arg1 ;
-(void)_removeFromSet:(id)arg0 ;
-(void)_resourceLoader:(id)arg0 loadedResult:(id)arg1 error:(id)arg2 ;
-(void)cancelAllRequests;
// -(void)loadResourceForAsset:(id)arg0 requireLocalResources:(BOOL)arg1 forceRunAsUnadjustedAsset:(BOOL)arg2 progressHandler:(id)arg3 resultHandler:(unk)arg4  ;
-(void)resourceLoader:(id)arg0 request:(id)arg1 didCompleteWithResult:(id)arg2 ;
-(void)resourceLoader:(id)arg0 request:(id)arg1 downloadProgress:(CGFloat)arg2 ;
-(void)resourceLoader:(id)arg0 request:(id)arg1 mediaLoadDidFailWithError:(id)arg2 ;


@end


#endif