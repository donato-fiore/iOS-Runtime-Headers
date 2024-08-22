// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UISHEETPRESENTATIONCONTROLLER_H
#define _UISHEETPRESENTATIONCONTROLLER_H

@class NSArray, NSString;
@protocol _UISheetPresentationControllerDelegate;


#import "UISheetPresentationController.h"
#import "UIView.h"

@interface _UISheetPresentationController : UISheetPresentationController

@property (nonatomic, setter=_setAdditionalMinimumTopInset:) CGFloat _additionalMinimumTopInset;
@property (nonatomic, setter=_setAllowsInteractiveDismissWhenFullScreen:) BOOL _allowsInteractiveDismissWhenFullScreen;
@property (nonatomic, setter=_setAllowsTearOff:) BOOL _allowsTearOff;
@property (nonatomic, setter=_setCornerRadiusForPresentationAndDismissal:) CGFloat _cornerRadiusForPresentationAndDismissal;
@property (readonly, nonatomic) CGRect _currentPresentedViewFrame;
@property (nonatomic, setter=_setDetentDirectionWhenFloating:) NSInteger _detentDirectionWhenFloating;
@property (readonly, nonatomic) NSArray *_detentValues;
@property (copy, nonatomic, setter=_setDetents:) NSArray *_detents;
@property (nonatomic, setter=_setGrabberTopSpacing:) CGFloat _grabberTopSpacing;
@property (nonatomic, getter=_isHidden, setter=_setHidden:) BOOL _hidden;
@property (copy, nonatomic, setter=_setHiddenAncestorSheetID:) NSString *_hiddenAncestorSheetID;
@property (nonatomic, setter=_setHorizontalAlignment:) NSInteger _horizontalAlignment;
@property (nonatomic, setter=_setIndexOfCurrentDetent:) NSInteger _indexOfCurrentDetent;
@property (nonatomic, setter=_setIndexOfLastUndimmedDetent:) NSInteger _indexOfLastUndimmedDetent;
@property (nonatomic, setter=_setIndexOfLastUndimmedDetentWhenEdgeAttachedInCompactHeight:) NSInteger _indexOfLastUndimmedDetentWhenEdgeAttachedInCompactHeight;
@property (nonatomic, setter=_setIndexOfLastUndimmedDetentWhenFloating:) NSInteger _indexOfLastUndimmedDetentWhenFloating;
@property (nonatomic, setter=_setMarginInCompactHeight:) CGFloat _marginInCompactHeight;
@property (nonatomic, setter=_setMarginInRegularWidthRegularHeight:) CGFloat _marginInRegularWidthRegularHeight;
@property (copy, nonatomic, setter=_setPassthroughViews:) NSArray *_passthroughViews; // ivar: __passthroughViews
@property (nonatomic, setter=_setPeeksWhenFloating:) BOOL _peeksWhenFloating;
@property (nonatomic, setter=_setPreferredCornerRadius:) CGFloat _preferredCornerRadius;
@property (nonatomic, setter=_setPreferredRecessedCornerRadius:) CGFloat _preferredRecessedCornerRadius; // ivar: __preferredRecessedCornerRadius
@property (nonatomic, setter=_setPrefersScrollingExpandsToLargerDetentWhenScrolledToEdge:) BOOL _prefersScrollingExpandsToLargerDetentWhenScrolledToEdge;
@property (nonatomic, setter=_setPrefersScrollingResizesWhenDetentDirectionIsDown:) BOOL _prefersScrollingResizesWhenDetentDirectionIsDown;
@property (copy, nonatomic, setter=_setSheetID:) NSString *_sheetID;
@property (nonatomic, setter=_setShouldScaleDownBehindDescendantSheets:) BOOL _shouldScaleDownBehindDescendantSheets;
@property (retain, nonatomic, setter=_setSourceView:) UIView *_sourceView;
@property (nonatomic, setter=_setTucksIntoUnsafeAreaInCompactHeight:) BOOL _tucksIntoUnsafeAreaInCompactHeight;
@property (nonatomic, setter=_setWantsBottomAttached:) BOOL _wantsBottomAttached;
@property (nonatomic, setter=_setWantsBottomAttachedInCompactHeight:) BOOL _wantsBottomAttachedInCompactHeight;
@property (nonatomic, setter=_setWantsFloatingInRegularWidthCompactHeight:) BOOL _wantsFloatingInRegularWidthCompactHeight;
@property (nonatomic, setter=_setWantsFullScreen:) BOOL _wantsFullScreen;
@property (nonatomic, setter=_setWantsGrabber:) BOOL _wantsGrabber;
@property (nonatomic, setter=_setWidthFollowsPreferredContentSizeWhenBottomAttached:) BOOL _widthFollowsPreferredContentSizeWhenBottomAttached;
@property (weak, nonatomic) NSObject<_UISheetPresentationControllerDelegate> *delegate;
@property (nonatomic, getter=_shouldDismissWhenTappedOutside, setter=_setShouldDismissWhenTappedOutside:) BOOL shouldDismissWhenTappedOutside;


-(void)_animateChanges:(id)arg0 ;
-(void)_invalidateDetents;
-(void)_sendDidChangeSelectedDetentIdentifier;


@end


#endif