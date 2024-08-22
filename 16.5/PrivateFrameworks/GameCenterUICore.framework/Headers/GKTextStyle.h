// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GKTEXTSTYLE_H
#define GKTEXTSTYLE_H

@class NSString, UIColor;

#import <Foundation/Foundation.h>

#import "GKColorPalette.h"

@interface GKTextStyle : NSObject {
    CGFloat _UIKitFontLeading;
}


@property (retain, nonatomic) NSString *UIKitFontTextStyleName; // ivar: _UIKitFontTextStyleName
@property (retain, nonatomic) UIColor *color; // ivar: _color
@property (retain, nonatomic) NSString *fontName; // ivar: _fontName
@property (nonatomic) SEL fontNameRebaseSelector; // ivar: _fontNameRebaseSelector
@property (readonly, nonatomic) CGFloat fontSize; // ivar: _fontSize
@property (nonatomic) SEL fontSizeRebaseSelector; // ivar: _fontSizeRebaseSelector
@property (nonatomic) NSInteger lineBreakMode; // ivar: _lineBreakMode
@property (nonatomic) CGFloat m34; // ivar: _m34
@property (nonatomic) CGFloat minimumLineHeight; // ivar: _minimumLineHeight
@property (nonatomic) BOOL needsParagraphStyle; // ivar: _needsParagraphStyle
@property (nonatomic) BOOL overrideUIKitFontSize; // ivar: _overrideUIKitFontSize
@property (retain, nonatomic) GKColorPalette *palette; // ivar: _palette
@property (nonatomic) NSInteger textAlignment; // ivar: _textAlignment
@property (nonatomic) CGFloat zPosition; // ivar: _zPosition


+(CGFloat)scaledValueFromHISpecLeading:(CGFloat)arg0 forFontTextStyle:(id)arg1 ;
+(CGFloat)standardFontSize;
+(CGFloat)standardLeadingForFontTextStyle:(id)arg0 ;
+(id)attributedString:(id)arg0 byReplayingFromBaseStyle:(id)arg1 systemContentSizeDidChange:(BOOL)arg2 ;
+(id)textStyle;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)achievementLeaderboardPointsText;
-(id)achievementLeaderboardRank;
-(id)achievementValueText;
-(id)alignment:(NSInteger)arg0 lineBreakMode:(NSInteger)arg1 ;
-(id)attributes;
-(id)bannerMessage;
-(id)bannerShortTitle;
-(id)bannerTitle;
-(id)baseFontRebaseSelector;
-(id)body;
-(id)bold;
-(id)buttonTitle;
-(id)buyButtonTitle;
-(id)caption;
-(id)caption1;
-(id)caption2;
-(id)cellActionItem;
-(id)centered;
-(id)challengeText;
-(id)challengeTitleText;
-(id)composeFields;
-(id)composeMessage;
-(id)copy;
-(id)copyWithBaseClass:(Class)arg0 ;
-(id)description;
-(id)detailSecondaryHeaderText;
-(id)emphasized;
-(id)emphasizedOnDarkBackground;
-(id)footnote;
-(id)friendCaptionColor;
-(id)friendColor;
-(id)gameDetailNameText;
-(id)header0;
-(id)header1;
-(id)header2;
-(id)header3;
-(id)header4;
-(id)headerViewSubText1;
-(id)headline;
-(id)info;
-(id)init;
-(id)initEmpty;
-(id)leaderboardRankLarge;
-(id)leaderboardRankMedium;
-(id)leaderboardRankSmall;
-(id)light;
-(id)lineBreakMode:(NSInteger)arg0 ;
-(id)lineHeight:(CGFloat)arg0 ;
-(id)localPlayerColor;
-(id)medium;
-(id)multiplayerAddText;
-(id)multiplayerFooterText;
-(id)multiplayerHeaderText;
-(id)multiplayerNameText;
-(id)multiplayerStatusText;
-(id)regular;
-(id)remoteUIDetailLabel:(int)arg0 ;
-(id)remoteUIEditField:(int)arg0 ;
-(id)remoteUIEditLabel:(int)arg0 ;
-(id)remoteUILabel:(int)arg0 ;
-(id)remoteUINickNameField:(int)arg0 ;
-(id)remoteUINickNameLabel:(int)arg0 ;
-(id)remoteUISectionFooter:(int)arg0 ;
-(id)remoteUISectionHeader:(int)arg0 ;
-(id)remoteUISelectField:(int)arg0 ;
-(id)remoteUISelectLabel:(int)arg0 ;
-(id)remoteUITableFooterButton:(int)arg0 ;
-(id)remoteUITableHeaderButton:(int)arg0 ;
-(id)remoteUITableHeaderLabel:(int)arg0 ;
-(id)remoteUITableHeaderSubLabel:(int)arg0 ;
-(id)removeButtonTitle;
-(id)replayOnBaseStyle:(id)arg0 systemContentSizeDidChange:(BOOL)arg1 ;
-(id)resolveFontAndLineSpacing:(*CGFloat)arg0 ;
-(id)roundButtonTitle;
-(id)scaled:(CGFloat)arg0 ;
-(id)scaledForM34:(CGFloat)arg0 zPosition:(CGFloat)arg1 ;
-(id)sectionCaption;
-(id)sectionCaptionSmall;
-(id)sectionHeader;
-(id)selectedBuyButtonTitle;
-(id)settingsBoldButton;
-(id)settingsButton;
-(id)settingsFooter;
-(id)settingsHeader;
-(id)settingsLabel;
-(id)settingsLinkText;
-(id)small;
-(id)smallInfo;
-(id)strong;
-(id)styleWithName:(id)arg0 fallback:(id)arg1 layoutMode:(int)arg2 ;
-(id)tabIconCaption;
-(id)tableCellSubtitle;
-(id)tableCellTitle;
-(id)tableFooterStyle;
-(id)thin;
-(id)thinNumberText;
-(id)viewBackground;
-(void)applyScaleForMesh;
-(void)applyToEditField:(id)arg0 ;
-(void)applyToLabel:(id)arg0 ;


@end


#endif