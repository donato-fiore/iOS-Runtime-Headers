// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UITABLEVIEWCELLLAYOUTMANAGERSUBTITLE_H
#define UITABLEVIEWCELLLAYOUTMANAGERSUBTITLE_H



#import "UITableViewCellLayoutManager.h"

@interface UITableViewCellLayoutManagerSubtitle : UITableViewCellLayoutManager



-(CGFloat)_textLabelYAdjustmentForCell:(id)arg0 totalTextRect:(struct CGRect )arg1 ;
-(CGFloat)defaultDetailTextLabelFontSizeForCell:(id)arg0 ;
-(CGFloat)defaultTextLabelFontSizeForCell:(id)arg0 ;
-(id)defaultDetailTextLabelFontForCell:(id)arg0 ;
-(id)detailTextLabelForCell:(id)arg0 ;
-(id)imageViewForCell:(id)arg0 ;
-(id)textLabelForCell:(id)arg0 ;
-(struct CGSize )intrinsicContentSizeForCell:(id)arg0 rowWidth:(CGFloat)arg1 ;
-(void)getTextLabelRect:(struct CGRect *)arg0 detailTextLabelRect:(struct CGRect *)arg1 forCell:(id)arg2 rowWidth:(CGFloat)arg3 forSizing:(BOOL)arg4 ;
-(void)layoutSubviewsOfCell:(id)arg0 ;


@end


#endif