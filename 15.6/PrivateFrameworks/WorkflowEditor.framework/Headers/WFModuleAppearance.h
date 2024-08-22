// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFMODULEAPPEARANCE_H
#define WFMODULEAPPEARANCE_H

@class UIColor, UIFont;

#import <Foundation/Foundation.h>


@interface WFModuleAppearance : NSObject

@property (readonly, nonatomic) UIColor *backgroundColor; // ivar: _backgroundColor
@property (readonly, nonatomic) UIColor *borderColor; // ivar: _borderColor
@property (readonly, nonatomic) CGFloat borderWidth; // ivar: _borderWidth
@property (readonly, nonatomic) CGFloat cornerRadius; // ivar: _cornerRadius
@property (readonly, nonatomic) UIColor *headingButtonColor; // ivar: _headingButtonColor
@property (readonly, nonatomic) UIColor *labelColor; // ivar: _labelColor
@property (readonly, nonatomic) UIColor *parametersBackgroundColor; // ivar: _parametersBackgroundColor
@property (readonly, nonatomic) UIColor *parametersHighlightedColor; // ivar: _parametersHighlightedColor
@property (readonly, nonatomic) UIColor *parentBackgroundColor; // ivar: _parentBackgroundColor
@property (readonly, nonatomic) UIColor *progressBackgroundColor; // ivar: _progressBackgroundColor
@property (readonly, nonatomic) UIColor *progressShadowColor; // ivar: _progressShadowColor
@property (readonly, nonatomic) UIColor *separatorColor; // ivar: _separatorColor
@property (readonly, nonatomic) UIColor *shadowColor; // ivar: _shadowColor
@property (readonly, nonatomic) CGSize shadowOffset; // ivar: _shadowOffset
@property (readonly, nonatomic) CGFloat shadowOpacity; // ivar: _shadowOpacity
@property (readonly, nonatomic) CGFloat shadowRadius; // ivar: _shadowRadius
@property (readonly, nonatomic) UIFont *summaryFont; // ivar: _summaryFont
@property (readonly, nonatomic) UIFont *unpopulatedSummaryFont; // ivar: _unpopulatedSummaryFont
@property (readonly, nonatomic) UIColor *warningSeparatorColor; // ivar: _warningSeparatorColor


+(id)appearanceWithLabelColor:(id)arg0 ;
+(id)commentAppearance;
+(id)defaultAppearance;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;


@end


#endif