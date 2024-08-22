// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC9SEYMOURUI19TVFILTEROPTIONSCELL_H
#define _TTC9SEYMOURUI19TVFILTEROPTIONSCELL_H

@class TtC9SeymourUI21TVFloatingContentCell;



@interface _TtC9SeymourUI19TVFilterOptionsCell : TtC9SeymourUI21TVFloatingContentCell {
    ? delegate;
    ? itemInfo;
    ? layout;
    ? titleLabel;
    ? subtitleLabel;
    ? accessoryImageView;
    ? textStackView;
    ? isDisclosureCell;
    ? shouldBreadCrumb;
}




-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)didUpdateFocusInContext:(id)arg0 withAnimationCoordinator:(id)arg1 ;
-(void)prepareForReuse;


@end


#endif