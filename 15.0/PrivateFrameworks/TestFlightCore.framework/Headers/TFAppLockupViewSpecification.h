// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TFAPPLOCKUPVIEWSPECIFICATION_H
#define TFAPPLOCKUPVIEWSPECIFICATION_H

@class UIColor, UIFont;

#import <Foundation/Foundation.h>


@interface TFAppLockupViewSpecification : NSObject

@property (readonly, nonatomic) CGFloat firstSubtitleLabelBaselineToSecondSubtitleLabelBaseline; // ivar: _firstSubtitleLabelBaselineToSecondSubtitleLabelBaseline
@property (readonly, nonatomic) UIColor *iconPlaceholderColor;
@property (readonly, nonatomic) CGSize iconSize;
@property (readonly, nonatomic) CGFloat paddingBetweenIconAndText;
@property (readonly, nonatomic) UIFont *subtitleLabelFont; // ivar: _subtitleLabelFont
@property (readonly, nonatomic) UIColor *subtitleTextColor;
@property (readonly, nonatomic) CGFloat titleLabelBaselineToFirstSubtitleLabelBaseline; // ivar: _titleLabelBaselineToFirstSubtitleLabelBaseline
@property (readonly, nonatomic) UIFont *titleLabelFont; // ivar: _titleLabelFont
@property (readonly, nonatomic) UIColor *titleTextColor;


-(id)_createSubtitleLabelFontWithTraitCollection:(id)arg0 ;
-(id)_createTitleLabelFontWithTraitCollection:(id)arg0 ;
-(id)_subtitleFontStyle;
-(id)_titleFontStyle;
-(id)initWithTraitCollection:(id)arg0 ;


@end


#endif