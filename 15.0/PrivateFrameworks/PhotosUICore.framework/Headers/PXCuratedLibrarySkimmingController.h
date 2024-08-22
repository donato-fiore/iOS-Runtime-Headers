// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXCURATEDLIBRARYSKIMMINGCONTROLLER_H
#define PXCURATEDLIBRARYSKIMMINGCONTROLLER_H

@class UISelectionFeedbackGenerator, NSString, NSArray, NSTimer;
@protocol PXChangeObserver, PXCuratedLibrarySkimmingControllerDelegate;

#import <Foundation/Foundation.h>

#import "PXAssetCollectionReference.h"
#import "PXCuratedLibraryAssetCollectionSkimmingModel.h"

@interface PXCuratedLibrarySkimmingController : NSObject <PXChangeObserver>

 {
    UISelectionFeedbackGenerator *_skimmingFeedbackGenerator;
    CGFloat _slideshowTriggerDelay;
    CGFloat _slideshowIntervalDelay;
}


@property (readonly, nonatomic) BOOL canStartSkimming;
@property (nonatomic) NSInteger currentSkimmingIndex; // ivar: _currentSkimmingIndex
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PXCuratedLibrarySkimmingControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isTouching;
@property (nonatomic) CGFloat lastPanningTranslation; // ivar: _lastPanningTranslation
@property (retain, nonatomic) PXAssetCollectionReference *preSkimmedAssetCollectionReference; // ivar: _preSkimmedAssetCollectionReference
@property (nonatomic) NSInteger skimmingDataSourceIdentifier; // ivar: _skimmingDataSourceIdentifier
@property (retain, nonatomic) NSArray *skimmingIndexes; // ivar: _skimmingIndexes
@property (readonly, nonatomic) PXCuratedLibraryAssetCollectionSkimmingModel *skimmingModel; // ivar: _skimmingModel
@property (nonatomic) BOOL skimmingSlideshowEnabled; // ivar: _skimmingSlideshowEnabled
@property (retain, nonatomic) NSTimer *slideshowTimer; // ivar: _slideshowTimer
@property (nonatomic) NSInteger state; // ivar: _state
@property (readonly) Class superclass;


+(id)new;
-(BOOL)endTouchingGestureEnded:(BOOL)arg0 ;
-(id)init;
-(id)initWithSkimmingModel:(id)arg0 ;
-(void)_adoptIndexesFromSkimmingModel;
-(void)_cancelEnteringTouchingState;
-(void)_cleanupFeedbackGenerator;
-(void)_ensureFeedbackGenerator;
-(void)_enterIdleStatePersistSkimmingState:(BOOL)arg0 ;
-(void)_enterSlideshowStateForAssetCollectionReference:(id)arg0 ;
-(void)_enterTouchingStateForAssetCollectionReference:(id)arg0 ;
-(void)_generateFeedbackForSkimmingGesture;
-(void)_slideshowTimerTick:(id)arg0 ;
-(void)_startOrResumeSlideshowTouchesEnded:(BOOL)arg0 ;
-(void)_stopSlideshow;
-(void)_updateSlideshow;
-(void)contentViewDidScroll;
-(void)contentViewWillScroll;
-(void)endPanning;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;
-(void)startPanningForAssetCollectionReference:(id)arg0 ;
-(void)startTouchingForAssetCollectionReference:(id)arg0 ;
-(void)updatePanningWithTranslation:(struct CGPoint )arg0 ;


@end


#endif