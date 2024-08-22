// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PUEDITABLEMEDIAPROVIDERIMAGEDATANODE_H
#define PUEDITABLEMEDIAPROVIDERIMAGEDATANODE_H

@class PXRunNode, NSString, NSArray, NSData, NSURL;
@protocol PUImageDataNode, PUImageInfoNode, PUEditableAsset, PXRunNodeDelegate;


#import "PUEditableMediaProvider.h"

@interface PUEditableMediaProviderImageDataNode : PXRunNode <PUImageDataNode, PUImageInfoNode>

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
@property (readonly, nonatomic) NSData *imageData; // ivar: _imageData
@property (readonly, nonatomic) NSURL *imageDataURL; // ivar: _imageDataURL
@property (readonly, nonatomic) NSString *imageDataUTI; // ivar: _imageDataUTI
@property (readonly, nonatomic) NSInteger imageExifOrientation; // ivar: _imageExifOrientation
@property (readonly, nonatomic) PUEditableMediaProvider *mediaProvider; // ivar: _mediaProvider
@property (readonly, getter=isRunning) BOOL running;
@property (readonly) NSUInteger state;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL useEmbeddedPreview; // ivar: _useEmbeddedPreview
@property (readonly, nonatomic) NSInteger version; // ivar: _version
@property (readonly, getter=isWaiting) BOOL waiting;


-(id)initWithAsset:(id)arg0 mediaProvider:(id)arg1 version:(NSInteger)arg2 ;
-(void)_handleLoadedImageData:(id)arg0 imageUTI:(id)arg1 imageOrientation:(NSInteger)arg2 info:(id)arg3 ;
-(void)didCancel;
-(void)run;


@end


#endif