// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEOCLIENTRANKINGMODELFEATURESOURCEIDENTIFIER_H
#define GEOCLIENTRANKINGMODELFEATURESOURCEIDENTIFIER_H



#import "GEOClientRankingModelFeatureIdentifier.h"

@interface GEOClientRankingModelFeatureSourceIdentifier : GEOClientRankingModelFeatureIdentifier

@property (readonly, nonatomic) int serverEntryType; // ivar: _serverEntryType
@property (readonly, nonatomic) NSInteger sourceType; // ivar: _sourceType
@property (readonly, nonatomic) int suggestionType; // ivar: _suggestionType


-(NSInteger)featureIdentifierType;
-(id)init;
-(id)initWithSuggestionType:(int)arg0 serverEntryType:(int)arg1 sourceType:(NSInteger)arg2 ;


@end


#endif