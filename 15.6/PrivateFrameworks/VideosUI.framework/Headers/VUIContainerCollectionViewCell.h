// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VUICONTAINERCOLLECTIONVIEWCELL_H
#define VUICONTAINERCOLLECTIONVIEWCELL_H

@class UICollectionViewCell;



@interface VUIContainerCollectionViewCell : UICollectionViewCell {
    BOOL _pressIsAnimating;
    BOOL _unpressOnEndAnimating;
}


@property (nonatomic) BOOL allowsFocus; // ivar: _allowsFocus
@property (nonatomic) BOOL selectSubviews; // ivar: _selectSubviews


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_clearPressState;
-(void)_showPressState;
-(void)prepareForReuse;
-(void)pressesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)pressesCancelled:(id)arg0 withEvent:(id)arg1 ;
-(void)pressesEnded:(id)arg0 withEvent:(id)arg1 ;


@end


#endif