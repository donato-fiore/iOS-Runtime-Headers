// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC8VIDEOSUI15SYNDICATIONCELL_H
#define _TTC8VIDEOSUI15SYNDICATIONCELL_H



#import "VUIBaseCollectionViewCell.h"

@interface _TtC8VideosUI15SyndicationCell : VUIBaseCollectionViewCell {
    ? layout;
    ? titleLabel;
    ? subtitleLabel;
    ? imageView;
    ? attributionView;
    ? badgeView;
    ? $__lazy_storage_$_bottomSeparatorView;
    ? syndicationId;
}




-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )vui_layoutSubviews:(struct CGSize )arg0 computationOnly:(BOOL)arg1 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)vui_cellDidSelect;
-(void)vui_cellWillBeDisplayed;
-(void)vui_prepareForReuse;


@end


#endif