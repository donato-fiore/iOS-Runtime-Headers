// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HUGRIDWELCOMEUIBANNERCELLLAYOUTOPTIONS_H
#define HUGRIDWELCOMEUIBANNERCELLLAYOUTOPTIONS_H

@class UIColor;


#import "HUGridBannerCellLayoutOptions.h"

@interface HUGridWelcomeUIBannerCellLayoutOptions : HUGridBannerCellLayoutOptions

@property (retain, nonatomic) UIColor *continueButtonColor; // ivar: _continueButtonColor
@property (retain, nonatomic) UIColor *descriptionLabelColor; // ivar: _descriptionLabelColor
@property (retain, nonatomic) UIColor *footerLabelColor; // ivar: _footerLabelColor
@property (retain, nonatomic) UIColor *titleLabelColor; // ivar: _titleLabelColor


+(id)defaultOptionsForCellSizeSubclass:(NSInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif