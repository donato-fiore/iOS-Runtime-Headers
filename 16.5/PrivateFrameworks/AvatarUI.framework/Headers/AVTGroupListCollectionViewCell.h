// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVTGROUPLISTCOLLECTIONVIEWCELL_H
#define AVTGROUPLISTCOLLECTIONVIEWCELL_H

@class UICollectionViewCell, UIImageView, UILabel, NSString, UIVisualEffectView;



@interface AVTGroupListCollectionViewCell : UICollectionViewCell

@property (readonly, nonatomic) UIImageView *imageView; // ivar: _imageView
@property (readonly, nonatomic) UILabel *label; // ivar: _label
@property (copy, nonatomic) NSString *symbolName; // ivar: _symbolName
@property (copy, nonatomic) NSString *title; // ivar: _title
@property (readonly, nonatomic) UIVisualEffectView *visualEffectView; // ivar: _visualEffectView


+(CGFloat)estimatedLabelWidthForContainerWidth:(CGFloat)arg0 ;
+(id)cellIdentifier;
+(id)defaultSymbolImageName;
+(id)highlightedBackgroundColor;
-(CGFloat)estimatedLabelWidth;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )systemLayoutSizeFittingSize:(struct CGSize )arg0 withHorizontalFittingPriority:(float)arg1 verticalFittingPriority:(float)arg2 ;
-(void)setSelected:(BOOL)arg0 ;
-(void)setupContent;


@end


#endif