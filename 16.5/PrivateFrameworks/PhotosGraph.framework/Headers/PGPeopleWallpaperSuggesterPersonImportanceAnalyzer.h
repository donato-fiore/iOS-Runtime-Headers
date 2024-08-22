// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PGPEOPLEWALLPAPERSUGGESTERPERSONIMPORTANCEANALYZER_H
#define PGPEOPLEWALLPAPERSUGGESTERPERSONIMPORTANCEANALYZER_H

@class CLSCurationContext, NSString, NSDate, NSMutableDictionary;
@protocol OS_os_log;

#import <Foundation/Foundation.h>

#import "PGGraph.h"

@interface PGPeopleWallpaperSuggesterPersonImportanceAnalyzer : NSObject {
    PGGraph *_graph;
    CLSCurationContext *_curationContext;
    NSObject<OS_os_log> *_loggingConnection;
    NSString *_mePersonLocalIdentifier;
    NSDate *_latestLibraryDate;
    NSDate *_earliestDateForCandidates;
    NSDate *_earliestDateForBasePersons;
    NSMutableDictionary *_personInformationByPersonLocalIdentifier;
    NSMutableDictionary *_momentLocalIdentifiersByPersonLocalIdentifier;
}


@property (nonatomic) BOOL favoritePersonsAreVIPs; // ivar: _favoritePersonsAreVIPs
@property (nonatomic) CGFloat normalizedDeviationForImportantPersons; // ivar: _normalizedDeviationForImportantPersons
@property (nonatomic) CGFloat normalizedDeviationForVeryImportantPersons; // ivar: _normalizedDeviationForVeryImportantPersons


-(BOOL)_isVeryImportantPersonWithPersonNode:(id)arg0 ;
-(id)initWithGraph:(id)arg0 curationContext:(id)arg1 loggingConnection:(id)arg2 ;
-(id)personInformationsWithProgress:(id)arg0 ;
-(void)computePersonImportancesWithProgress:(id)arg0 ;
-(void)gatherMomentInformationWithProgress:(id)arg0 ;
-(void)gatherPersonInformationWithProgress:(id)arg0 ;


@end


#endif