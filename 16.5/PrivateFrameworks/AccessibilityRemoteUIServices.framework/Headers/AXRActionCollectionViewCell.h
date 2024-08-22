// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AXRACTIONCOLLECTIONVIEWCELL_H
#define AXRACTIONCOLLECTIONVIEWCELL_H

@class UICollectionViewCell, UIImageView, NSString, UIImage;
@protocol UILargeContentViewerItem;



@interface AXRActionCollectionViewCell : UICollectionViewCell <UILargeContentViewerItem>

 {
    UIImageView *_imageView;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) UIImage *largeContentImage;
@property (readonly, nonatomic) UIEdgeInsets largeContentImageInsets;
@property (readonly, copy, nonatomic) NSString *largeContentTitle;
@property (readonly, nonatomic) BOOL scalesLargeContentImage;
@property (readonly, nonatomic) BOOL showsLargeContentViewer;
@property (readonly) Class superclass;


-(BOOL)isAccessibilityElement;
-(NSUInteger)accessibilityTraits;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(void)setHighlighted:(BOOL)arg0 ;
-(void)setImage:(id)arg0 title:(id)arg1 ;


@end


#endif