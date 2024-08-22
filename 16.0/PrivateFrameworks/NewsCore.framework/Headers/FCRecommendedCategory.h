// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FCRECOMMENDEDCATEGORY_H
#define FCRECOMMENDEDCATEGORY_H

@class NSArray, NSString;

#import <Foundation/Foundation.h>


@interface FCRecommendedCategory : NSObject

@property (readonly, nonatomic) NSArray *channelTagIDs; // ivar: _channelTagIDs
@property (readonly, nonatomic) NSArray *curatedTagIDs; // ivar: _curatedTagIDs
@property (readonly, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) NSArray *subcategories; // ivar: _subcategories
@property (readonly, nonatomic) NSArray *topicTagIDs; // ivar: _topicTagIDs


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithIdentifier:(id)arg0 name:(id)arg1 curatedTagIDs:(id)arg2 recommendedTopicTagIDs:(id)arg3 recommendedChannelTagIDs:(id)arg4 subcategories:(id)arg5 ;


@end


#endif