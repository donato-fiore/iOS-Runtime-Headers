// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PUSAVEREVIEWASSETREQUEST_H
#define PUSAVEREVIEWASSETREQUEST_H

@class PICompositionController, PHContentEditingOutput, NSString, NSURL;
@protocol PXRunNodeDelegate, PUEditableAsset;

#import <Foundation/Foundation.h>

#import "PUReviewCreateAssetNode.h"
#import "PUVideoExportNode.h"
#import "PUEditableMediaProvider.h"
#import "PUPhotoEditIrisModel.h"

@interface PUSaveReviewAssetRequest : NSObject <PXRunNodeDelegate>

 {
    id *_completionHandler;
    CGFloat _beginTimestamp;
    PUReviewCreateAssetNode *_outputNode;
    PUVideoExportNode *_videoExportNode;
}


@property (readonly, copy, nonatomic) PICompositionController *compositionController; // ivar: _compositionController
@property (readonly, nonatomic) PHContentEditingOutput *contentEditingOutput; // ivar: _contentEditingOutput
@property (readonly, nonatomic) NSInteger currentState; // ivar: _currentState
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSURL *directory; // ivar: _directory
@property (readonly, nonatomic) NSObject<PUEditableAsset> *editableAsset; // ivar: _editableAsset
@property (readonly, nonatomic) PUEditableMediaProvider *editableMediaProvider; // ivar: _editableMediaProvider
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) int identifier; // ivar: _identifier
@property (readonly, copy, nonatomic) PUPhotoEditIrisModel *irisModel; // ivar: _irisModel
@property (readonly, nonatomic) CGFloat progress;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL supportsProgress;
@property (readonly, nonatomic) NSInteger workImageVersion; // ivar: _workImageVersion


-(BOOL)_requiresVideoRender;
-(NSInteger)_imageRequestVersion;
-(NSInteger)_videoRequestVersion;
-(id)init;
-(id)initWithAsset:(id)arg0 mediaProvider:(id)arg1 directory:(id)arg2 compositionController:(id)arg3 contentEditingOutput:(id)arg4 workImageVersion:(NSInteger)arg5 irisEditModel:(id)arg6 ;
-(id)initWithAsset:(id)arg0 mediaProvider:(id)arg1 directory:(id)arg2 compositionController:(id)arg3 workImageVersion:(NSInteger)arg4 irisEditModel:(id)arg5 ;
-(id)initWithAsset:(id)arg0 mediaProvider:(id)arg1 directory:(id)arg2 contentEditingOutput:(id)arg3 workImageVersion:(NSInteger)arg4 irisEditModel:(id)arg5 ;
-(id)initWithAssetForCopying:(id)arg0 mediaProvider:(id)arg1 directory:(id)arg2 resourceURL:(id)arg3 contentEditingOutput:(id)arg4 workImageVersion:(NSInteger)arg5 irisEditModel:(id)arg6 ;
-(id)initWithAssetForRevertToOriginal:(id)arg0 mediaProvider:(id)arg1 directory:(id)arg2 ;
-(void)_finishWithAsset:(id)arg0 error:(id)arg1 ;
-(void)_handleOutputNodeFinishedWithError:(id)arg0 ;
-(void)_performInternalSaveOperation;
-(void)_performSaveOperation;
-(void)_transitionToState:(NSInteger)arg0 ;
-(void)beginSaveOperationWithCompletionHandler:(id)arg0 ;
-(void)cancelSaveOperation;
-(void)runNode:(id)arg0 didCancelWithError:(id)arg1 ;
-(void)runNode:(id)arg0 didCompleteWithError:(id)arg1 ;


@end


#endif