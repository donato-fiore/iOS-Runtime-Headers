// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC9SEYMOURUI20PROGRAMMEDIATAGSCELL_H
#define _TTC9SEYMOURUI20PROGRAMMEDIATAGSCELL_H

@class UICollectionViewCell, NSArray, UILabel;



@interface _TtC9SeymourUI20ProgramMediaTagsCell : UICollectionViewCell {
    ? delegate;
    ? itemInfo;
    ? accessibilityMediaTags;
}


@property (nonatomic, copy) NSArray *accessibilityMediaTags;
@property (nonatomic, readonly) UILabel *tagsTextLabel; // ivar: tagsTextLabel


-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )systemLayoutSizeFittingSize:(struct CGSize )arg0 withHorizontalFittingPriority:(float)arg1 verticalFittingPriority:(float)arg2 ;
-(void)prepareForReuse;


@end


#endif