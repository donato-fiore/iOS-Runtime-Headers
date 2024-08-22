// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PVHOSTAPPLICATIONDELEGATEHANDLER_H
#define PVHOSTAPPLICATIONDELEGATEHANDLER_H

@class NSString;
@protocol PVHostApplicationDelegate;

#import <Foundation/Foundation.h>


@interface PVHostApplicationDelegateHandler : NSObject <PVHostApplicationDelegate>



@property (nonatomic) BOOL cacheDelegateResponses; // ivar: _cacheDelegateResponses
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<PVHostApplicationDelegate> *hostApplicationDelegate; // ivar: _hostApplicationDelegate
@property (readonly) Class superclass;


+(id)sharedInstance;
-(BOOL)wantsDynamicLineSpacingForDiacritics;
-(BOOL)wantsExtraLineSpacingForDiacritics;
-(BOOL)wantsSameAlignmentForAllLinesOfText;
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
-(BOOL)wantsToIncludeTrailingWhitespaceInParagraphLineWidth;
-(BOOL)wantsToLimitLinesOfText;
-(BOOL)wantsToScaleEmojiToCapHeight;
-(BOOL)wantsToSetTranscriptionsUsingArray;
-(BOOL)wantsToSkipSuggestedLineBreaksInParagraphLayout;
-(BOOL)wantsToUseBinarySearchForScalingToBothMargins;
-(BOOL)wantsToUseCachedTextureForText;
-(id)effectTemplatesBundle;
-(id)effectTemplatesDirectoryName;
-(id)init;
-(id)preferredDisplayColorSpace;
-(id)preferredExportColorSpace;
-(unsigned int)getMaxGlyphResolution;
-(unsigned int)getNumberOfLinesToLimitTextTo;


@end


#endif