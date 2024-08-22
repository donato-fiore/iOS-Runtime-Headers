// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HUGRIDSCENECELLLAYOUTOPTIONS_H
#define HUGRIDSCENECELLLAYOUTOPTIONS_H

@class UIFont;


#import "HUGridCellLayoutOptions.h"

@interface HUGridSceneCellLayoutOptions : HUGridCellLayoutOptions

@property (nonatomic) CGFloat cellHeight; // ivar: _cellHeight
@property (retain, nonatomic) UIFont *descriptionFont; // ivar: _descriptionFont
@property (nonatomic) CGFloat iconInnerHorizontalMargin; // ivar: _iconInnerHorizontalMargin
@property (nonatomic) NSUInteger numberOfTitleLines; // ivar: _numberOfTitleLines
@property (nonatomic) CGFloat titleDescriptionLineSpacing; // ivar: _titleDescriptionLineSpacing
@property (nonatomic) CGFloat titleInterLineSpacing; // ivar: _titleInterLineSpacing


+(id)defaultOptionsForCellSizeSubclass:(NSInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif