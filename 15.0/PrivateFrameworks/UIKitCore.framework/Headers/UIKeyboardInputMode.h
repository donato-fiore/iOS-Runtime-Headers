// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UIKEYBOARDINPUTMODE_H
#define UIKEYBOARDINPUTMODE_H

@class NSString, NSBundle, NSExtension, NSArray;
@protocol NSCopying;


#import "UITextInputMode.h"
#import "UIImage.h"

@interface UIKeyboardInputMode : UITextInputMode <NSCopying>



@property (readonly, nonatomic) NSString *automaticHardwareLayout;
@property (retain, nonatomic) UIImage *cachedIcon; // ivar: _cachedIcon
@property (retain, nonatomic) NSString *cachedSizeCategory; // ivar: _cachedSizeCategory
@property (readonly, nonatomic) NSBundle *containingBundle;
@property (readonly, nonatomic) NSString *containingBundleDisplayName;
@property (readonly, nonatomic) BOOL defaultLayoutIsASCIICapable;
@property (readonly, nonatomic) NSString *dictationDisplayName;
@property (retain, nonatomic) NSString *dictationLanguage;
@property (readonly, nonatomic) NSString *displayName;
@property (readonly, nonatomic) NSString *extendedDisplayName;
@property (readonly, nonatomic) NSExtension *extension;
@property (nonatomic) BOOL extensionInputModeHasDictation; // ivar: _extensionInputModeHasDictation
@property (retain, nonatomic) NSString *hardwareLayout; // ivar: hardwareLayout
@property (retain, nonatomic) NSString *identifier; // ivar: identifier
@property (readonly, nonatomic) NSString *identifierWithLayouts;
@property (readonly, nonatomic) BOOL isDefaultRightToLeft;
@property (nonatomic) BOOL isDisplayed; // ivar: isDisplayed
@property (readonly, nonatomic) BOOL isEmojiInputMode;
@property (readonly, nonatomic) BOOL isExtensionInputMode;
@property (readonly, nonatomic) BOOL isSpecializedInputMode;
@property (readonly, nonatomic) BOOL isStalledExtensionInputMode;
@property (retain, nonatomic) NSString *languageWithRegion; // ivar: _languageWithRegion
@property (retain, nonatomic) NSArray *multilingualLanguages; // ivar: _multilingualLanguages
@property (retain, nonatomic) NSString *normalizedIdentifier; // ivar: normalizedIdentifier
@property (readonly, retain, nonatomic) NSArray *normalizedIdentifierLevels;
@property (retain, nonatomic) NSString *primaryLanguage; // ivar: _primaryLanguage
@property (readonly, nonatomic) BOOL showSWLayoutWithHWKeyboard;
@property (retain, nonatomic) NSString *softwareLayout; // ivar: softwareLayout
@property (readonly, nonatomic) BOOL supportsEmojiSearch;


+(BOOL)supportsSecureCoding;
+(id)autofillSignupInputMode;
+(id)canonicalLanguageIdentifierFromIdentifier:(id)arg0 ;
+(id)dictationInputMode;
+(id)hardwareLayoutFromIdentifier:(id)arg0 ;
+(id)intlInputMode;
+(id)keyboardInputModeWithIdentifier:(id)arg0 ;
+(id)softwareLayoutFromIdentifier:(id)arg0 ;
-(BOOL)includeBarHeight;
-(BOOL)isAllowedForTraits:(id)arg0 ;
-(BOOL)isDesiredForTraits:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(CGFloat)languageIndicatorScale;
-(id)_fallbackIconLabel;
-(id)_indicatorIconWithBackground:(BOOL)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)imageForInputModeLabel:(id)arg0 secondaryIconLabel:(id)arg1 withBackground:(BOOL)arg2 ;
-(id)indicatorIcon;
-(id)indicatorTextIcon;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 ;
-(void)_getIconLabel:(*id)arg0 secondaryIconLabel:(*id)arg1 ;
-(void)dealloc;
-(void)drawStringInRect:(id)arg0 inRect:(struct CGRect )arg1 useSmallFont:(BOOL)arg2 scale:(CGFloat)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)preferencesControllerChanged:(id)arg0 ;
-(void)setLastUsedDictationLanguage;


@end


#endif