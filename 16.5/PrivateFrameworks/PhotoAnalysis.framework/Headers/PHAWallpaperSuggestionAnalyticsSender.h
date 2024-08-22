// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PHAWALLPAPERSUGGESTIONANALYTICSSENDER_H
#define PHAWALLPAPERSUGGESTIONANALYTICSSENDER_H

@class PGManagerWorkingContext, PHPhotoLibrary, CPAnalytics, PGWallpaperLibraryAnalysisSummary;
@protocol OS_os_log;

#import <Foundation/Foundation.h>


@interface PHAWallpaperSuggestionAnalyticsSender : NSObject {
    PGManagerWorkingContext *_workingContext;
    PHPhotoLibrary *_photoLibrary;
    NSObject<OS_os_log> *_loggingConnection;
    CPAnalytics *_analytics;
    PGWallpaperLibraryAnalysisSummary *_libraryAnalysisSummary;
}




+(id)analyticsPayloadForLibraryAnalysisSummary:(id)arg0 ;
+(struct ? )suggestionStatisticsFromSuggestions:(id)arg0 ;
-(NSInteger)eligiblePetsCount;
-(NSInteger)shufflePickerVisiblePeopleCount;
-(id)existingSuggestionSummary;
-(id)generationSummaryWithGeneratedWallpaperSuggestionLocalIdentifiers:(id)arg0 ;
-(id)initWithGraphManager:(id)arg0 libraryAnalysisSummary:(id)arg1 ;
-(id)peoplePetSummary;
-(void)sendGenerationSummaryEventWithGeneratedWallpaperSuggestionLocalIdentifiers:(id)arg0 ;
-(void)sendRefreshSummaryEventWithPosterConfiguration:(id)arg0 ;


@end


#endif