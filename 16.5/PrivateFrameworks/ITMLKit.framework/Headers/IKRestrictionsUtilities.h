// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IKRESTRICTIONSUTILITIES_H
#define IKRESTRICTIONSUTILITIES_H

@class NSString;
@protocol NSCacheDelegate;

#import <Foundation/Foundation.h>


@interface IKRestrictionsUtilities : NSObject <NSCacheDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)_purgableRatingsDictionary;
+(id)_ratingDictionaryForDomain:(id)arg0 countryCode:(id)arg1 ;
+(id)orderedRankingsInDomain:(id)arg0 countryCode:(id)arg1 ;
+(id)rankingForRestrictionRating:(id)arg0 inDomain:(id)arg1 countryCode:(id)arg2 ;
+(id)ratingForRestrictionRanking:(id)arg0 inDomain:(id)arg1 countryCode:(id)arg2 ;
-(void)cache:(id)arg0 willEvictObject:(id)arg1 ;


@end


#endif