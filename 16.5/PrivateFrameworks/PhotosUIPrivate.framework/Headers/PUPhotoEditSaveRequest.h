// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PUPHOTOEDITSAVEREQUEST_H
#define PUPHOTOEDITSAVEREQUEST_H

@class NSProgress, PICompositionController, PHContentEditingOutput, NUComposition, PHAsset;

#import <Foundation/Foundation.h>

#import "PUPhotoEditIrisModel.h"

@interface PUPhotoEditSaveRequest : NSObject {
    id *_completionHandler;
    CGFloat _beginTimestamp;
    BOOL _useRawIfAvailable;
    NSProgress *_videoExportProgress;
}


@property (readonly, copy, nonatomic) PICompositionController *compositionController; // ivar: _compositionController
@property (readonly, nonatomic) PHContentEditingOutput *contentEditingOutput; // ivar: _contentEditingOutput
@property (readonly, nonatomic) NSInteger currentState; // ivar: _currentState
@property (readonly, nonatomic) int identifier; // ivar: _identifier
@property (readonly, copy, nonatomic) PUPhotoEditIrisModel *irisModel; // ivar: _irisModel
@property (readonly, nonatomic) NUComposition *originalComposition; // ivar: _originalComposition
@property (readonly, nonatomic) PHAsset *photo; // ivar: _photo
@property (readonly, nonatomic) CGFloat progress;
@property (readonly, nonatomic) BOOL supportsProgress;
@property (readonly, nonatomic) NSInteger workImageVersion; // ivar: _workImageVersion


-(BOOL)_requiresVideoRender;
-(NSInteger)_imageRequestVersion;
-(NSInteger)_videoRequestVersion;
-(id)init;
-(id)initWithPhoto:(id)arg0 compositionController:(id)arg1 contentEditingOutput:(id)arg2 workImageVersion:(NSInteger)arg3 irisEditModel:(id)arg4 originalComposition:(id)arg5 useRawIfAvailable:(BOOL)arg6 ;
-(id)initWithPhoto:(id)arg0 contentEditingOutput:(id)arg1 workImageVersion:(NSInteger)arg2 irisEditModel:(id)arg3 useRawIfAvailable:(BOOL)arg4 ;
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