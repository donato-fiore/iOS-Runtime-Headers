// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC8VIDEOSUI25TABITEMCOLLECTIONVIEWCELL_H
#define _TTC8VIDEOSUI25TABITEMCOLLECTIONVIEWCELL_H

@class UICollectionViewCell, UIImage, NSString;



@interface _TtC8VideosUI25TabItemCollectionViewCell : UICollectionViewCell {
    ? cardItemLayout;
    ? numberOfTabs;
    ? debugName;
    ? titleView;
    ? imageView;
}


@property (nonatomic, retain) UIImage *largeContentImage;
@property (nonatomic, copy) NSString *largeContentTitle;
@property (nonatomic) BOOL scalesLargeContentImage;


-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)layoutSubviews;
-(void)prepareForReuse;


@end


#endif