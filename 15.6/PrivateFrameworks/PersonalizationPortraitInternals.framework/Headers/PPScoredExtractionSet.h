// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PPSCOREDEXTRACTIONSET_H
#define PPSCOREDEXTRACTIONSET_H

@class NSMutableArray, NSMutableDictionary, PPSource;
@protocol SGExternalEnrichment;

#import <Foundation/Foundation.h>


@interface PPScoredExtractionSet : NSObject <SGExternalEnrichment>



@property (nonatomic) BOOL cloudSync; // ivar: _cloudSync
@property (nonatomic) CGFloat decayRate; // ivar: _decayRate
@property (retain, nonatomic) NSMutableArray *entities; // ivar: _entities
@property (nonatomic) NSUInteger entityAlgorithm; // ivar: _entityAlgorithm
@property (retain, nonatomic) NSMutableDictionary *locations; // ivar: _locations
@property (nonatomic) CGFloat sentimentScore; // ivar: _sentimentScore
@property (retain, nonatomic) PPSource *source; // ivar: _source
@property (nonatomic) NSUInteger topicAlgorithm; // ivar: _topicAlgorithm
@property (retain, nonatomic) NSMutableArray *topics; // ivar: _topics
@property (retain, nonatomic) NSMutableArray *topicsExactMatchesInSourceText; // ivar: _topicsExactMatchesInSourceText


-(NSUInteger)_donateLocationsWithContextualNamedEntities:(id)arg0 ;
-(id)description;
-(id)numberOfExtractions;
-(void)addLocation:(id)arg0 algorithm:(unsigned short)arg1 ;
-(void)flushWrites;
-(void)writeSynchronous;
-(void)writeWithEntityStore:(id)arg0 ;


@end


#endif