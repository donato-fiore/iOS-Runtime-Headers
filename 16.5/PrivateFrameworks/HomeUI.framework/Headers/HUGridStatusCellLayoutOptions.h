// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HUGRIDSTATUSCELLLAYOUTOPTIONS_H
#define HUGRIDSTATUSCELLLAYOUTOPTIONS_H

@class UIFont;


#import "HUGridCellLayoutOptions.h"

@interface HUGridStatusCellLayoutOptions : HUGridCellLayoutOptions

@property (nonatomic) CGFloat backgroundSize; // ivar: _backgroundSize
@property (readonly, nonatomic) CGFloat backgroundToTitleSpacing;
@property (nonatomic) CGFloat badgeSize; // ivar: _badgeSize
@property (readonly, nonatomic) CGFloat cellHeight;
@property (readonly, nonatomic) CGFloat cellSpacing;
@property (readonly, nonatomic) CGFloat cellToBackgroundHorizontalSpacing;
@property (retain, nonatomic) UIFont *descriptionFont; // ivar: _descriptionFont
@property (nonatomic) CGFloat descriptionInnerMargin; // ivar: _descriptionInnerMargin
@property (nonatomic) CGFloat estimatedCellWidth; // ivar: _estimatedCellWidth
@property (retain, nonatomic) UIFont *largeDescriptionFont; // ivar: _largeDescriptionFont
@property (nonatomic) NSUInteger numberOfTitleLines; // ivar: _numberOfTitleLines


+(id)defaultOptionsForCellSizeSubclass:(NSInteger)arg0 ;
-(CGFloat)cellWidthForAttributedTitle:(id)arg0 shortTitle:(id)arg1 ;
-(CGFloat)cellWidthForTitle:(id)arg0 shortTitle:(id)arg1 ;
-(NSInteger)titleAlignmentForUserInterfaceLayoutDirection:(NSInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(struct CGPoint )badgeOffsetForUserInterfaceLayoutDirection:(NSInteger)arg0 ;


@end


#endif