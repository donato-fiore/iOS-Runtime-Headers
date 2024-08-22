// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NTKPHOTOSFACEVIEW_H
#define NTKPHOTOSFACEVIEW_H

@class UITapGestureRecognizer, UIView, NSMutableArray, UILabel, NSString;
@protocol NTKPhotosReaderDelegate;


#import "NTKBasePhotosFaceView.h"
#import "NTKPhotosReader.h"
#import "_NTKPhotoIndexGenerator.h"
#import "NTKCachedPhoto.h"

@interface NTKPhotosFaceView : NTKBasePhotosFaceView <NTKPhotosReaderDelegate>

 {
    BOOL _isContentLoaded;
    BOOL _isTimetravelScrubbing;
    BOOL _isAnalysisOperationInProgress;
    BOOL _inPhotoTransition;
    NTKPhotosReader *_reader;
    _NTKPhotoIndexGenerator *_generator;
    NSUInteger _currentContent;
    NSUInteger _currentAnalysisOperationID;
    UITapGestureRecognizer *_singleTapGesture;
    UIView *_photoTransitionSnapshotView;
    UIView *_photoTransitionCornerView;
    NSUInteger _queuedTransitionCount;
    NSUInteger _preloadGeneration;
    NSUInteger _numberOfPhotos;
    id *_enqueuePreloadedPhotoCompletion;
    NSMutableArray *_preloaded;
    NSMutableArray *_toload;
    NSUInteger _deviceSizeClass;
    UILabel *_aplLabel;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NTKCachedPhoto *presentedPhoto; // ivar: _presentedPhoto
@property (readonly) Class superclass;


-(BOOL)_canOperationProceed:(NSUInteger)arg0 ;
-(BOOL)_enqueuePreloadedPhoto:(id)arg0 ifMatchingGeneration:(NSUInteger)arg1 ;
-(BOOL)_preloadNextPhoto;
-(BOOL)_shouldAnimationContinue:(BOOL)arg0 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg0 ;
-(CGFloat)_backgroundImageAlphaForEditMode:(NSInteger)arg0 ;
-(CGFloat)_timeLabelAlphaForEditMode:(NSInteger)arg0 ;
-(Class)photosFaceClass;
-(id)_analysisCacheKeyFor:(id)arg0 ;
-(id)_analysisForAlignment:(NSUInteger)arg0 ;
-(id)_cachedAnalysisForKey:(id)arg0 ;
-(id)_createAndCachePhotoAnalysisForKey:(id)arg0 dateAlignment:(NSUInteger)arg1 image:(id)arg2 ;
-(id)_dequeueToLoadIfMatchingGeneration:(NSUInteger)arg0 ;
-(id)initWithFaceStyle:(NSInteger)arg0 forDevice:(id)arg1 clientIdentifier:(id)arg2 ;
-(void)_animationFinished:(BOOL)arg0 ;
-(void)_animationStart;
-(void)_applyFrozen;
-(void)_applyOption:(id)arg0 forCustomEditMode:(NSInteger)arg1 slot:(id)arg2 ;
-(void)_cleanupAfterEditing;
-(void)_clearPreloaded;
-(void)_configureForEditMode:(NSInteger)arg0 ;
-(void)_didStartPlayingIrisOnSingleTap;
-(void)_displayCachedPhoto:(id)arg0 animated:(BOOL)arg1 preroll:(BOOL)arg2 completion:(id)arg3 ;
-(void)_endScrubbingAnimated:(BOOL)arg0 withCompletion:(id)arg1 ;
-(void)_finalizeForSnapshotting:(id)arg0 ;
-(void)_handleSingleTap:(id)arg0 ;
-(void)_loadSnapshotContentViews;
-(void)_nextPhotoAnimated:(BOOL)arg0 preroll:(BOOL)arg1 method:(NSUInteger)arg2 completion:(id)arg3 ;
-(void)_nextPhotoReadyAnimated:(BOOL)arg0 preroll:(BOOL)arg1 completion:(id)arg2 ;
-(void)_operationIsDone;
-(void)_resetTapAnimationState;
-(void)_startBackgroundRefill;
-(void)_startScrubbingAnimated:(BOOL)arg0 withCompletion:(id)arg1 ;
-(void)_unloadSnapshotContentViews;
-(void)_updateContents:(BOOL)arg0 ;
-(void)_updateDateAttributesAnimated:(BOOL)arg0 ;
-(void)_updateDateAttributesAnimated:(BOOL)arg0 completion:(id)arg1 ;
-(void)_updateForResourceDirectoryChange:(id)arg0 ;
-(void)_updateImageToBlur;
-(void)_updateReader:(BOOL)arg0 ;
-(void)layoutSubviews;
-(void)readerDidChange:(id)arg0 ;


@end


#endif