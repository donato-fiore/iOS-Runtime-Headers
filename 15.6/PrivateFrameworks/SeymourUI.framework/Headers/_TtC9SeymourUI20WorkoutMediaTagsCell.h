// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC9SEYMOURUI20WORKOUTMEDIATAGSCELL_H
#define _TTC9SEYMOURUI20WORKOUTMEDIATAGSCELL_H

@class UICollectionViewCell, NSArray, UILabel;



@interface _TtC9SeymourUI20WorkoutMediaTagsCell : UICollectionViewCell {
    ? delegate;
    ? itemInfo;
    ? layout;
    ? downloadButton;
    ? trainerButton;
    ? tagsLabelTopLayoutConstraint;
    ? accessibilityMediaTags;
}


@property (nonatomic, copy) NSArray *accessibilityMediaTags;
@property (nonatomic, readonly) UILabel *tagsLabel; // ivar: tagsLabel


-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )systemLayoutSizeFittingSize:(struct CGSize )arg0 withHorizontalFittingPriority:(float)arg1 verticalFittingPriority:(float)arg2 ;
-(void)handleDownloadButtonTapped:(id)arg0 ;
-(void)handleTrainerButtonTapped:(id)arg0 ;
-(void)prepareForReuse;


@end


#endif