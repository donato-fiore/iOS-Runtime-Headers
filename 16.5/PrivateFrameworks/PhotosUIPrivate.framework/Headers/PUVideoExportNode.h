// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PUVIDEOEXPORTNODE_H
#define PUVIDEOEXPORTNODE_H

@class PXRunNode, PICompositionController, NSString, NSArray, NSProgress, NSURL;
@protocol PUVideoURLExportNode, PXRunNodeDelegate, PUImageInfoNode, PUVideoURLNode;



@interface PUVideoExportNode : PXRunNode <PUVideoURLExportNode>



@property (readonly, getter=isCanceled) BOOL canceled;
@property (readonly, getter=isComplete) BOOL complete;
@property (readonly, copy, nonatomic) PICompositionController *compositionController; // ivar: _compositionController
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PXRunNodeDelegate> *delegate;
@property (readonly, copy, nonatomic) NSArray *dependencies;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSProgress *exportProgress; // ivar: _exportProgress
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<PUImageInfoNode> *imageInfoNode; // ivar: _imageInfoNode
@property (readonly, copy, nonatomic) NSString *livePhotoPairingIdentifier; // ivar: _livePhotoPairingIdentifier
@property (readonly, nonatomic) CGFloat progress;
@property (readonly, nonatomic) NSUInteger quality; // ivar: _quality
@property (readonly, nonatomic) CGSize renderedVideoSize; // ivar: _renderedVideoSize
@property (readonly, getter=isRunning) BOOL running;
@property (readonly) NSUInteger state;
@property (readonly) Class superclass;
@property (retain, nonatomic) NSURL *videoURL; // ivar: _videoURL
@property (readonly, nonatomic) NSObject<PUVideoURLNode> *videoURLNode; // ivar: _videoURLNode
@property (readonly, getter=isWaiting) BOOL waiting;


-(id)_editSource;
-(id)_exportPresetName;
-(id)_newOutputURL;
-(id)initWithVideoURLNode:(id)arg0 imageURLNode:(id)arg1 quality:(NSUInteger)arg2 livePhotoPairingIdentifier:(id)arg3 compositionController:(id)arg4 ;
-(void)_handleExportCompletedWithSuccess:(BOOL)arg0 editedSize:(struct CGSize )arg1 error:(id)arg2 ;
-(void)didCancel;
-(void)run;


@end


#endif