// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXMODEENTITYSCORINGFEATURES_H
#define ATXMODEENTITYSCORINGFEATURES_H

@class NSString, NSArray;
@protocol ATXJSONSerializableProtocol, ATXModeEntityProtocol, NSObject><ATXJSONSerializableProtocol;

#import <Foundation/Foundation.h>


@interface ATXModeEntityScoringFeatures : NSObject <ATXJSONSerializableProtocol>



@property (nonatomic) CGFloat classConditionalProbability; // ivar: _classConditionalProbability
@property (retain, nonatomic) NSObject<ATXModeEntityProtocol> *entity; // ivar: _entity
@property (retain, nonatomic) NSString *entityDescription; // ivar: _entityDescription
@property (retain, nonatomic) NSObject<NSObject><ATXJSONSerializableProtocol> *entitySpecificFeatures; // ivar: _entitySpecificFeatures
@property (retain, nonatomic) NSArray *globalLaunchesHistogramForLast28Days; // ivar: _globalLaunchesHistogramForLast28Days
@property (nonatomic) NSUInteger globalOccurrences; // ivar: _globalOccurrences
@property (nonatomic) CGFloat globalPopularity; // ivar: _globalPopularity
@property (nonatomic) NSUInteger localOccurrences; // ivar: _localOccurrences
@property (nonatomic) NSUInteger localOccurrencesAcrossAllEntities; // ivar: _localOccurrencesAcrossAllEntities
@property (retain, nonatomic) NSString *modeDescription; // ivar: _modeDescription
@property (retain, nonatomic) NSArray *modeLaunchesHistogramForLast28Days; // ivar: _modeLaunchesHistogramForLast28Days
@property (nonatomic) NSUInteger modeOccurrences; // ivar: _modeOccurrences
@property (nonatomic) CGFloat modePopularity; // ivar: _modePopularity
@property (nonatomic) CGFloat posteriorProbability; // ivar: _posteriorProbability
@property (nonatomic) CGFloat ratioModeAndGlobalPopularity; // ivar: _ratioModeAndGlobalPopularity
@property (nonatomic) NSUInteger uniqueOccurrencesInMode; // ivar: _uniqueOccurrencesInMode


-(BOOL)entityOccurredGloballyOverLastNDays:(NSUInteger)arg0 ;
-(BOOL)entityOccurredInModeOverLastNDays:(NSUInteger)arg0 ;
-(BOOL)entityOccurredOverLastNDays:(NSUInteger)arg0 withHistogram:(id)arg1 ;
-(id)description;
-(id)init;
-(id)initFromJSON:(id)arg0 ;
-(id)jsonRepresentation;


@end


#endif