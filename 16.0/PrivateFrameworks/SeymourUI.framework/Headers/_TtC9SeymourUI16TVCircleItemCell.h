// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC9SEYMOURUI16TVCIRCLEITEMCELL_H
#define _TTC9SEYMOURUI16TVCIRCLEITEMCELL_H

@class TtC9SeymourUI29TVFocusableCollectionViewCell, UILabel;



@interface _TtC9SeymourUI16TVCircleItemCell : TtC9SeymourUI29TVFocusableCollectionViewCell {
    ? delegate;
    ? itemInfo;
    ? layout;
    ? tvArtworkView;
    ? titleLabel;
}


@property (nonatomic, readonly) UILabel *accessibilityTitleLabel;


-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)prepareForReuse;


@end


#endif