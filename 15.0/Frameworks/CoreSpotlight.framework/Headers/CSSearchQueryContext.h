// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CSSEARCHQUERYCONTEXT_H
#define CSSEARCHQUERYCONTEXT_H

@class NSArray, NSString, NSDictionary;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface CSSearchQueryContext : NSObject <NSSecureCoding, NSCopying>

 {
    NSArray *_fetchAttributes;
}


@property (nonatomic) BOOL attribute;
@property (retain, nonatomic) NSArray *bundleIDs; // ivar: _bundleIDs
@property (retain, nonatomic) NSString *clientBundleID; // ivar: _clientBundleID
@property (retain, nonatomic) NSArray *completionAttributes; // ivar: _completionAttributes
@property (nonatomic) unsigned int completionOptions; // ivar: _completionOptions
@property (nonatomic) NSInteger completionResultCount; // ivar: _completionResultCount
@property (retain, nonatomic) NSString *completionString; // ivar: _completionString
@property (retain, nonatomic) NSArray *completionWeights; // ivar: _completionWeights
@property (nonatomic) BOOL counting;
@property (nonatomic) CGFloat currentTime; // ivar: _currentTime
@property (nonatomic) BOOL disableBlockingOnIndex;
@property (retain, nonatomic) NSArray *disableBundles; // ivar: _disableBundles
@property (nonatomic) NSInteger dominantRankingQueryCount; // ivar: _dominantRankingQueryCount
@property (nonatomic) NSInteger dominatedRankingQueryCount; // ivar: _dominatedRankingQueryCount
@property (retain, nonatomic) NSArray *fetchAttributes;
@property (copy, nonatomic) NSArray *filterQueries; // ivar: _filterQueries
@property (retain, nonatomic) NSString *filterQuery; // ivar: _filterQuery
@property (nonatomic) unsigned short flags; // ivar: _flags
@property (nonatomic) BOOL fsOnly;
@property (nonatomic) unk fuzzyMask; // ivar: _fuzzyMask
@property (nonatomic) unk fuzzyMatch; // ivar: _fuzzyMatch
@property (nonatomic) BOOL grouped;
@property (nonatomic) BOOL includeUserActivities;
@property (nonatomic) BOOL internal;
@property (retain, nonatomic) NSString *keyboardLanguage; // ivar: _keyboardLanguage
@property (nonatomic) BOOL live;
@property (nonatomic) BOOL lowPriority;
@property (retain, nonatomic) NSArray *markedTextArray; // ivar: _markedTextArray
@property (nonatomic) CGFloat maxAge; // ivar: _maxAge
@property (nonatomic) NSInteger maxCount; // ivar: _maxCount
@property (nonatomic) NSInteger minCount; // ivar: _minCount
@property (nonatomic) CGFloat minL2Score; // ivar: _minL2Score
@property (retain, nonatomic) NSArray *mountPoints; // ivar: _mountPoints
@property (copy, nonatomic) NSDictionary *options;
@property (nonatomic) BOOL parseUserQuery;
@property (nonatomic) BOOL playback;
@property (retain, nonatomic) NSArray *preferredLanguages; // ivar: _preferredLanguages
@property (retain, nonatomic) NSArray *protectionClasses; // ivar: _protectionClasses
@property (nonatomic) unsigned int qos; // ivar: _qos
@property (nonatomic) NSInteger queryID; // ivar: _queryID
@property (retain, nonatomic) NSArray *rankingQueries; // ivar: _rankingQueries
@property (nonatomic) int rankingType; // ivar: _rankingType
@property (retain, nonatomic) NSString *reason; // ivar: _reason
@property (retain, nonatomic) NSArray *scopes; // ivar: _scopes
@property (nonatomic) NSInteger strongRankingQueryCount; // ivar: _strongRankingQueryCount
@property (retain, nonatomic) NSString *userQuery; // ivar: _userQuery


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)debugDescription;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithQoS:(unsigned int)arg0 ;
-(id)initWithXPCDictionary:(id)arg0 ;
-(id)xpc_dictionary;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif