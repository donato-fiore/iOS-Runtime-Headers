// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PPLOCATIONQUERY_H
#define PPLOCATIONQUERY_H

@class NSSet, NSDate, NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface PPLocationQuery : NSObject <NSCopying, NSSecureCoding>



@property (nonatomic) NSUInteger consumer; // ivar: _consumer
@property (nonatomic) CGFloat decayRate; // ivar: _decayRate
@property (nonatomic) NSUInteger deviceFilter; // ivar: _deviceFilter
@property (retain, nonatomic) NSSet *excludingAlgorithms; // ivar: _excludingAlgorithms
@property (retain, nonatomic) NSSet *excludingSourceBundleIds; // ivar: _excludingSourceBundleIds
@property (nonatomic) BOOL excludingWithoutSentiment; // ivar: _excludingWithoutSentiment
@property (nonatomic) BOOL filterByRelevanceDate; // ivar: _filterByRelevanceDate
@property (retain, nonatomic) NSDate *fromDate; // ivar: _fromDate
@property (retain, nonatomic) NSString *fuzzyMatchingString; // ivar: _fuzzyMatchingString
@property (nonatomic) NSUInteger limit; // ivar: _limit
@property (retain, nonatomic) NSSet *matchingAlgorithms; // ivar: _matchingAlgorithms
@property (retain, nonatomic) NSSet *matchingCategories; // ivar: _matchingCategories
@property (retain, nonatomic) NSString *matchingContactHandle; // ivar: _matchingContactHandle
@property (retain, nonatomic) NSSet *matchingSourceBundleIds; // ivar: _matchingSourceBundleIds
@property (nonatomic) BOOL orderByAscendingDate; // ivar: _orderByAscendingDate
@property (nonatomic) CGFloat perRecordDecayRate; // ivar: _perRecordDecayRate
@property (retain, nonatomic) NSDate *scoringDate; // ivar: _scoringDate
@property (retain, nonatomic) NSDate *toDate; // ivar: _toDate


+(BOOL)supportsSecureCoding;
+(id)_algorithmsDescription:(id)arg0 ;
+(id)_matchingCategoriesDescription:(id)arg0 ;
+(id)queryForMapsWithLimit:(NSUInteger)arg0 fromDate:(id)arg1 consumerType:(NSUInteger)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToLocationQuery:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)customizedDescription;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif