// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _VIDEOSEXTRASGRIDHEADERVIEW_H
#define _VIDEOSEXTRASGRIDHEADERVIEW_H

@class UIView, NSArray, MPUContentSizeLayoutConstraint, NSLayoutConstraint, MPUArtworkView, UILabel;



@interface _VideosExtrasGridHeaderView : UIView {
    NSArray *_artworkSizeConstraints;
    NSArray *_textLeadingConstraints;
    MPUContentSizeLayoutConstraint *_topLabelConstraint;
    MPUContentSizeLayoutConstraint *_subtitleBaselineConstraint;
    NSLayoutConstraint *_bottomLabelConstraint;
    MPUContentSizeLayoutConstraint *_bottomLabelSpacerHeight;
    MPUArtworkView *_artworkView;
    UILabel *_subtitleLabel;
    UIView *_bottomLabelSpacer;
}


@property (readonly, nonatomic) UILabel *titleLabel; // ivar: _titleLabel


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)configureForImage:(id)arg0 title:(id)arg1 subtitle:(id)arg2 style:(id)arg3 ;


@end


#endif