// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UIFONTPICKERFONTINFO_H
#define _UIFONTPICKERFONTINFO_H

@class NSString, UIFontDescriptor, NSAttributedString, NSArray;

#import <Foundation/Foundation.h>

#import "_UIFontPickerFontInfo.h"

@interface _UIFontPickerFontInfo : NSObject {
    NSString *_localizedFamilyName;
    NSString *_localizedStyleName;
    CGFloat _lineHeight;
    UIFontDescriptor *_fontDescriptor;
    NSAttributedString *_attributedString;
    NSString *_attributedStringContentSize;
    NSUInteger _hasMultipleFaces;
    NSArray *_subInfos;
}


@property (readonly) NSAttributedString *attributedString;
@property (readonly) NSArray *faces;
@property (readonly) _UIFontPickerFontInfo *familyInfo;
@property (readonly) NSString *familyName; // ivar: _familyName
@property (readonly) UIFontDescriptor *fontDescriptor;
@property (readonly, getter=isFontFamilyAvailable) BOOL fontFamilyAvailable;
@property (readonly) BOOL hasMultipleFaces;
@property (readonly) CGFloat lineHeight;
@property (readonly) NSString *localizedFamilyName;
@property (readonly) NSString *localizedName;
@property (readonly) NSString *postscriptName; // ivar: _postscriptName
@property (readonly) NSString *styleName; // ivar: _styleName


+(id)infoWithFamilyName:(id)arg0 ;
+(id)infoWithFontDescriptor:(struct __CTFontDescriptor *)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)matchesConfiguration:(id)arg0 ;
-(BOOL)matchesFamilyForFontDescriptor:(id)arg0 ;
-(BOOL)matchesFontDescriptor:(id)arg0 ;
-(BOOL)matchesLanguages:(id)arg0 ;
-(BOOL)matchesTraits:(unsigned int)arg0 ;
-(NSUInteger)hash;
-(id)_fontStringForTraitCollection:(id)arg0 ;
-(id)_sortedFacesByWeight;
-(id)description;
-(id)faceMatchingDescriptor:(id)arg0 ;
-(id)initWithFamilyName:(id)arg0 ;
-(id)initWithFontDescriptor:(id)arg0 ;
-(void)_populateLocalizedNamesIfNecessary;
-(void)_updateAttributedStringIfNeeded;


@end


#endif