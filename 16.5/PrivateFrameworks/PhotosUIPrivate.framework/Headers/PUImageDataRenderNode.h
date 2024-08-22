// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PUIMAGEDATARENDERNODE_H
#define PUIMAGEDATARENDERNODE_H

@class PXRunNode, PICompositionController, NSString, NSArray, NSData;
@protocol PUImageDataRenderNode, PXRunNodeDelegate, PUImageInfoNode, PUVideoURLNode;



@interface PUImageDataRenderNode : PXRunNode <PUImageDataRenderNode>



@property (readonly, nonatomic) CGSize baseImageSize; // ivar: _baseImageSize
@property (readonly, getter=isCanceled) BOOL canceled;
@property (readonly, getter=isComplete) BOOL complete;
@property (readonly, copy, nonatomic) PICompositionController *compositionController; // ivar: _compositionController
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PXRunNodeDelegate> *delegate;
@property (readonly, copy, nonatomic) NSArray *dependencies;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSData *imageData; // ivar: _imageData
@property (readonly, nonatomic) NSObject<PUImageInfoNode> *imageDataNode; // ivar: _imageDataNode
@property (readonly, nonatomic) CGFloat jpegCompression; // ivar: _jpegCompression
@property (readonly, copy, nonatomic) NSString *livePhotoPairingIdentifier; // ivar: _livePhotoPairingIdentifier
@property (readonly, nonatomic) CGSize renderedImageSize; // ivar: _renderedImageSize
@property (readonly, getter=isRunning) BOOL running;
@property (readonly) NSUInteger state;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<PUVideoURLNode> *videoURLNode; // ivar: _videoURLNode
@property (readonly, getter=isWaiting) BOOL waiting;


-(BOOL)_isInputValid;
-(id)_editSource;
-(id)initWithImageInfoNode:(id)arg0 videoURLNode:(id)arg1 compositionController:(id)arg2 livePhotoPairingIdentifier:(id)arg3 jpegCompression:(CGFloat)arg4 ;
-(void)_handleRenderCompletedWithJpegData:(id)arg0 baseSize:(struct CGSize )arg1 editedSize:(struct CGSize )arg2 ;
-(void)run;


@end


#endif