// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FCEDGECACHEHINT_H
#define FCEDGECACHEHINT_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface FCEdgeCacheHint : NSObject <NSCopying>



@property (readonly, copy, nonatomic) NSString *cacheControlKey; // ivar: _cacheControlKey
@property (readonly, copy, nonatomic) NSString *groupName; // ivar: _groupName


+(id)edgeCacheHintForAudioContent;
+(id)edgeCacheHintForEditorial;
+(id)edgeCacheHintForEvergreenArticles;
+(id)edgeCacheHintForFeaturedArticles;
+(id)edgeCacheHintForForYouConfig;
+(id)edgeCacheHintForLocalNews;
+(id)edgeCacheHintForMagazineContent;
+(id)edgeCacheHintForSportsArticles;
+(id)edgeCacheHintForSpotlight;
+(id)edgeCacheHintForToday;
+(id)edgeCacheHintForTopStories;
+(id)edgeCacheHintForTrending;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithGroupName:(id)arg0 cacheControlKey:(id)arg1 ;


@end


#endif