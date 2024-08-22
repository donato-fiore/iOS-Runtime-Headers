// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CNCONTACTSTYLE_H
#define CNCONTACTSTYLE_H

@class UIColor, UIFont;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CNContactStyle : NSObject <NSSecureCoding>



@property (retain, nonatomic) UIColor *backgroundColor; // ivar: _backgroundColor
@property (nonatomic) NSInteger barStyle; // ivar: _barStyle
@property (retain, nonatomic) UIColor *blueSelectionSecondaryTextColor; // ivar: _blueSelectionSecondaryTextColor
@property (nonatomic) BOOL blurSupported; // ivar: _blurSupported
@property (readonly, nonatomic) UIFont *boldTextFont;
@property (retain, nonatomic) UIColor *contactHeaderBackgroundColor; // ivar: _contactHeaderBackgroundColor
@property (retain, nonatomic) UIColor *contactHeaderDropShadowColor; // ivar: _contactHeaderDropShadowColor
@property (nonatomic) NSInteger contactViewPlatterStyle; // ivar: _contactViewPlatterStyle
@property (retain, nonatomic) UIColor *disabledTextColor; // ivar: _disabledTextColor
@property (retain, nonatomic) UIColor *groupedBackgroundColor; // ivar: _groupedBackgroundColor
@property (retain, nonatomic) UIColor *headerBackgroundColor; // ivar: _headerBackgroundColor
@property (retain, nonatomic) UIColor *highlightedTextColor; // ivar: _highlightedTextColor
@property (retain, nonatomic) UIColor *highlightedTextLightColor; // ivar: _highlightedTextLightColor
@property (nonatomic) NSInteger inlineActionsViewStyle; // ivar: _inlineActionsViewStyle
@property (nonatomic) NSInteger keyboardAppearance; // ivar: _keyboardAppearance
@property (nonatomic) NSInteger modalTransitionStyle; // ivar: _modalTransitionStyle
@property (retain, nonatomic) UIColor *notesTextColor; // ivar: _notesTextColor
@property (nonatomic) NSInteger overridenStyle; // ivar: _overridenStyle
@property (retain, nonatomic) UIColor *placeholderTextColor; // ivar: _placeholderTextColor
@property (retain, nonatomic) UIColor *readOnlyTextColor; // ivar: _readOnlyTextColor
@property (retain, nonatomic) UIColor *searchBarBackgroundColor; // ivar: _searchBarBackgroundColor
@property (retain, nonatomic) UIColor *searchCellBackgroundColor; // ivar: _searchCellBackgroundColor
@property (retain, nonatomic) UIColor *sectionBackgroundColor; // ivar: _sectionBackgroundColor
@property (nonatomic) CGFloat sectionContentInset; // ivar: _sectionContentInset
@property (nonatomic) CGFloat sectionCornerRadius; // ivar: _sectionCornerRadius
@property (retain, nonatomic) UIColor *sectionHeaderTextColor; // ivar: _sectionHeaderTextColor
@property (retain, nonatomic) UIColor *sectionIndexBackgroundColor; // ivar: _sectionIndexBackgroundColor
@property (nonatomic) CGFloat sectionMaximumPlatterWidth; // ivar: _sectionMaximumPlatterWidth
@property (retain, nonatomic) UIColor *selectedCellBackgroundColor; // ivar: _selectedCellBackgroundColor
@property (nonatomic) NSInteger separatorBackdropOverlayBlendMode; // ivar: _separatorBackdropOverlayBlendMode
@property (retain, nonatomic) UIColor *separatorColor; // ivar: _separatorColor
@property (nonatomic) UIEdgeInsets separatorInset; // ivar: _separatorInset
@property (nonatomic) NSInteger separatorStyle; // ivar: _separatorStyle
@property (nonatomic) BOOL shouldPresentInCurrentContext; // ivar: _shouldPresentInCurrentContext
@property (retain, nonatomic) UIColor *suggestedLabelTextColor; // ivar: _suggestedLabelTextColor
@property (retain, nonatomic) UIColor *suggestedValueTextColor; // ivar: _suggestedValueTextColor
@property (retain, nonatomic) UIColor *taglineTextColor; // ivar: _taglineTextColor
@property (retain, nonatomic) UIColor *textColor; // ivar: _textColor
@property (readonly, nonatomic) UIFont *textFont;
@property (retain, nonatomic) UIColor *tintColorOverride; // ivar: _tintColorOverride
@property (nonatomic) NSInteger topActionsViewStyle; // ivar: _topActionsViewStyle
@property (retain, nonatomic) UIColor *transportBackgroundColor; // ivar: _transportBackgroundColor
@property (retain, nonatomic) UIColor *transportBoldBackgroundColor; // ivar: _transportBoldBackgroundColor
@property (retain, nonatomic) UIColor *transportBorderColor; // ivar: _transportBorderColor
@property (readonly, nonatomic) BOOL usesInsetPlatterStyle;
@property (nonatomic) BOOL usesOpaqueBackground; // ivar: _usesOpaqueBackground
@property (nonatomic) BOOL usesTranslucentBarStyle; // ivar: _usesTranslucentBarStyle


+(BOOL)supportsSecureCoding;
+(id)currentStyle;
+(id)darkStyle;
+(id)darkStyleWithOverrideUserInterfaceStyle:(NSInteger)arg0 ;
+(id)defaultStyle;
+(id)faceTimeStyle;
+(id)siriStyle;
+(id)spotlightStyle;
+(id)testStyle;
+(id)watchStyle;
+(void)setCurrentStyle:(id)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif