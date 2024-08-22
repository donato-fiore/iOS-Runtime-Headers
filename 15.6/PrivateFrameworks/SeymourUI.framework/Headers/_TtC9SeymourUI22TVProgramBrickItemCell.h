// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC9SEYMOURUI22TVPROGRAMBRICKITEMCELL_H
#define _TTC9SEYMOURUI22TVPROGRAMBRICKITEMCELL_H

@class TtC9SeymourUI29TVFocusableCollectionViewCell;



@interface _TtC9SeymourUI22TVProgramBrickItemCell : TtC9SeymourUI29TVFocusableCollectionViewCell {
    ? delegate;
    ? itemInfo;
    ? layout;
    ? artworkView;
    ? floatingView;
    ? titleLabel;
    ? subtitleLabel;
    ? episodesLabel;
    ? iconStackView;
    ? bottomTextStack;
    ? recencyIcon;
    ? gradient;
}




-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)didUpdateFocusInContext:(id)arg0 withAnimationCoordinator:(id)arg1 ;
-(void)prepareForReuse;


@end


#endif