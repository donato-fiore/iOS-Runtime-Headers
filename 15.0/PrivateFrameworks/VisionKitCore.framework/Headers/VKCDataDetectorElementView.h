// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VKCDATADETECTORELEMENTVIEW_H
#define VKCDATADETECTORELEMENTVIEW_H

@class NSArray, NSString, NSDictionary, UIBezierPath, CAShapeLayer, UIContextMenuInteraction, UITapGestureRecognizer;
@protocol UIContextMenuInteractionDelegate, UIGestureRecognizerDelegate, BCSActionDelegate, VKCDataDetectorElementViewDelegate;


#import "VKPlatformView.h"
#import "VKQuad.h"
#import "VKCBaseDataDetectorElement.h"
#import "VKCMRCDataDetectorElement.h"

@interface VKCDataDetectorElementView : VKPlatformView <UIContextMenuInteractionDelegate, UIGestureRecognizerDelegate, BCSActionDelegate>



@property (readonly, nonatomic) NSArray *allDataDetectorElements; // ivar: _allDataDetectorElements
@property (nonatomic) BOOL allowLongPressDDActivationOnly; // ivar: _allowLongPressDDActivationOnly
@property (readonly, nonatomic) VKQuad *boundingQuadInBoundsCoordinates;
@property (copy, nonatomic) NSString *customAnalyticsIdentifier; // ivar: _customAnalyticsIdentifier
@property (retain, nonatomic) NSDictionary *dataDetectorContext; // ivar: _dataDetectorContext
@property (readonly, nonatomic) VKCBaseDataDetectorElement *dataDetectorElement; // ivar: _dataDetectorElement
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<VKCDataDetectorElementViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIBezierPath *highlightPath; // ivar: _highlightPath
@property (retain, nonatomic) CAShapeLayer *highlightPathLayer; // ivar: _highlightPathLayer
@property (nonatomic) BOOL isPeformingManualContextInvocation; // ivar: _isPeformingManualContextInvocation
@property (readonly, nonatomic) CGFloat lineWithForAverageSubquadHeight;
@property (retain, nonatomic) UIContextMenuInteraction *menuInteraction; // ivar: _menuInteraction
@property (readonly, nonatomic) VKCMRCDataDetectorElement *mrcElement;
@property (readonly, nonatomic) BOOL shouldUseBCSAction;
@property (readonly, nonatomic) NSArray *subQuadsInBoundsCoordinates;
@property (readonly) Class superclass;
@property (retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer; // ivar: _tapGestureRecognizer


-(BOOL)gestureRecognizer:(id)arg0 shouldReceiveTouch:(id)arg1 ;
-(BOOL)isAccessibilityElement;
-(BOOL)isPointInQuad:(struct CGPoint )arg0 ;
-(NSUInteger)accessibilityTraits;
-(id)_contextMenuInteraction:(id)arg0 overrideSuggestedActionsForConfiguration:(id)arg1 ;
-(id)_contextMenuInteraction:(id)arg0 styleForMenuWithConfiguration:(id)arg1 ;
-(id)accessibilityIdentifier;
-(id)accessibilityValue;
-(id)analyticsEventWithDDType:(NSInteger)arg0 ;
-(id)calcPathForUnderline;
-(id)contextMenuInteraction:(id)arg0 configurationForMenuAtLocation:(struct CGPoint )arg1 ;
-(id)contextMenuInteraction:(id)arg0 previewForDismissingMenuWithConfiguration:(id)arg1 ;
-(id)contextMenuInteraction:(id)arg0 previewForHighlightingMenuWithConfiguration:(id)arg1 ;
-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)initWithDataDetectorElement:(id)arg0 unfilteredElements:(id)arg1 ;
-(id)presentingViewControllerForInteraction;
-(void)contextMenuInteraction:(id)arg0 willDisplayMenuForConfiguration:(id)arg1 animator:(id)arg2 ;
-(void)contextMenuInteraction:(id)arg0 willEndForConfiguration:(id)arg1 animator:(id)arg2 ;
-(void)contextMenuInteraction:(id)arg0 willPerformPreviewActionForMenuWithConfiguration:(id)arg1 animator:(id)arg2 ;
-(void)didTap:(id)arg0 ;
-(void)layoutSubviews;
-(void)manuallyActivateLongPressMenuInteraction;
-(void)sendAnalyticsEventIfNecessaryForDDType:(NSInteger)arg0 ;
-(void)updateHighlightPath;


@end


#endif