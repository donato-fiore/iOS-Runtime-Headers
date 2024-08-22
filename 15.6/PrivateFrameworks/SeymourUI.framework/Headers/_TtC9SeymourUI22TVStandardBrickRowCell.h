// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC9SEYMOURUI22TVSTANDARDBRICKROWCELL_H
#define _TTC9SEYMOURUI22TVSTANDARDBRICKROWCELL_H

@class TtC9SeymourUI29TVFocusableCollectionViewCell, UILabel;



@interface _TtC9SeymourUI22TVStandardBrickRowCell : TtC9SeymourUI29TVFocusableCollectionViewCell {
    ? delegate;
    ? itemInfo;
    ? layout;
    ? tvArtworkView;
    ? titleLabel;
    ? subtitleLabel;
}


@property (nonatomic, readonly) UILabel *accessibilitySubtitleLabel;
@property (nonatomic, readonly) UILabel *accessibilityTitleLabel;


-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )systemLayoutSizeFittingSize:(struct CGSize )arg0 withHorizontalFittingPriority:(float)arg1 verticalFittingPriority:(float)arg2 ;
-(void)prepareForReuse;


@end


#endif