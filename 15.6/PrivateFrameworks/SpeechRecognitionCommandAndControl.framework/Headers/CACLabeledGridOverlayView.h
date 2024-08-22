// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CACLABELEDGRIDOVERLAYVIEW_H
#define CACLABELEDGRIDOVERLAYVIEW_H

@class UIView, NSMutableArray;


#import "CACAdaptiveBackdropView.h"
#import "CACZoomController.h"

@interface CACLabeledGridOverlayView : UIView {
    NSMutableArray *_labeledElements;
}


@property (retain, nonatomic) NSMutableArray *allBadgeViews; // ivar: _allBadgeViews
@property (retain, nonatomic) CACAdaptiveBackdropView *backdrop; // ivar: _backdrop
@property (retain, nonatomic) UIView *badgesContainer; // ivar: _badgesContainer
@property (retain, nonatomic) UIView *contrastBadgesContainer; // ivar: _contrastBadgesContainer
@property (retain, nonatomic) NSMutableArray *dimmingViews; // ivar: _dimmingViews
@property (nonatomic) BOOL isSmallEnoughForZooming; // ivar: _isSmallEnoughForZooming
@property (retain, nonatomic) NSMutableArray *outOfBoxBadgeViews; // ivar: _outOfBoxBadgeViews
@property (retain, nonatomic) NSMutableArray *separatorViews; // ivar: _separatorViews
@property (nonatomic) BOOL showsElementsAsClickable; // ivar: _showsElementsAsClickable
@property (nonatomic) BOOL showsNumbersInTopLeft; // ivar: _showsNumbersInTopLeft
@property (retain, nonatomic) CACZoomController *zoomController; // ivar: _zoomController
@property (retain, nonatomic) NSMutableArray *zoomedGridBadgeViews; // ivar: _zoomedGridBadgeViews


-(id)_badgeViewContainerWithFrame:(struct CGRect )arg0 usingContrast:(BOOL)arg1 ;
-(id)_newLineViewWithFrame:(struct CGRect )arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)addLabeledElements:(id)arg0 ;
-(void)clearLabeledElements;
-(void)hide;
-(void)show;
-(void)zoomOverRect:(struct CGRect )arg0 ;


@end


#endif