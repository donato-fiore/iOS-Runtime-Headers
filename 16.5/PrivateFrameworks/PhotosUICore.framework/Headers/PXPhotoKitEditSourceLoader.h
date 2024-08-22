// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXPHOTOKITEDITSOURCELOADER_H
#define PXPHOTOKITEDITSOURCELOADER_H

@class NSDate, NSProgress, PLEditSource, PHAsset, PICompositionController, NSString, NSError, NSNumber;
@protocol PXEditSourceLoader, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface PXPhotoKitEditSourceLoader : NSObject <PXEditSourceLoader>

 {
    NSUInteger _loadingQueue_imageRequestID;
    NSDate *_mainQueue_loadingStartDate;
    NSProgress *_editSourceCreationProgress;
    NSObject<OS_dispatch_queue> *_loadingQueue;
    BOOL _overcaptureSourceIsActive;
}


@property (readonly, nonatomic) PLEditSource *activeEditSource;
@property (readonly, nonatomic) PHAsset *asset; // ivar: _asset
@property (readonly, nonatomic) NSInteger baseVersion; // ivar: _baseVersion
@property (readonly, copy, nonatomic) PICompositionController *compositionController; // ivar: _compositionController
@property (readonly, copy, nonatomic) NSString *contentIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) PLEditSource *editSource; // ivar: _editSource
@property (readonly, nonatomic) NSError *error; // ivar: _error
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *livePhotoPairingIdentifier; // ivar: _livePhotoPairingIdentifier
@property (readonly, nonatomic) NSNumber *loadDuration; // ivar: _loadDuration
@property (readonly, copy, nonatomic) PICompositionController *originalCompositionController; // ivar: _originalCompositionController
@property (readonly, nonatomic) PLEditSource *overcaptureEditSource; // ivar: _overcaptureEditSource
@property (readonly, nonatomic) NSProgress *progress; // ivar: _progress
@property (readonly) Class superclass;


-(id)initWithAsset:(id)arg0 ;
-(void)_cancelContentInputRequest;
-(void)_handleCancellation;
-(void)_handleContentEditingInputRequestCompletion:(id)arg0 info:(id)arg1 asset:(id)arg2 ;
-(void)_mainQueue_handleEditSource:(id)arg0 overCaptureEditSource:(id)arg1 compositionController:(id)arg2 originalCompositionController:(id)arg3 overCaptureEditSourceIsActive:(BOOL)arg4 error:(id)arg5 ;
-(void)beginLoading;


@end


#endif