// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXCMMPOSTERHEADERVIEWSPEC_H
#define PXCMMPOSTERHEADERVIEWSPEC_H

@class UIFont;

#import <Foundation/Foundation.h>


@interface PXCMMPosterHeaderViewSpec : NSObject

@property (readonly, nonatomic) CGFloat bottomGradientBaselineOffset; // ivar: _bottomGradientBaselineOffset
@property (readonly, nonatomic) unsigned int bottomGradientFontDescriptorSymbolicTraits; // ivar: _bottomGradientFontDescriptorSymbolicTraits
@property (readonly, nonatomic) NSInteger bottomGradientFontTextStyle; // ivar: _bottomGradientFontTextStyle
@property (readonly, nonatomic) BOOL canShowStatus; // ivar: _canShowStatus
@property (readonly, nonatomic) UIFont *preferredStatusFont;
@property (readonly, nonatomic) UIFont *preferredSubtitleFont;
@property (readonly, nonatomic) UIFont *preferredTitleFont;
@property (readonly, nonatomic) CGFloat scaledBottomGradientBaselineOffset;
@property (readonly, nonatomic) CGFloat scaledStatusBaselineOffset;
@property (readonly, nonatomic) CGFloat scaledSubtitleBaselineOffset;
@property (readonly, nonatomic) CGFloat scaledTitleBaselineOffset;
@property (readonly, nonatomic) CGFloat scaledTopGradientBaselineOffset;
@property (readonly, nonatomic) CGFloat statusBaselineOffset; // ivar: _statusBaselineOffset
@property (readonly, nonatomic) unsigned int statusFontDescriptorSymbolicTraits; // ivar: _statusFontDescriptorSymbolicTraits
@property (readonly, nonatomic) NSInteger statusFontTextStyle; // ivar: _statusFontTextStyle
@property (readonly, nonatomic) CGFloat subtitleBaselineOffset; // ivar: _subtitleBaselineOffset
@property (readonly, nonatomic) unsigned int subtitleFontDescriptorSymbolicTraits; // ivar: _subtitleFontDescriptorSymbolicTraits
@property (readonly, nonatomic) NSInteger subtitleFontTextStyle; // ivar: _subtitleFontTextStyle
@property (readonly, nonatomic) CGFloat titleBaselineOffset; // ivar: _titleBaselineOffset
@property (readonly, nonatomic) unsigned int titleFontDescriptorSymbolicTraits; // ivar: _titleFontDescriptorSymbolicTraits
@property (readonly, nonatomic) NSInteger titleFontTextStyle; // ivar: _titleFontTextStyle
@property (readonly, nonatomic) CGFloat topGradientBaselineOffset; // ivar: _topGradientBaselineOffset
@property (readonly, nonatomic) unsigned int topGradientFontDescriptorSymbolicTraits; // ivar: _topGradientFontDescriptorSymbolicTraits
@property (readonly, nonatomic) NSInteger topGradientFontTextStyle; // ivar: _topGradientFontTextStyle


-(id)init;
-(id)initWithPresentationStyle:(NSInteger)arg0 ;


@end


#endif