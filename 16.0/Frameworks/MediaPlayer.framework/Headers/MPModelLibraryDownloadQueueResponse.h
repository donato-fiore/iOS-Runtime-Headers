// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MPMODELLIBRARYDOWNLOADQUEUERESPONSE_H
#define MPMODELLIBRARYDOWNLOADQUEUERESPONSE_H

@class NSString;
@protocol MPMediaDownloadObserver;


#import "MPModelResponse.h"

@interface MPModelLibraryDownloadQueueResponse : MPModelResponse <MPMediaDownloadObserver>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithRequest:(id)arg0 ;
-(void)dealloc;
-(void)downloadManager:(id)arg0 didEnqueueAssetDownloads:(id)arg1 didRemoveAssetDownloads:(id)arg2 ;
-(void)downloadManager:(id)arg0 didFinishAsset:(id)arg1 withError:(id)arg2 ;
-(void)getChangeDetailsFromPreviousResponse:(id)arg0 completion:(id)arg1 ;


@end


#endif