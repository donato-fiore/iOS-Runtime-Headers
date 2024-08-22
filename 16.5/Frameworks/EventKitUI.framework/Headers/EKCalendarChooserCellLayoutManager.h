// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EKCALENDARCHOOSERCELLLAYOUTMANAGER_H
#define EKCALENDARCHOOSERCELLLAYOUTMANAGER_H

@class UITableViewCellLayoutManager;



@interface EKCalendarChooserCellLayoutManager : UITableViewCellLayoutManager {
    id *_realLayoutManager;
}




+(id)sharedLayoutManagerForStyle:(NSInteger)arg0 ;
-(BOOL)rect:(struct CGRect )arg0 trailsOtherRect:(struct CGRect )arg1 byDistance:(*CGFloat)arg2 ;
-(CGFloat)defaultDetailTextLabelFontSizeForCell:(id)arg0 ;
-(CGFloat)defaultTextLabelFontSizeForCell:(id)arg0 ;
-(id)defaultDetailTextLabelFontForCell:(id)arg0 ;
-(id)defaultTextLabelFontForCell:(id)arg0 ;
-(id)detailTextLabelForCell:(id)arg0 ;
-(id)initWithCellStyle:(NSInteger)arg0 ;
-(struct CGRect )textRectForCell:(id)arg0 rowWidth:(CGFloat)arg1 forSizing:(BOOL)arg2 ;
-(struct CGSize )intrinsicContentSizeForCell:(id)arg0 rowWidth:(CGFloat)arg1 ;
-(void)getTextLabelRect:(struct CGRect *)arg0 detailTextLabelRect:(struct CGRect *)arg1 forCell:(id)arg2 rowWidth:(CGFloat)arg3 forSizing:(BOOL)arg4 ;


@end


#endif