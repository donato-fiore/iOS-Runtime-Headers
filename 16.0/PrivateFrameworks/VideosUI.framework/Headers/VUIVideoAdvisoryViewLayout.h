// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VUIVIDEOADVISORYVIEWLAYOUT_H
#define VUIVIDEOADVISORYVIEWLAYOUT_H

@class TVViewLayout, UIColor;


#import "VUITextLayout.h"

@interface VUIVideoAdvisoryViewLayout : TVViewLayout

@property (readonly, nonatomic) VUITextLayout *descriptionLayout; // ivar: _descriptionLayout
@property (nonatomic) UIEdgeInsets descriptionMargin; // ivar: _descriptionMargin
@property (nonatomic) CGFloat descriptionMaxWidth; // ivar: _descriptionMaxWidth
@property (readonly, nonatomic) UIColor *dividerColor; // ivar: _dividerColor
@property (nonatomic) UIEdgeInsets dividerMargin; // ivar: _dividerMargin
@property (nonatomic) CGSize dividerSize; // ivar: _dividerSize
@property (readonly, nonatomic) UIColor *legendBackgroundColor; // ivar: _legendBackgroundColor
@property (nonatomic) CGFloat legendCornerRadius; // ivar: _legendCornerRadius
@property (readonly, nonatomic) VUITextLayout *legendLayout; // ivar: _legendLayout
@property (nonatomic) CGFloat legendMaxWidth; // ivar: _legendMaxWidth
@property (nonatomic) CGFloat legendNameMinWidth; // ivar: _legendNameMinWidth
@property (nonatomic) UIEdgeInsets legendNamePadding; // ivar: _legendNamePadding
@property (nonatomic) CGSize legendSize; // ivar: _legendSize
@property (nonatomic) UIEdgeInsets legendsMargin; // ivar: _legendsMargin
@property (nonatomic) UIEdgeInsets logoMargin; // ivar: _logoMargin
@property (nonatomic) CGSize logoSize; // ivar: _logoSize
@property (nonatomic) UIEdgeInsets portraitDescriptionMargin; // ivar: _portraitDescriptionMargin
@property (nonatomic) UIEdgeInsets portraitDividerMargin; // ivar: _portraitDividerMargin
@property (nonatomic) CGSize portraitDividerSize; // ivar: _portraitDividerSize
@property (readonly, nonatomic) VUITextLayout *portraitLegendDescriptionLayout; // ivar: _portraitLegendDescriptionLayout
@property (readonly, nonatomic) VUITextLayout *portraitLegendLayout; // ivar: _portraitLegendLayout
@property (nonatomic) CGSize portraitLegendSize; // ivar: _portraitLegendSize
@property (nonatomic) UIEdgeInsets portraitLegendsMargin; // ivar: _portraitLegendsMargin
@property (nonatomic) UIEdgeInsets portraitLogoMargin; // ivar: _portraitLogoMargin
@property (nonatomic) CGSize portraitLogoSize; // ivar: _portraitLogoSize
@property (nonatomic) UIEdgeInsets portraitMargin; // ivar: _portraitMargin


-(id)init;


@end


#endif