// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GKSHOWCASECELLVIEW_H
#define GKSHOWCASECELLVIEW_H

@class UICollectionReusableView, UICollectionViewCell;


#import "GKHairlineView.h"

@interface GKShowcaseCellView : UICollectionReusableView

@property (retain, nonatomic) UICollectionViewCell *cell; // ivar: _cell
@property (nonatomic) SEL touchedShowcaseCellAction; // ivar: _touchedShowcaseCellAction
@property (retain, nonatomic) GKHairlineView *underlineView; // ivar: _underlineView


+(BOOL)requiresConstraintBasedLayout;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGRect )alignmentRectForText;
-(void)prepareForReuse;
-(void)touchesEnded:(id)arg0 withEvent:(id)arg1 ;


@end


#endif