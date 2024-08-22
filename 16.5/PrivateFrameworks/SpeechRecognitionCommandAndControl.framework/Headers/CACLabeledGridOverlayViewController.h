// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CACLABELEDGRIDOVERLAYVIEWCONTROLLER_H
#define CACLABELEDGRIDOVERLAYVIEWCONTROLLER_H

@class UIViewController;
@protocol CACViewController;


#import "CACLabeledGridOverlayView.h"

@interface CACLabeledGridOverlayViewController : UIViewController <CACViewController>



@property (retain, nonatomic) CACLabeledGridOverlayView *gridOverlayView; // ivar: _gridOverlayView
@property (readonly, nonatomic) BOOL isOverlay;
@property (readonly, nonatomic) BOOL isSmallEnoughForZooming;
@property (nonatomic) BOOL showsElementsAsClickable; // ivar: _showsElementsAsClickable
@property (nonatomic) BOOL showsNumbersInTopLeft;
@property (readonly, nonatomic) NSInteger zOrder;


-(BOOL)_canShowWhileLocked;
-(void)hide;
-(void)loadView;
-(void)setLabeledElements:(id)arg0 ;
-(void)show;
-(void)zoomOverRegion:(struct CGRect )arg0 ;


@end


#endif