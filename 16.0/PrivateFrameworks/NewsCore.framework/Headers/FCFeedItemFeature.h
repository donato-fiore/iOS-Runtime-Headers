// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FCFEEDITEMFEATURE_H
#define FCFEEDITEMFEATURE_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface FCFeedItemFeature : NSObject <NSCopying>



@property (readonly, nonatomic) NSString *key; // ivar: _key
@property (nonatomic) BOOL queryable; // ivar: _queryable
@property (readonly, nonatomic) NSString *topicID;
@property (readonly, nonatomic) NSInteger type; // ivar: _type


+(id)featureForAllArticles;
+(id)featureForTopicID:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithType:(NSInteger)arg0 key:(id)arg1 ;


@end


#endif