// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PPTOPICQUERY_H
#define PPTOPICQUERY_H

@class NSSet, NSDate, NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface PPTopicQuery : NSObject <NSCopying, NSSecureCoding>



@property (nonatomic) CGFloat decayRate; // ivar: _decayRate
@property (nonatomic) NSUInteger deviceFilter; // ivar: _deviceFilter
@property (nonatomic) BOOL excludeWithoutSentiment; // ivar: _excludeWithoutSentiment
@property (retain, nonatomic) NSSet *excludingAlgorithms; // ivar: _excludingAlgorithms
@property (retain, nonatomic) NSSet *excludingSourceBundleIds; // ivar: _excludingSourceBundleIds
@property (nonatomic) BOOL filterByRelevanceDate; // ivar: _filterByRelevanceDate
@property (retain, nonatomic) NSDate *fromDate; // ivar: _fromDate
@property (nonatomic) NSUInteger limit; // ivar: _limit
@property (retain, nonatomic) NSSet *matchingAlgorithms; // ivar: _matchingAlgorithms
@property (retain, nonatomic) NSString *matchingContactHandle; // ivar: _matchingContactHandle
@property (retain, nonatomic) NSSet *matchingDocumentIds; // ivar: _matchingDocumentIds
@property (retain, nonatomic) NSSet *matchingGroupIds; // ivar: _matchingGroupIds
@property (retain, nonatomic) NSSet *matchingSourceBundleIds; // ivar: _matchingSourceBundleIds
@property (retain, nonatomic) NSSet *matchingTopicIds; // ivar: _matchingTopicIds
@property (retain, nonatomic) NSString *matchingTopicTrie; // ivar: _matchingTopicTrie
@property (nonatomic) NSUInteger minimumComponentCount; // ivar: _minimumComponentCount
@property (nonatomic) BOOL orderByIdentifier; // ivar: _orderByIdentifier
@property (nonatomic) BOOL overrideDecayRate;
@property (nonatomic) BOOL removeNearDuplicates; // ivar: _removeNearDuplicates
@property (nonatomic) BOOL scoreWithBiases; // ivar: _scoreWithBiases
@property (nonatomic) BOOL scoreWithCalibration; // ivar: _scoreWithCalibration
@property (nonatomic) BOOL scoreWithStrictFiltering; // ivar: _scoreWithStrictFiltering
@property (retain, nonatomic) NSDate *scoringDate; // ivar: _scoringDate
@property (retain, nonatomic) NSDate *toDate; // ivar: _toDate


+(BOOL)supportsSecureCoding;
+(id)_algorithmsDescription:(id)arg0 ;
+(id)queryForCSSearchableItem:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToTopicQuery:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)customizedDescription;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif