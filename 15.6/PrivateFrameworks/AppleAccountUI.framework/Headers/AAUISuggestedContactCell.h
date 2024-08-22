// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AAUISUGGESTEDCONTACTCELL_H
#define AAUISUGGESTEDCONTACTCELL_H

@class UITableViewCell, UIImageView;



@interface AAUISuggestedContactCell : UITableViewCell {
    UIImageView *_accessoryImageView;
}




-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(struct CGSize )systemLayoutSizeFittingSize:(struct CGSize )arg0 withHorizontalFittingPriority:(float)arg1 verticalFittingPriority:(float)arg2 ;
-(void)setSelected:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)updateWithContact:(id)arg0 pictureStore:(id)arg1 ;


@end


#endif