// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TKTONEPICKERTABLEVIEWCELLLAYOUTMANAGER_H
#define TKTONEPICKERTABLEVIEWCELLLAYOUTMANAGER_H

@class UITableViewCellLayoutManagerValue1;



@interface TKTonePickerTableViewCellLayoutManager : UITableViewCellLayoutManagerValue1

@property (nonatomic) CGFloat minimumTextIndentation; // ivar: _minimumTextIndentation


-(struct CGRect )_adjustedTextFrameWithOriginalTextFrame:(struct CGRect )arg0 forCell:(id)arg1 ;
-(struct CGRect )textRectForCell:(id)arg0 rowWidth:(CGFloat)arg1 forSizing:(BOOL)arg2 ;


@end


#endif