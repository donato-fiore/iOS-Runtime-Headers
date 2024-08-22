// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CSSEARCHQUERYCONTEXT_H
#define CSSEARCHQUERYCONTEXT_H

@class NSArray, NSString, NSDictionary;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "CSSuggestion.h"
#import "_CSQueryRewriteContext.h"

@interface CSSearchQueryContext : NSObject <NSSecureCoding, NSCopying>

 {
    NSArray *_fetchAttributes;
    NSInteger _maxSuggestionCount;
    NSString *_clientBundleID;
    NSArray *_bundleIDs;
    NSArray *_additionalBundleIDs;
    NSArray *_rankingQueries;
    NSArray *_additionalQueries;
    NSArray *_preferredLanguages;
    NSArray *_markedTextArray;
    NSArray *_disableBundles;
    NSString *_filterQuery;
    NSString *_keyboardLanguage;
    NSString *_userQuery;
    CSSuggestion *_suggestion;
    int _rankingType;
    NSInteger _strongRankingQueryCount;
    NSInteger _dominantRankingQueryCount;
    NSInteger _dominatedRankingQueryCount;
    NSInteger _shortcutBit;
    NSInteger _highMatchBit;
    NSInteger _lowMatchBit;
    NSInteger _highRecencyBit;
    NSInteger _lowRecencyBit;
    NSInteger _maxCount;
    NSInteger _minCount;
    NSInteger _completionResultCount;
    NSInteger _queryID;
    CGFloat _minL2Score;
    CGFloat _maxAge;
    BOOL _internal;
    BOOL _grouped;
    BOOL _live;
    BOOL _counting;
    BOOL _attribute;
    BOOL _lowPriority;
    BOOL _parseUserQuery;
    BOOL _enableSuggestionTokens;
    BOOL _enableRecentSuggestions;
    BOOL _enableResultCountsPerSuggestion;
    BOOL _fsOnly;
    BOOL _playback;
    BOOL _includeUserActivities;
    BOOL _disableBlockingOnIndex;
    unk _fuzzyMask;
    unk _fuzzyMatch;
    NSString *_completionString;
    NSArray *_completionAttributes;
    NSArray *_completionWeights;
    unsigned int _completionOptions;
    unsigned int _qos;
    unsigned int _userQueryOptions;
    CGFloat _currentTime;
    NSDictionary *_options;
    NSArray *_mountPoints;
    NSArray *_scopes;
    NSString *_reason;
    _CSQueryRewriteContext *_rewriteContext;
    NSArray *_customFieldSpecifications;
}


@property (retain, nonatomic) NSArray *additionalBundleIDs;
@property (retain, nonatomic) NSArray *additionalQueries;
@property BOOL allowPhotosEntitledAttributes; // ivar: _allowPhotosEntitledAttributes
@property BOOL allowSpotlightEntitledAttributes; // ivar: _allowSpotlightEntitledAttributes
@property (nonatomic) BOOL attribute;
@property (retain, nonatomic) NSArray *bundleIDs;
@property (retain, nonatomic) NSString *clientBundleID;
@property (retain, nonatomic) NSArray *completionAttributes;
@property (nonatomic) unsigned int completionOptions;
@property (nonatomic) NSInteger completionResultCount;
@property (retain, nonatomic) NSString *completionString;
@property (retain, nonatomic) NSArray *completionWeights;
@property (nonatomic) BOOL counting;
@property (nonatomic) CGFloat currentTime;
@property (nonatomic) BOOL disableBlockingOnIndex;
@property (retain, nonatomic) NSArray *disableBundles;
@property (nonatomic) BOOL disableNLP;
@property (nonatomic) NSInteger dominantRankingQueryCount;
@property (nonatomic) NSInteger dominatedRankingQueryCount;
@property (retain, nonatomic) NSArray *fetchAttributes;
@property (copy, nonatomic) NSArray *filterQueries; // ivar: _filterQueries
@property (retain, nonatomic) NSString *filterQuery;
@property (nonatomic) unsigned short flags; // ivar: _flags
@property (nonatomic) BOOL fsOnly;
@property (nonatomic) unk fuzzyMask;
@property (nonatomic) unk fuzzyMatch;
@property (nonatomic) BOOL generateSuggestions;
@property (nonatomic) BOOL grouped;
@property (copy, nonatomic) NSArray *groupingRules; // ivar: _groupingRules
@property (nonatomic) NSInteger highMatchBit;
@property (nonatomic) NSInteger highRecencyBit;
@property (nonatomic) BOOL includeUserActivities;
@property (nonatomic) BOOL internal;
@property (retain, nonatomic) NSString *keyboardLanguage;
@property (nonatomic) BOOL live;
@property (nonatomic) NSInteger lowMatchBit;
@property (nonatomic) BOOL lowPriority;
@property (nonatomic) NSInteger lowRecencyBit;
@property (retain, nonatomic) NSArray *markedTextArray;
@property (nonatomic) CGFloat maxAge;
@property (nonatomic) NSInteger maxCount;
@property (nonatomic) NSInteger maxSuggestionCount;
@property (nonatomic) NSInteger minCount;
@property (nonatomic) CGFloat minL2Score;
@property (retain, nonatomic) NSArray *mountPoints;
@property (copy, nonatomic) NSDictionary *options;
@property (nonatomic) BOOL parseUserQuery;
@property (nonatomic) BOOL playback;
@property (nonatomic) BOOL pommesSuggestions;
@property (nonatomic) BOOL pommesZKW;
@property (retain, nonatomic) NSArray *preferredLanguages;
@property (retain, nonatomic) NSArray *protectionClasses; // ivar: _protectionClasses
@property (readonly) unsigned int qos;
@property (nonatomic) NSInteger queryID;
@property (retain, nonatomic) NSArray *rankingQueries;
@property (nonatomic) int rankingType;
@property (retain, nonatomic) NSString *reason;
@property (retain, nonatomic) _CSQueryRewriteContext *rewriteContext;
@property (retain, nonatomic) NSArray *scopes;
@property (nonatomic) NSInteger shortcutBit;
@property (nonatomic) BOOL sodium;
@property (nonatomic) NSUInteger sourceOptions; // ivar: _sourceOptions
@property (nonatomic) NSInteger strongRankingQueryCount;
@property (copy, nonatomic) CSSuggestion *suggestion;
@property (retain, nonatomic) NSString *userQuery;
@property (nonatomic) unsigned int userQueryOptions;


+(BOOL)supportsSecureCoding;
-(BOOL)enableRecentSuggestions;
-(BOOL)enableResultCountsPerSuggestion;
-(BOOL)enableSuggestionTokens;
-(NSInteger)maxItemCount;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)customFieldSpecifications;
-(id)debugDescription;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithQoS:(unsigned int)arg0 ;
-(id)initWithXPCDictionary:(id)arg0 ;
-(id)xpc_dictionary;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setCustomFieldSpecifications:(id)arg0 ;
-(void)setEnableRecentSuggestions:(BOOL)arg0 ;
-(void)setEnableResultCountsPerSuggestion:(BOOL)arg0 ;
-(void)setEnableSuggestionTokens:(BOOL)arg0 ;
-(void)setMaxItemCount:(NSInteger)arg0 ;


@end


#endif