// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC9SEYMOURUI29TVFOCUSABLECOLLECTIONVIEWCELL_H
#define _TTC9SEYMOURUI29TVFOCUSABLECOLLECTIONVIEWCELL_H

@class UICollectionViewCell;



@interface _TtC9SeymourUI29TVFocusableCollectionViewCell : UICollectionViewCell {
    ? underlyingControlState;
}


@property (nonatomic, readonly) BOOL canBecomeFocused;


-(id)_preferredConfigurationForFocusAnimation:(NSInteger)arg0 inContext:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)didUpdateFocusInContext:(id)arg0 withAnimationCoordinator:(id)arg1 ;
-(void)prepareForReuse;
-(void)pressesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)pressesCancelled:(id)arg0 withEvent:(id)arg1 ;
-(void)pressesEnded:(id)arg0 withEvent:(id)arg1 ;


@end


#endif