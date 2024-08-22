// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXMEMORIESRELATEDTAPTORADARSERVICE_H
#define PXMEMORIESRELATEDTAPTORADARSERVICE_H



#import "PXDiagnosticsService.h"

@interface PXMemoriesRelatedTapToRadarService : PXDiagnosticsService



+(BOOL)isServiceAvailableForProviders:(id)arg0 ;
-(BOOL)canProvideConsoleDescription;
-(BOOL)canProvideContextualViewController;
-(BOOL)canProvideSettingsViewController;
-(id)_libraryStatDictionary;
-(id)_providerItemsSummary;
-(id)collectProviderItemsSummaryAndLibraryStat;
-(id)consoleDescription;
-(id)contextualViewController;
-(id)diagnosticFilesForPeopleContactSuggestionWithError:(*id)arg0 ;
-(id)parseProviderItemsSummary:(id)arg0 error:(*id)arg1 ;
-(id)settingsViewController;
-(id)snapshotMemoriesRelatedResults:(id)arg0 error:(*id)arg1 ;
-(id)tapToRadarURLWithTitle:(id)arg0 descriptionString:(id)arg1 ;
-(id)title;
-(id)writeGraphData:(id)arg0 errorsList:(id)arg1 ;
-(id)writeGraphStatistics:(id)arg0 errorsList:(id)arg1 ;
-(id)writeLibraryStatistics:(id)arg0 analysisClient:(id)arg1 errorsList:(id)arg2 ;
-(id)writeMemoriesSummary:(id)arg0 analysisClient:(id)arg1 errorsList:(id)arg2 ;
-(id)writePeopleContactSuggestionsGraphStatistics:(id)arg0 errorsList:(id)arg1 ;
-(void)writeErrorsToErrorLog:(id)arg0 ;


@end


#endif