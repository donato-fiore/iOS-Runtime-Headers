// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC8VIDEOSUI28CASTBANNERCOLLECTIONVIEWCELL_H
#define _TTC8VIDEOSUI28CASTBANNERCOLLECTIONVIEWCELL_H



#import "VUIBaseCollectionViewCell.h"

@interface _TtC8VideosUI28CastBannerCollectionViewCell : VUIBaseCollectionViewCell {
    ? castBannerLayout;
    ? titleView;
    ? attributionTextView;
    ? descriptionView;
    ? monogramView;
    ? cachedSize;
}




-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )vui_layoutSubviews:(struct CGSize )arg0 computationOnly:(BOOL)arg1 ;
-(void)prepareForReuse;


@end


#endif