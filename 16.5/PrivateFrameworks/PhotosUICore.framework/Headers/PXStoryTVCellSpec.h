// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXSTORYTVCELLSPEC_H
#define PXSTORYTVCELLSPEC_H

@class UIFont, NSDictionary;


#import "PXFeatureSpec.h"

@interface PXStoryTVCellSpec : PXFeatureSpec

@property (readonly, nonatomic) UIFont *memorySubtitleFont;
@property (readonly, nonatomic) CGFloat memorySubtitleLeading;
@property (readonly, nonatomic) CGFloat memorySubtitleTracking;
@property (readonly, nonatomic) UIFont *memoryTitleFont;
@property (readonly, nonatomic) CGFloat memoryTitleLeading;
@property (readonly, nonatomic) CGFloat memoryTitleTracking;
@property (readonly, nonatomic) UIFont *subtitleFont; // ivar: _subtitleFont
@property (readonly, nonatomic) NSDictionary *subtitleSupportedCharactersAttributes; // ivar: _subtitleSupportedCharactersAttributes
@property (readonly, nonatomic) NSDictionary *subtitleUnsupportedCharactersAttributes; // ivar: _subtitleUnsupportedCharactersAttributes
@property (readonly, nonatomic) UIFont *titleFont; // ivar: _titleFont
@property (readonly, nonatomic) NSDictionary *titleSupportedCharactersAttributes; // ivar: _titleSupportedCharactersAttributes
@property (readonly, nonatomic) NSDictionary *titleUnsupportedCharactersAttributes; // ivar: _titleUnsupportedCharactersAttributes


-(BOOL)_isSupportedCharacterSetForFontDescriptor:(id)arg0 fontSize:(CGFloat)arg1 string:(id)arg2 supportedCharacterAttributes:(id)arg3 leading:(CGFloat)arg4 ;
-(id)_setupSubtitleAttributesWithAllCharactersSupported:(BOOL)arg0 ;
-(id)_setupTitleAttributesWithAllCharactersSupported:(BOOL)arg0 ;
-(id)_setupTitleFont;
-(id)attributedStringForSubtitle:(id)arg0 ;
-(id)attributedStringForTitle:(id)arg0 ;
-(id)initWithExtendedTraitCollection:(id)arg0 ;
-(struct UIEdgeInsets )_languageAwareOutsetsForFont:(id)arg0 ;


@end


#endif