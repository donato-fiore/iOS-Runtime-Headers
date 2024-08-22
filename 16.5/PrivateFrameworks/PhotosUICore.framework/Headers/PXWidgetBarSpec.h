// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXWIDGETBARSPEC_H
#define PXWIDGETBARSPEC_H

@class UIFont, UIColor;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface PXWidgetBarSpec : NSObject <NSCopying>



@property (nonatomic) UIEdgeInsets contentInsets; // ivar: _contentInsets
@property (nonatomic) CGFloat distanceBetweenLastBaselineAndBottom; // ivar: _distanceBetweenLastBaselineAndBottom
@property (nonatomic) CGFloat distanceBetweenTitleBaselineAndSubtitleBaseline; // ivar: _distanceBetweenTitleBaselineAndSubtitleBaseline
@property (nonatomic) CGFloat distanceBetweenTopAndFirstBaseline; // ivar: _distanceBetweenTopAndFirstBaseline
@property (nonatomic) CGFloat horizontalSpacingBetweenTitleAndSubtitle; // ivar: _horizontalSpacingBetweenTitleAndSubtitle
@property (nonatomic) CGFloat minimumDistanceBetweenLastDescenderAndBottom; // ivar: _minimumDistanceBetweenLastDescenderAndBottom
@property (nonatomic) CGFloat minimumDistanceBetweenTopAndFirstAscender; // ivar: _minimumDistanceBetweenTopAndFirstAscender
@property (retain, nonatomic) UIFont *primaryFont; // ivar: _primaryFont
@property (retain, nonatomic) UIFont *secondaryFont; // ivar: _secondaryFont
@property (nonatomic) BOOL shouldUseSingleLine; // ivar: _shouldUseSingleLine
@property (retain, nonatomic) UIColor *textColor; // ivar: _textColor


-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif