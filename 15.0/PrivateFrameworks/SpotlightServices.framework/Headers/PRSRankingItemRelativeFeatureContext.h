// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PRSRANKINGITEMRELATIVEFEATURECONTEXT_H
#define PRSRANKINGITEMRELATIVEFEATURECONTEXT_H

@class NSPredicate;

#import <Foundation/Foundation.h>


@interface PRSRankingItemRelativeFeatureContext : NSObject

@property (nonatomic) unsigned short absRankFeature; // ivar: _absRankFeature
@property (copy, nonatomic) id *comparator; // ivar: _comparator
@property (retain, nonatomic) NSPredicate *predicate; // ivar: _predicate
@property (nonatomic) unsigned short relRankFeature; // ivar: _relRankFeature


+(id)_predicateForRelativeFeature:(NSUInteger)arg0 currentTime:(CGFloat)arg1 ;
+(id)_relativeContextsForFeatures:(id)arg0 currentTime:(CGFloat)arg1 ;
+(id)_resultComparatorForRelativeFeature:(SEL)arg0 ;
+(id)relativeContextsForBundle:(id)arg0 currentTime:(CGFloat)arg1 ;
+(id)relativeContextsForResultSetWithCurrentTime:(CGFloat)arg0 ;
+(void)_associatedPRSL2FeatureFromRelativeFeature:(NSUInteger)arg0 absRankFeatureOut:(*unsigned short)arg1 relRankFeatureOut:(*unsigned short)arg2 ;
-(id)initWithFeature:(NSUInteger)arg0 currentTime:(CGFloat)arg1 ;


@end


#endif