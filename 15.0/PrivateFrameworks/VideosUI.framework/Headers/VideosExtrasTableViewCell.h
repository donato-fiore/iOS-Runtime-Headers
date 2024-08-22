// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VIDEOSEXTRASTABLEVIEWCELL_H
#define VIDEOSEXTRASTABLEVIEWCELL_H

@class UITableViewCell, UIView, UILabel, NSLayoutConstraint, NSArray, MPUContentSizeLayoutConstraint, IKListItemLockupElement;


#import "VideosExtrasConstrainedArtworkContainerView.h"

@interface VideosExtrasTableViewCell : UITableViewCell {
    UIView *_textContainerView;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    NSLayoutConstraint *_minimumHeightConstraint;
    NSArray *_topConstraints;
    NSArray *_bottomConstraints;
    NSLayoutConstraint *_leadingViewConstraint;
    NSLayoutConstraint *_artworkSpacerHeightConstraint;
    NSLayoutConstraint *_textSpacerHeightConstraint;
    NSLayoutConstraint *_artworkWidthConstraint;
    NSLayoutConstraint *_artworkHeightConstraint;
    NSLayoutConstraint *_textLeadingConstraint;
    NSLayoutConstraint *_textTrailingConstraint;
    NSLayoutConstraint *_topLabelConstraint;
    MPUContentSizeLayoutConstraint *_subtitleBaselineConstraint;
    NSLayoutConstraint *_bottomLabelConstraint;
}


@property (readonly, nonatomic) VideosExtrasConstrainedArtworkContainerView *artworkContainerView; // ivar: _artworkContainer
@property (nonatomic) IKListItemLockupElement *element; // ivar: _element


-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)configureForListItemLockupElement:(id)arg0 wide:(BOOL)arg1 ;
-(void)prepareForReuse;
-(void)setHighlighted:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)setSelected:(BOOL)arg0 animated:(BOOL)arg1 ;


@end


#endif