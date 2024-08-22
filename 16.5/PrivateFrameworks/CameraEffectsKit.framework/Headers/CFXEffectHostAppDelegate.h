// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CFXEFFECTHOSTAPPDELEGATE_H
#define CFXEFFECTHOSTAPPDELEGATE_H

@class NSString;
@protocol PVHostApplicationDelegate;

#import <Foundation/Foundation.h>


@interface CFXEffectHostAppDelegate : NSObject <PVHostApplicationDelegate>



@property (weak) NSObject<PVHostApplicationDelegate> *colorSpaceDelegate; // ivar: _colorSpaceDelegate
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedInstance;
-(BOOL)wantsDynamicLineSpacingForDiacritics;
-(BOOL)wantsExtraLineSpacingForDiacritics;
-(BOOL)wantsToAdjustTextBoundsHeightUsingCapHeight;
-(BOOL)wantsToAssertThatLoadedSceneHasAnimateFlagDisabled;
-(BOOL)wantsToAssertThatTopLevelGroupSpansEntireScene;
-(BOOL)wantsToCacheTopLevelGroupRender;
-(BOOL)wantsToComputeTypographicHeightWithoutLastLineLeading;
-(BOOL)wantsToDownscaleGlyphsToOutputSize;
-(BOOL)wantsToIgnoreTextBoundsOfNewlinesOfTranscriptions;
-(BOOL)wantsToIgnoreTextBoundsOfTransparentObjects;
-(BOOL)wantsToImproveQualityOfDraftQualityText;
-(BOOL)wantsToIncludeSubstituteFontNameInAttributedString;
-(BOOL)wantsToIncludeTrackingValueInAttributedString;
-(BOOL)wantsToLimitLinesOfText;
-(BOOL)wantsToScaleEmojiToCapHeight;
-(BOOL)wantsToSetTranscriptionsUsingArray;
-(BOOL)wantsToSkipSuggestedLineBreaksInParagraphLayout;
-(BOOL)wantsToUseBinarySearchForScalingToBothMargins;
-(BOOL)wantsToUseCachedTextureForText;
-(id)effectTemplatesBundle;
-(id)effectTemplatesDirectoryName;
-(id)preferredDisplayColorSpace;
-(id)preferredExportColorSpace;
-(unsigned int)getMaxGlyphResolution;
-(unsigned int)getNumberOfLinesToLimitTextTo;


@end


#endif