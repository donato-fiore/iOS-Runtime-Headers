// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PUEDITABLEMEDIAPROVIDERVIDEOASSETNODE_H
#define PUEDITABLEMEDIAPROVIDERVIDEOASSETNODE_H

@class PXRunNode, NSString, NSArray, AVAsset;
@protocol PUVideoAssetNode, PUEditableAsset, PXRunNodeDelegate;


#import "PUEditableMediaProvider.h"

@interface PUEditableMediaProviderVideoAssetNode : PXRunNode <PUVideoAssetNode>

 {
    int _requestID;
}


@property (readonly, nonatomic) NSObject<PUEditableAsset> *asset; // ivar: _asset
@property (readonly, getter=isCanceled) BOOL canceled;
@property (readonly, getter=isComplete) BOOL complete;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PXRunNodeDelegate> *delegate;
@property (readonly, copy, nonatomic) NSArray *dependencies;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) PUEditableMediaProvider *mediaProvider; // ivar: _mediaProvider
@property (readonly, getter=isRunning) BOOL running;
@property (readonly) NSUInteger state;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSInteger version; // ivar: _version
@property (readonly, nonatomic) AVAsset *videoAsset; // ivar: _videoAsset
@property (readonly, getter=isWaiting) BOOL waiting;


-(id)initWithAsset:(id)arg0 mediaProvider:(id)arg1 version:(NSInteger)arg2 ;
-(void)_handleDidLoadVideo:(id)arg0 info:(id)arg1 ;
-(void)run;


@end


#endif