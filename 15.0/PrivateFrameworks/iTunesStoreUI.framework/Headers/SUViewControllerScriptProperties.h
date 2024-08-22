// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SUVIEWCONTROLLERSCRIPTPROPERTIES_H
#define SUVIEWCONTROLLERSCRIPTPROPERTIES_H

@class UIColor, NSDictionary;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "SUGradient.h"

@interface SUViewControllerScriptProperties : NSObject <NSSecureCoding, NSCopying>



@property (nonatomic) BOOL alwaysDispatchesScrollEvents; // ivar: _alwaysDispatchesScrollEvents
@property (retain, nonatomic) UIColor *backgroundColor; // ivar: _backgroundColor
@property (copy, nonatomic) NSDictionary *contextDictionary; // ivar: _contextDictionary
@property (nonatomic, getter=isDoubleTapEnabled) BOOL doubleTapEnabled; // ivar: _doubleTapEnabled
@property (nonatomic, getter=isEmbedded) BOOL embedded; // ivar: _embedded
@property (nonatomic) BOOL flashesScrollIndicators; // ivar: _flashesScrollIndicators
@property (nonatomic) BOOL inputViewObeysDOMFocus; // ivar: _inputViewObeysDOMFocus
@property (nonatomic) NSInteger loadingIndicatorStyle; // ivar: _loadingIndicatorStyle
@property (retain, nonatomic) UIColor *loadingTextColor; // ivar: _loadingTextColor
@property (retain, nonatomic) UIColor *loadingTextShadowColor; // ivar: _loadingTextShadowColor
@property (retain, nonatomic) SUGradient *placeholderBackgroundGradient; // ivar: _placeholderBackgroundGradient
@property (nonatomic) UIEdgeInsets scrollContentInsets; // ivar: _scrollContentInsets
@property (nonatomic, getter=isScrollingDisabled) BOOL scrollingDisabled; // ivar: _scrollingDisabled
@property (nonatomic) BOOL shouldLoadProgressively; // ivar: _shouldLoadProgressively
@property (nonatomic) BOOL shouldShowFormAccessory; // ivar: _shouldShowFormAccessory
@property (nonatomic) BOOL showsBackgroundShadow; // ivar: _showsBackgroundShadow
@property (nonatomic) BOOL showsHorizontalScrollIndicator; // ivar: _showsHorizontalScrollIndicator
@property (nonatomic) BOOL showsVerticalScrollIndicator; // ivar: _showsVerticalScrollIndicator
@property (retain, nonatomic) UIColor *topExtensionColor; // ivar: _topExtensionColor
@property (nonatomic) BOOL usesBlurredBackground; // ivar: _usesBlurredBackground


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif