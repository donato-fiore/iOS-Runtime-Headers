// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HUGRIDHEADLINECELLLAYOUTOPTIONS_H
#define HUGRIDHEADLINECELLLAYOUTOPTIONS_H



#import "HUGridCellLayoutOptions.h"

@interface HUGridHeadlineCellLayoutOptions : HUGridCellLayoutOptions

@property (readonly, nonatomic) CGFloat containerLeadingMargin; // ivar: _containerLeadingMargin
@property (readonly, nonatomic) CGFloat containerTrailingMargin; // ivar: _containerTrailingMargin
@property (nonatomic, getter=isEditing) BOOL editing; // ivar: _editing
@property (nonatomic) CGFloat editingBackgroundHeight; // ivar: _editingBackgroundHeight
@property (readonly, nonatomic) CGFloat editingBackgroundMinimumWidth;
@property (nonatomic) CGFloat headlineBaselineOffset; // ivar: _headlineBaselineOffset
@property (nonatomic) CGFloat minimumFontSize; // ivar: _minimumFontSize
@property (readonly, nonatomic) NSInteger viewSizeSubclass; // ivar: _viewSizeSubclass
@property (readonly, nonatomic) CGFloat viewWidth; // ivar: _viewWidth


+(id)defaultOptionsForCellSizeSubclass:(NSInteger)arg0 ;
+(id)defaultOptionsForCellSizeSubclass:(NSInteger)arg0 viewSizeSubclass:(NSInteger)arg1 viewWidth:(CGFloat)arg2 containerLeadingMargin:(CGFloat)arg3 containerTrailingMargin:(CGFloat)arg4 ;
-(CGFloat)cellInnerMargin;
-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif