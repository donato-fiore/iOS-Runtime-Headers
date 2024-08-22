// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PGMUSICCURATIONFEATURES_H
#define PGMUSICCURATIONFEATURES_H

@class NSString;

#import <Foundation/Foundation.h>


@interface PGMusicCurationFeatures : NSObject {
    ? memoryCategory;
    ? memorySubcategory;
    ? moments;
    ? momentCollectionDuration;
    ? momentRatioByLanguageCode;
    ? mostFrequentMeaningLabel;
    ? performerIdentifiers;
    ? inferredUserLanguageCodes;
    ? maestroSongScoresByAdamID;
    ? maestroKeywords;
    ? consistentHash;
    ? location;
}


@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) BOOL shouldAvoidColorGrading; // ivar: shouldAvoidColorGrading


-(id)init;


@end


#endif