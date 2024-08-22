// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PUEDITABLEMEDIAPROVIDERVIDEOURLNODE_H
#define PUEDITABLEMEDIAPROVIDERVIDEOURLNODE_H

@class PXRunNode, NSString, NSArray, NSURL;
@protocol PUVideoURLNode, PUEditableAsset, PXRunNodeDelegate;


#import "PUEditableMediaProvider.h"

@interface PUEditableMediaProviderVideoURLNode : PXRunNode <PUVideoURLNode>

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
@property (readonly, nonatomic) NSURL *videoURL; // ivar: _videoURL
@property (readonly, getter=isWaiting) BOOL waiting;


-(id)initWithAsset:(id)arg0 mediaProvider:(id)arg1 version:(NSInteger)arg2 ;
-(void)_handleDidLoadVideoURL:(id)arg0 info:(id)arg1 ;
-(void)run;


@end


#endif