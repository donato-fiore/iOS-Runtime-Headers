// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PHASSETEXPORTREQUEST_H
#define PHASSETEXPORTREQUEST_H

@class NSURL, NSString, NSProgress, NSDictionary;
@protocol NSProgressReporting, OS_dispatch_queue, PHAssetExportRequestDelegate;

#import <Foundation/Foundation.h>

#import "PHAsset.h"

@interface PHAssetExportRequest : NSObject <NSProgressReporting>

 {
    NSURL *_outputDirectory;
    NSObject<OS_dispatch_queue> *_resourceProcessingQueue;
    NSObject<OS_dispatch_queue> *_serialQueue;
}


@property (readonly, nonatomic) PHAsset *asset; // ivar: _asset
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PHAssetExportRequestDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSProgress *progress; // ivar: _progress
@property (readonly, nonatomic) NSUInteger state; // ivar: _state
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSDictionary *variants; // ivar: _variants


+(id)exportRequestForAsset:(id)arg0 error:(*id)arg1 ;
+(id)exportRequestForAsset:(id)arg0 variants:(id)arg1 error:(*id)arg2 ;
-(BOOL)reassembleAdjustmentsPropertyListIfNeeded:(id)arg0 toOutputDirectory:(id)arg1 outputURL:(*id)arg2 error:(*id)arg3 ;
-(id)copyFileURLsIfNeeded:(id)arg0 toOutputDirectory:(id)arg1 options:(id)arg2 originalFilenameBase:(id)arg3 error:(*id)arg4 ;
-(id)init;
-(id)initWithAsset:(id)arg0 variants:(id)arg1 ;
-(id)outputDirectory;
-(void)bundleResourcesIfNeededForAsset:(id)arg0 withFileURLs:(id)arg1 options:(id)arg2 completion:(id)arg3 ;
-(void)exportWithOptions:(id)arg0 completionHandler:(id)arg1 ;
-(void)handleResultWithFileURLs:(id)arg0 cancelled:(BOOL)arg1 withError:(id)arg2 forAsset:(id)arg3 withOptions:(id)arg4 progress:(id)arg5 processingUnitCount:(NSInteger)arg6 completionHandler:(id)arg7 ;
-(void)performCompletionWithFileURLs:(id)arg0 error:(id)arg1 completionHandler:(id)arg2 ;
-(void)preflightExportWithOptions:(id)arg0 assetAvailability:(*NSInteger)arg1 isProcessingRequired:(*BOOL)arg2 fileURLs:(*id)arg3 info:(*id)arg4 ;
-(void)processResourcesAtFileURLs:(id)arg0 forAsset:(id)arg1 withOptions:(id)arg2 progress:(id)arg3 processingUnitCount:(NSInteger)arg4 completion:(id)arg5 ;


@end


#endif