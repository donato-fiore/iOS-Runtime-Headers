// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TVCONTAINERCOLLECTIONVIEWCELL_H
#define TVCONTAINERCOLLECTIONVIEWCELL_H

@class UICollectionViewCell;



@interface TVContainerCollectionViewCell : UICollectionViewCell {
    BOOL _pressIsAnimating;
    BOOL _unpressOnEndAnimating;
}


@property (nonatomic) BOOL allowsFocus; // ivar: _allowsFocus
@property (nonatomic) BOOL selectSubviews; // ivar: _selectSubviews


-(BOOL)canBecomeFocused;
-(id)_preferredConfigurationForFocusAnimation:(NSInteger)arg0 inContext:(id)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_clearPressState;
-(void)_showPressState;
-(void)didUpdateFocusInContext:(id)arg0 withAnimationCoordinator:(id)arg1 ;
-(void)prepareForReuse;
-(void)pressesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)pressesCancelled:(id)arg0 withEvent:(id)arg1 ;
-(void)pressesEnded:(id)arg0 withEvent:(id)arg1 ;
-(void)setFocused:(BOOL)arg0 animated:(BOOL)arg1 context:(id)arg2 coordinator:(id)arg3 ;
-(void)setSelected:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)setSelected:(BOOL)arg0 animated:(BOOL)arg1 withAnimationCoordinator:(id)arg2 ;


@end


#endif