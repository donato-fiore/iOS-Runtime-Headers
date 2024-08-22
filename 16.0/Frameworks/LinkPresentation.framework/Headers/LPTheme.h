// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef LPTHEME_H
#define LPTHEME_H

@class NSString, UIColor, UIFont;

#import <Foundation/Foundation.h>

#import "LPLinkRendererSizeClassParameters.h"
#import "LPImageViewStyle.h"
#import "LPCaptionBarStyle.h"
#import "LPCollaborationHandleStyle.h"
#import "LPContactsBadgeStyle.h"
#import "LPPointUnit.h"
#import "LPVideoViewStyle.h"
#import "LPQuotedTextViewStyle.h"
#import "LPTapToLoadViewStyle.h"

@interface LPTheme : NSObject {
    NSInteger _style;
    NSUInteger _sizeClass;
    LPLinkRendererSizeClassParameters *_sizeClassParameters;
    NSInteger _platform;
    BOOL _isFallbackIcon;
    BOOL _hasButton;
    CGFloat _dynamicTypeLeadingScalingFactor;
    NSString *_preferredContentSizeCategory;
}


@property (retain, nonatomic) UIColor *backgroundColor; // ivar: _backgroundColor
@property (readonly, nonatomic) LPImageViewStyle *backgroundImage; // ivar: _backgroundImage
@property (readonly, nonatomic) LPCaptionBarStyle *captionBar; // ivar: _captionBar
@property (readonly, nonatomic) LPCollaborationHandleStyle *collaborationHandleStyle; // ivar: _collaborationHandleStyle
@property (readonly, nonatomic) LPContactsBadgeStyle *contactsBadgeStyle; // ivar: _contactsBadgeStyle
@property (retain, nonatomic) LPPointUnit *cornerRadius; // ivar: _cornerRadius
@property (readonly, nonatomic) UIFont *domainNameIndicatorFont; // ivar: _domainNameIndicatorFont
@property (readonly, nonatomic) UIFont *domainNameIndicatorIconFont; // ivar: _domainNameIndicatorIconFont
@property (retain, nonatomic) UIColor *highlightColor; // ivar: _highlightColor
@property (retain, nonatomic) LPPointUnit *maximumWidth; // ivar: _maximumWidth
@property (retain, nonatomic) UIColor *mediaBackgroundColor; // ivar: _mediaBackgroundColor
@property (readonly, nonatomic) LPCaptionBarStyle *mediaBottomCaptionBar; // ivar: _mediaBottomCaptionBar
@property (readonly, nonatomic) LPImageViewStyle *mediaImage; // ivar: _mediaImage
@property (readonly, nonatomic) LPCaptionBarStyle *mediaTopCaptionBar; // ivar: _mediaTopCaptionBar
@property (readonly, nonatomic) LPVideoViewStyle *mediaVideo; // ivar: _mediaVideo
@property (readonly, nonatomic) LPImageViewStyle *placeholderImage; // ivar: _placeholderImage
@property (readonly, nonatomic) LPQuotedTextViewStyle *quotedText; // ivar: _quotedText
@property (readonly, nonatomic) LPTapToLoadViewStyle *tapToLoad; // ivar: _tapToLoad
@property (nonatomic) CGFloat widthFractionForTallMedia; // ivar: _widthFractionForTallMedia


+(CGFloat)largestIconSizeInPoints;
+(id)iconPlatterCornerRadius;
+(id)iconPlatterPaddingForReason:(NSInteger)arg0 ;
+(id)primaryLabelColor;
+(id)regularTheme;
+(id)secondaryLabelColor;
+(id)themeWithStyle:(NSInteger)arg0 icon:(id)arg1 platform:(NSInteger)arg2 sizeClass:(NSUInteger)arg3 sizeClassParameters:(id)arg4 hasButton:(BOOL)arg5 preferredContentSizeCategory:(id)arg6 ;
+(void)addClient:(id)arg0 ;
+(void)invalidateThemeCache;
-(id)CSSTextForProperty:(id)arg0 withValue:(id)arg1 ;
-(id)CSSTextForThemeProperty:(id)arg0 ;
-(id)initWithStyle:(NSInteger)arg0 icon:(id)arg1 platform:(NSInteger)arg2 sizeClass:(NSUInteger)arg3 sizeClassParameters:(id)arg4 hasButton:(BOOL)arg5 preferredContentSizeCategory:(id)arg6 ;
-(id)valueForThemeProperty:(id)arg0 ;
-(id)valueForUndefinedKey:(id)arg0 ;
-(void)adjustForStyle;


@end


#endif