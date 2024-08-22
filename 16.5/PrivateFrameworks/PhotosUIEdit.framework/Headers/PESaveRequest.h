// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PESAVEREQUEST_H
#define PESAVEREQUEST_H

@class NSProgress, PICompositionController, PHContentEditingOutput, NUComposition, PHAsset;

#import <Foundation/Foundation.h>


@interface PESaveRequest : NSObject {
    id *_completionHandler;
    CGFloat _beginTimestamp;
    NSProgress *_videoExportProgress;
}


@property (nonatomic) BOOL applyVideoOrientationAsMetadata; // ivar: _applyVideoOrientationAsMetadata
@property (readonly, copy, nonatomic) PICompositionController *compositionController; // ivar: _compositionController
@property (readonly, nonatomic) PHContentEditingOutput *contentEditingOutput; // ivar: _contentEditingOutput
@property (nonatomic) BOOL crossPlatformSerializationEnabled; // ivar: _crossPlatformSerializationEnabled
@property (readonly, nonatomic) NSInteger currentState; // ivar: _currentState
@property (readonly, nonatomic) int identifier; // ivar: _identifier
@property (readonly, nonatomic) NUComposition *originalComposition; // ivar: _originalComposition
@property (readonly, nonatomic) PHAsset *photo; // ivar: _photo
@property (readonly, nonatomic) CGFloat progress;
@property (readonly, nonatomic) BOOL supportsProgress;
@property (readonly, nonatomic) unsigned short videoComplementState; // ivar: _videoComplementState
@property (readonly, nonatomic) NSInteger workImageVersion; // ivar: _workImageVersion


-(BOOL)_requiresVideoRender;
-(id)init;
-(id)initWithPhoto:(id)arg0 compositionController:(id)arg1 contentEditingOutput:(id)arg2 workImageVersion:(NSInteger)arg3 livePhotoState:(unsigned short)arg4 originalComposition:(id)arg5 ;
-(id)initWithPhoto:(id)arg0 contentEditingOutput:(id)arg1 workImageVersion:(NSInteger)arg2 livePhotoState:(unsigned short)arg3 ;
-(id)initWithPhotoToRevertToOriginal:(id)arg0 ;
-(void)_finishWithSuccess:(BOOL)arg0 error:(id)arg1 ;
-(void)_performRevertToOriginalOperation;
-(void)_performSaveContentEditingOutput;
-(void)_performSaveEditsOperation;
-(void)_transitionToState:(NSInteger)arg0 ;
-(void)beginSaveOperationWithCompletionHandler:(id)arg0 ;
-(void)cancelSaveOperation;


@end


#endif