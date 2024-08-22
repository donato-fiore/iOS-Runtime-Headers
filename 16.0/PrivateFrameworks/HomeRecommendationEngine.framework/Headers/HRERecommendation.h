// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HRERECOMMENDATION_H
#define HRERECOMMENDATION_H

@class NSDictionary, NSMutableDictionary, NADescriptionBuilder, HMHome, HMRoom, NSArray, HMCharacteristic, NSString, HMZone;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "HREIdentifierBuilder.h"
#import "HRETemplate.h"

@interface HRERecommendation : NSObject <NSCopying>



@property (readonly, nonatomic) NSDictionary *analyticsData;
@property (retain, nonatomic) NSMutableDictionary *defaultAnalyticsData; // ivar: _defaultAnalyticsData
@property (readonly) NADescriptionBuilder *descriptionBuilder;
@property (readonly, nonatomic) HMHome *home; // ivar: _home
@property (retain, nonatomic) HREIdentifierBuilder *identifierBuilder; // ivar: identifierBuilder
@property (nonatomic) NSUInteger numberOfEnabledRecommendationsForTemplate;
@property (nonatomic) CGFloat rankModifier; // ivar: _rankModifier
@property (readonly, nonatomic) CGFloat rankingConfidenceScore; // ivar: _rankingConfidenceScore
@property (retain, nonatomic) HMRoom *room;
@property (readonly, nonatomic) NSArray *roomsToFilterHomeObjects;
@property (nonatomic) CGFloat sortingPriority; // ivar: _sortingPriority
@property (retain, nonatomic) HRETemplate *sourceTemplate;
@property (retain, nonatomic) HMCharacteristic *splitCharacteristic;
@property (readonly, nonatomic) NSString *uniqueIdentifier; // ivar: _uniqueIdentifier
@property (readonly, nonatomic) NSMutableDictionary *userInfo; // ivar: _userInfo
@property (retain, nonatomic) HMZone *zone;


+(id)highestRankInRecommendations:(id)arg0 ;
-(BOOL)containsMeaningfulChanges;
-(BOOL)containsRecommendableContent;
-(BOOL)includesObjects:(id)arg0 ;
-(id)changedInvolvedObjects;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithHome:(id)arg0 ;
-(id)initWithHome:(id)arg0 uniqueIdentifier:(id)arg1 ;
-(id)involvedObjects;
-(id)splitUsingSplitCharacteristics:(id)arg0 ;
-(id)splitUsingSplitStrategy:(NSUInteger)arg0 inHome:(id)arg1 ;


@end


#endif