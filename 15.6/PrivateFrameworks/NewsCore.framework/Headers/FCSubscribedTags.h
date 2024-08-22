// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FCSUBSCRIBEDTAGS_H
#define FCSUBSCRIBEDTAGS_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface FCSubscribedTags : NSObject

@property (copy, nonatomic) NSArray *autoFavoriteTags; // ivar: _autoFavoriteTags
@property (copy, nonatomic) NSArray *groupableTags; // ivar: _groupableTags
@property (copy, nonatomic) NSArray *mutedTags; // ivar: _mutedTags
@property (copy, nonatomic) NSArray *subscribedTags; // ivar: _subscribedTags


-(id)initWithSubscribedTags:(id)arg0 mutedTags:(id)arg1 autoFavoriteTags:(id)arg2 groupableTags:(id)arg3 ;


@end


#endif