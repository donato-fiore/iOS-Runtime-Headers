// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PGMOODKEYWORDCOMPUTER_H
#define PGMOODKEYWORDCOMPUTER_H

@class NSArray, NSOrderedSet;

#import <Foundation/Foundation.h>

#import "PGGraphSocialGroupNodeCollection.h"
#import "PGGraphPersonNodeCollection.h"
#import "PGGraphHolidayNodeCollection.h"
#import "PGGraphMomentNodeCollection.h"
#import "PGGraphHighlightTypeNodeCollection.h"

@interface PGMoodKeywordComputer : NSObject

@property (retain, nonatomic) PGGraphSocialGroupNodeCollection *bestSocialGroupNodes; // ivar: _bestSocialGroupNodes
@property (retain, nonatomic) PGGraphPersonNodeCollection *familyOrPartnerPersonNodes; // ivar: _familyOrPartnerPersonNodes
@property (retain, nonatomic) NSArray *keywordsRegions; // ivar: _keywordsRegions
@property (retain, nonatomic) PGGraphHolidayNodeCollection *lunarNewYearHolidayNodes; // ivar: _lunarNewYearHolidayNodes
@property (retain, nonatomic) PGGraphMomentNodeCollection *natureMomentNodes; // ivar: _natureMomentNodes
@property (retain, nonatomic) NSOrderedSet *orderedKeywords; // ivar: _orderedKeywords
@property (retain, nonatomic) PGGraphHighlightTypeNodeCollection *shortTripTypeNodeCollection; // ivar: _shortTripTypeNodeCollection


-(BOOL)_isCrowdedForMomentNodes:(id)arg0 ;
-(id)_bestSocialGroupNodesInGraph:(id)arg0 ;
-(id)_celebratedHolidayKeywordsForMomentNodes:(id)arg0 inGraph:(id)arg1 ;
-(id)_familyOrPartnerPersonNodesInGraph:(id)arg0 ;
-(id)_gatheringAndFamilyKeywordsForTriggeredMemory:(id)arg0 isMeaningfulEventHoliday:(BOOL)arg1 inGraph:(id)arg2 ;
-(id)_keywordsSortedByPriority:(id)arg0 ;
-(id)_locationTripKeywordsForMomentNodes:(id)arg0 locationHelper:(id)arg1 ;
-(id)_lunarNewYearHolidayNodesInGraph:(id)arg0 ;
-(id)_natureMomentNodesInGraph:(id)arg0 ;
-(id)_shortTripTypeNodeCollectionInGraph:(id)arg0 ;
-(id)moodKeywordsForTriggeredMemory:(id)arg0 suggestedMood:(NSUInteger)arg1 inGraph:(id)arg2 locationHelper:(id)arg3 ;


@end


#endif