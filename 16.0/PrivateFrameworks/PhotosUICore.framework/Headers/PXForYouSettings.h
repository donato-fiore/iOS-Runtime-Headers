// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXFORYOUSETTINGS_H
#define PXFORYOUSETTINGS_H



#import "PXSettings.h"

@interface PXForYouSettings : PXSettings

@property (nonatomic) BOOL allowGIFPlayback; // ivar: _allowGIFPlayback
@property (nonatomic) BOOL allowLoopPlayback; // ivar: _allowLoopPlayback
@property (nonatomic) BOOL allowVideoPlayback; // ivar: _allowVideoPlayback
@property (nonatomic) BOOL alwaysShowSuggestionRenderingOverlay; // ivar: _alwaysShowSuggestionRenderingOverlay
@property (nonatomic) BOOL delayEditRenders; // ivar: _delayEditRenders
@property (nonatomic) BOOL disableSharedAlbumTopMargin; // ivar: _disableSharedAlbumTopMargin
@property (nonatomic) BOOL forceDisplayReportJunk; // ivar: _forceDisplayReportJunk
@property (nonatomic) BOOL forcePortraitBias; // ivar: _forcePortraitBias
@property (nonatomic) NSUInteger maxMemoriesToFetch; // ivar: _maxMemoriesToFetch
@property (nonatomic) NSUInteger maxSimultaneousVideoCount; // ivar: _maxSimultaneousVideoCount
@property (nonatomic) CGFloat minimumVisibilityForVideoPlayback; // ivar: _minimumVisibilityForVideoPlayback
@property (nonatomic) BOOL showCMMInvitations; // ivar: _showCMMInvitations
@property (nonatomic) BOOL showCMMSuggestions; // ivar: _showCMMSuggestions
@property (nonatomic) BOOL showContentSyndication; // ivar: _showContentSyndication
@property (nonatomic) BOOL showFooter; // ivar: _showFooter
@property (nonatomic) BOOL showHorizontalGadget; // ivar: _showHorizontalGadget
@property (nonatomic) BOOL showMemories; // ivar: _showMemories
@property (nonatomic) BOOL showRecentInterestSuggestions; // ivar: _showRecentInterestSuggestions
@property (nonatomic) BOOL showSharedAlbumActivity; // ivar: _showSharedAlbumActivity
@property (nonatomic) BOOL showSharedLibraryInvitations; // ivar: _showSharedLibraryInvitations
@property (nonatomic) BOOL showSharedLibrarySharingSuggestions; // ivar: _showSharedLibrarySharingSuggestions
@property (nonatomic) BOOL showSurveyQuestions; // ivar: _showSurveyQuestions
@property (nonatomic) BOOL showSurveyQuestionsWithProfile; // ivar: _showSurveyQuestionsWithProfile
@property (nonatomic) BOOL showVerticalSampleGadgets; // ivar: _showVerticalSampleGadgets
@property (nonatomic) BOOL useCachedEditRenders; // ivar: _useCachedEditRenders
@property (nonatomic) BOOL useMockData; // ivar: _useMockData
@property (nonatomic) BOOL useSquareSharedAlbumActivity; // ivar: _useSquareSharedAlbumActivity


+(id)keyPathsAffectingGadgetVisibility;
+(id)settingsControllerModule;
+(id)sharedInstance;
-(NSInteger)version;
-(id)parentSettings;
-(void)setDefaultValues;


@end


#endif