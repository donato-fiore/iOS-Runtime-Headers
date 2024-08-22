// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKAPPEARANCESPECIFIER_H
#define PKAPPEARANCESPECIFIER_H

@class UIColor, UIImage;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface PKAppearanceSpecifier : NSObject <NSCopying>



@property (copy, nonatomic) UIColor *altTextColor; // ivar: _altTextColor
@property (copy, nonatomic) UIColor *backgroundColor; // ivar: _backgroundColor
@property (copy, nonatomic) UIColor *buttonBackgroundColor; // ivar: _buttonBackgroundColor
@property (copy, nonatomic) UIColor *buttonDisabledTextColor; // ivar: _buttonDisabledTextColor
@property (copy, nonatomic) UIColor *buttonTextColor; // ivar: _buttonTextColor
@property (copy, nonatomic) UIColor *cameraCaptureMaskColor; // ivar: _cameraCaptureMaskColor
@property (copy, nonatomic) UIColor *cameraCaptureMaskOutlineColor; // ivar: _cameraCaptureMaskOutlineColor
@property (copy, nonatomic) UIColor *continueButtonTintColor; // ivar: _continueButtonTintColor
@property (copy, nonatomic) UIColor *editableInsertionPointColor; // ivar: _editableInsertionPointColor
@property (copy, nonatomic) UIColor *editablePlaceholderTextColor; // ivar: _editablePlaceholderTextColor
@property (copy, nonatomic) UIColor *editableSelectionBarColor; // ivar: _editableSelectionBarColor
@property (copy, nonatomic) UIColor *editableSelectionHighlightColor; // ivar: _editableSelectionHighlightColor
@property (copy, nonatomic) UIColor *editableTextColor; // ivar: _editableTextColor
@property (copy, nonatomic) UIColor *footerHyperlinkColor; // ivar: _footerHyperlinkColor
@property (copy, nonatomic) UIColor *foregroundColor; // ivar: _foregroundColor
@property (nonatomic) BOOL hasDarkAppearance; // ivar: _hasDarkAppearance
@property (copy, nonatomic) UIImage *navBarPointImage; // ivar: _navBarPointImage
@property (copy, nonatomic) UIImage *navBarShadowPointImage; // ivar: _navBarShadowPointImage
@property (copy, nonatomic) UIColor *progressBarTintColor; // ivar: _progressBarTintColor
@property (copy, nonatomic) UIColor *progressBarTrackTintColor; // ivar: _progressBarTrackTintColor
@property (copy, nonatomic) UIColor *searchBarTintcolor; // ivar: _searchBarTintcolor
@property (copy, nonatomic) UIColor *tableViewCellAccessoryColor; // ivar: _tableViewCellAccessoryColor
@property (copy, nonatomic) UIColor *tableViewCellAccessoryHighlightColor; // ivar: _tableViewCellAccessoryHighlightColor
@property (copy, nonatomic) UIColor *tableViewCellHighlightColor; // ivar: _tableViewCellHighlightColor
@property (copy, nonatomic) UIColor *tableViewSeparatorColor; // ivar: _tableViewSeparatorColor
@property (copy, nonatomic) UIColor *textColor; // ivar: _textColor
@property (copy, nonatomic) UIColor *tintColor; // ivar: _tintColor


-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif