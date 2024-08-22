// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PPNAMEDENTITYQUERY_H
#define PPNAMEDENTITYQUERY_H

@class NSSet, NSDate, NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface PPNamedEntityQuery : NSObject <NSCopying, NSSecureCoding>



@property (nonatomic) CGFloat decayRate; // ivar: _decayRate
@property (nonatomic) NSUInteger deviceFilter; // ivar: _deviceFilter
@property (nonatomic) BOOL excludeWithoutSentiment; // ivar: _excludeWithoutSentiment
@property (retain, nonatomic) NSSet *excludingAlgorithms; // ivar: _excludingAlgorithms
@property (retain, nonatomic) NSSet *excludingSourceBundleIds; // ivar: _excludingSourceBundleIds
@property (nonatomic) BOOL filterByRelevanceDate; // ivar: _filterByRelevanceDate
@property (retain, nonatomic) NSDate *fromDate; // ivar: _fromDate
@property (nonatomic) BOOL isForRecordMonitoring; // ivar: _isForRecordMonitoring
@property (nonatomic) NSUInteger limit; // ivar: _limit
@property (nonatomic) NSUInteger locationConsumer; // ivar: _locationConsumer
@property (nonatomic) BOOL matchCategory; // ivar: _matchCategory
@property (retain, nonatomic) NSSet *matchingCategories; // ivar: _matchingCategories
@property (retain, nonatomic) NSString *matchingContactHandle; // ivar: _matchingContactHandle
@property (retain, nonatomic) NSString *matchingEntityTrie; // ivar: _matchingEntityTrie
@property (copy, nonatomic) NSString *matchingName; // ivar: _matchingName
@property (copy, nonatomic) NSSet *matchingNames; // ivar: _matchingNames
@property (retain, nonatomic) NSSet *matchingSourceBundleIds; // ivar: _matchingSourceBundleIds
@property (retain, nonatomic) NSSet *matchingSourceDocumentIds; // ivar: _matchingSourceDocumentIds
@property (retain, nonatomic) NSSet *matchingSourceGroupIds; // ivar: _matchingSourceGroupIds
@property (nonatomic) BOOL orderByAscendingDate; // ivar: _orderByAscendingDate
@property (nonatomic) BOOL orderByName; // ivar: _orderByName
@property (nonatomic) BOOL overrideDecayRate;
@property (nonatomic) BOOL removeNearDuplicates; // ivar: _removeNearDuplicates
@property (retain, nonatomic) NSDate *scoringDate; // ivar: _scoringDate
@property (retain, nonatomic) NSDate *toDate; // ivar: _toDate


+(BOOL)supportsSecureCoding;
+(id)_excludingAlgorithmsDescription:(id)arg0 ;
+(id)_matchingCategoriesDescription:(id)arg0 ;
+(id)locationQueryWithLimit:(NSUInteger)arg0 fromDate:(id)arg1 consumerType:(NSUInteger)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToNamedEntityQuery:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)customizedDescription;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif