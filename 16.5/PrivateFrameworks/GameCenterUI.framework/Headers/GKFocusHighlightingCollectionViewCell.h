// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GKFOCUSHIGHLIGHTINGCOLLECTIONVIEWCELL_H
#define GKFOCUSHIGHLIGHTINGCOLLECTIONVIEWCELL_H

@class UICollectionViewCell, UIView;



@interface GKFocusHighlightingCollectionViewCell : UICollectionViewCell

@property (nonatomic) CGFloat _gkFocusHighlightCornerRadius; // ivar: __gkFocusHighlightCornerRadius
@property (nonatomic) UIEdgeInsets _gkFocusHighlightInsets; // ivar: __gkFocusHighlightInsets
@property (retain, nonatomic) UIView *focusHighlightView; // ivar: _focusHighlightView


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)awakeFromNib;
-(void)didUpdateFocusInContext:(id)arg0 withAnimationCoordinator:(id)arg1 ;
-(void)initFocusHighlightView;
-(void)updateFocusHighlightView;


@end


#endif