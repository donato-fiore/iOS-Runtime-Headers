// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VKCIMAGEDATADETECTORVIEW_H
#define VKCIMAGEDATADETECTORVIEW_H

@class NSArray, NSString, NSMutableSet;
@protocol VKCDataDetectorElementViewDelegate, VKCMRCHighlightViewDelegate, VKCImageDataDetectorViewDelegate;


#import "VKCImageBaseOverlayView.h"

@interface VKCImageDataDetectorView : VKCImageBaseOverlayView <VKCDataDetectorElementViewDelegate, VKCMRCHighlightViewDelegate>



@property (retain, nonatomic) NSArray *allElements; // ivar: _allElements
@property (nonatomic) BOOL allowLongPressDDActivationOnly; // ivar: _allowLongPressDDActivationOnly
@property (nonatomic) CGRect boundsUsedToCalculateElementFrames; // ivar: _boundsUsedToCalculateElementFrames
@property (nonatomic) CGRect contentsRectUsedToCalculateElementFrames; // ivar: _contentsRectUsedToCalculateElementFrames
@property (nonatomic) NSUInteger dataDetectorTypes; // ivar: _dataDetectorTypes
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<VKCImageDataDetectorViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSMutableSet *displayedElementViews; // ivar: _displayedElementViews
@property (retain, nonatomic) NSArray *displayedElements; // ivar: _displayedElements
@property (retain, nonatomic) NSMutableSet *displayedMRCPills; // ivar: _displayedMRCPills
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL highlightSelectableItems; // ivar: _highlightSelectableItems
@property (readonly, nonatomic) BOOL needsElementFrameUpdate;
@property (readonly) Class superclass;
@property (retain, nonatomic) NSArray *unfilteredElements; // ivar: _unfilteredElements


-(BOOL)dataDetectorElementView:(id)arg0 shouldBeginAtPoint:(struct CGPoint )arg1 ;
-(BOOL)highlightView:(id)arg0 needsToAdjustQuad:(id)arg1 ;
-(BOOL)shouldFilterElementForSpecialCase:(id)arg0 ;
-(id)currentViewSpaceQaudForHighlightView:(id)arg0 ;
-(id)elementAtPoint:(struct CGPoint )arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)presentingViewControllerForInteractionWithDataDetectorElementView:(id)arg0 ;
-(id)previewForDataDetectorElementView:(id)arg0 ;
-(id)viewSpaceQuadsForDataDetectorElement:(id)arg0 ;
-(struct CGRect )frameForDataDetectorElement:(id)arg0 ;
-(void)activateLongPressDataDetectorAtPoint:(struct CGPoint )arg0 ;
-(void)dataDetectorElementView:(id)arg0 analyticsEventOccured:(id)arg1 ;
-(void)didMoveToSuperview;
-(void)layoutSubviews;
-(void)loadDataDetectorViewsFromDisplayedElements;
-(void)setContentsRect:(struct CGRect )arg0 ;
-(void)setCustomAnalyticsIdentifier:(id)arg0 ;
-(void)setFrame:(struct CGRect )arg0 ;
-(void)setRecognitionResult:(id)arg0 ;
-(void)showMRCPills:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)updateAllElementViewFrames;
-(void)updateAllElementViewFramesIfNecessary;
-(void)updateDisplayedElements;
-(void)willDismissMenuForDataDetectorElementView:(id)arg0 ;
-(void)willDisplayMenuForDataDetectorElementView:(id)arg0 ;


@end


#endif