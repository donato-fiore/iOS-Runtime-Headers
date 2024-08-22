// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HUFILTERCATEGORYCELLLAYOUTOPTIONS_H
#define HUFILTERCATEGORYCELLLAYOUTOPTIONS_H

@class UIFont;


#import "HUGridCellLayoutOptions.h"

@interface HUFilterCategoryCellLayoutOptions : HUGridCellLayoutOptions

@property (readonly, nonatomic) CGFloat cellHeight;
@property (readonly, nonatomic) CGFloat cellSpacing;
@property (nonatomic) CGFloat iconToTextPadding; // ivar: _iconToTextPadding
@property (nonatomic) CGFloat innerBottomMargin; // ivar: _innerBottomMargin
@property (nonatomic) CGFloat innerLeadingMargin; // ivar: _innerLeadingMargin
@property (nonatomic) CGFloat innerTopMargin; // ivar: _innerTopMargin
@property (nonatomic) CGFloat innerTrailingMargin; // ivar: _innerTrailingMargin
@property (retain, nonatomic) UIFont *primaryTextFont; // ivar: _primaryTextFont
@property (retain, nonatomic) UIFont *secondaryTextFont; // ivar: _secondaryTextFont


+(id)defaultOptionsForCellSizeSubclass:(NSInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif