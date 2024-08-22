// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FCPAYWALLVISUALSPECCONFIGURATION_H
#define FCPAYWALLVISUALSPECCONFIGURATION_H

@class NSURL;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "FCColor.h"
#import "FCMultiResolutionImage.h"
#import "FCMultiSizeVideo.h"

@interface FCPaywallVisualSpecConfiguration : NSObject <NSCopying>



@property (retain, nonatomic) FCColor *backgroundColor; // ivar: _backgroundColor
@property (nonatomic) NSInteger badgeVerticalOffset; // ivar: _badgeVerticalOffset
@property (retain, nonatomic) FCColor *darkStyleBackgroundColor; // ivar: _darkStyleBackgroundColor
@property (retain, nonatomic) FCMultiResolutionImage *darkStyleMultiResolutionBadgeImage; // ivar: _darkStyleMultiResolutionBadgeImage
@property (retain, nonatomic) FCMultiResolutionImage *darkStyleMultiResolutionImage; // ivar: _darkStyleMultiResolutionImage
@property (nonatomic) CGFloat gradientPercentHeight; // ivar: _gradientPercentHeight
@property (retain, nonatomic) FCColor *largeTextColor; // ivar: _largeTextColor
@property (retain, nonatomic) FCColor *mastheadTextColor; // ivar: _mastheadTextColor
@property (retain, nonatomic) FCMultiResolutionImage *multiResolutionBadgeImage; // ivar: _multiResolutionBadgeImage
@property (retain, nonatomic) FCMultiResolutionImage *multiResolutionImage; // ivar: _multiResolutionImage
@property (retain, nonatomic) FCMultiSizeVideo *multiSizeVideo; // ivar: _multiSizeVideo
@property (retain, nonatomic) FCColor *offersTextColor; // ivar: _offersTextColor
@property (retain, nonatomic) FCColor *smallTextColor; // ivar: _smallTextColor
@property (nonatomic) NSInteger textTopPadding; // ivar: _textTopPadding
@property (nonatomic) NSInteger videoHeight; // ivar: _videoHeight
@property (retain, nonatomic) NSURL *videoURL; // ivar: _videoURL
@property (nonatomic) NSInteger videoWidth; // ivar: _videoWidth


+(id)defaultAudioFeedPaywallVisualSpecConfigurationLarge;
+(id)defaultAudioFeedPaywallVisualSpecConfigurationSmall;
+(id)defaultMagazineFeedPaywallVisualSpecConfigurationLarge;
+(id)defaultMagazineFeedPaywallVisualSpecConfigurationMedium;
+(id)defaultMagazineFeedPaywallVisualSpecConfigurationSmall;
+(id)defaultPaywallVisualSpecConfiguration;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithConfigDictionary:(id)arg0 ;
-(id)initWithMultiResolutionImage:(id)arg0 darkStyleMultiResolutionImage:(id)arg1 multiResolutionBadgeImage:(id)arg2 darkStyleMultiResolutionBadgeImage:(id)arg3 multiSizeVideo:(id)arg4 videoURL:(id)arg5 videoWidth:(NSInteger)arg6 videoHeight:(NSInteger)arg7 gradientPercentHeight:(CGFloat)arg8 textTopPadding:(NSInteger)arg9 badgeVerticalOffset:(NSInteger)arg10 backgroundColor:(id)arg11 darkStyleBackgroundColor:(id)arg12 mastheadTextColor:(id)arg13 largeTextColor:(id)arg14 smallTextColor:(id)arg15 offersTextColor:(id)arg16 ;


@end


#endif