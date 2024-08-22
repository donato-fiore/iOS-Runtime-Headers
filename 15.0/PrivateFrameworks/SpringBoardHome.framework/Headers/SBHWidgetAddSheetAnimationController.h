// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBHWIDGETADDSHEETANIMATIONCONTROLLER_H
#define SBHWIDGETADDSHEETANIMATIONCONTROLLER_H

@class UISheetAnimationController, UIView;


#import "SBHPortaledShadowedWidgetView.h"
#import "SBHAddWidgetSheetGalleryCollectionViewCell.h"

@interface SBHWidgetAddSheetAnimationController : UISheetAnimationController

@property (nonatomic) CGPoint fromPoint; // ivar: _fromPoint
@property (retain, nonatomic) UIView *matchMoveView; // ivar: _matchMoveView
@property (retain, nonatomic) SBHPortaledShadowedWidgetView *portaledShadowedWidgetView; // ivar: _portaledShadowedWidgetView
@property (retain, nonatomic) SBHAddWidgetSheetGalleryCollectionViewCell *sourceCell; // ivar: _sourceCell


-(id)initWithSourceCell:(id)arg0 ;
-(id)interruptibleAnimatorForTransition:(id)arg0 ;
-(void)animateTransition:(id)arg0 ;
-(void)interruptAnimation;


@end


#endif