// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC9SEYMOURUI22TVGROUPEDBRICKITEMCELL_H
#define _TTC9SEYMOURUI22TVGROUPEDBRICKITEMCELL_H

@class TtC9SeymourUI29TVFocusableCollectionViewCell, UILabel;



@interface _TtC9SeymourUI22TVGroupedBrickItemCell : TtC9SeymourUI29TVFocusableCollectionViewCell {
    ? delegate;
    ? itemInfo;
    ? layout;
    ? artworkView;
    ? floatingView;
    ? textStackView;
    ? titleLabel;
    ? subtitleLabel;
}


@property (nonatomic, readonly) UILabel *accessibilitySubtitleLabel;
@property (nonatomic, readonly) UILabel *accessibilityTitleLabel;


-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)didUpdateFocusInContext:(id)arg0 withAnimationCoordinator:(id)arg1 ;
-(void)prepareForReuse;


@end


#endif