// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PGPEOPLECENTRICSUGGESTION_H
#define PGPEOPLECENTRICSUGGESTION_H

@class NSArray;


#import "PGSingleAssetSuggestion.h"

@interface PGPeopleCentricSuggestion : PGSingleAssetSuggestion {
    NSArray *_suggestedPersonLocalIdentifiers;
}




-(id)initWithPersonLocalIdentifier:(id)arg0 asset:(id)arg1 ;
-(id)initWithPersonLocalIdentifiers:(id)arg0 asset:(id)arg1 ;
-(id)suggestedPersonLocalIdentifiers;


@end


#endif