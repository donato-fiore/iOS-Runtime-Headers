// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AVTINMEMORYRESOURCECACHEENTRY_H
#define AVTINMEMORYRESOURCECACHEENTRY_H

@class NSString;
@protocol AVTCacheableResourceChangeToken, AVTCachedResource;

#import <Foundation/Foundation.h>


@interface AVTInMemoryResourceCacheEntry : NSObject

@property (readonly, nonatomic) NSObject<AVTCacheableResourceChangeToken> *changeToken; // ivar: _changeToken
@property (readonly, nonatomic) NSUInteger cost; // ivar: _cost
@property (readonly, copy, nonatomic) NSString *key; // ivar: _key
@property (readonly, nonatomic) NSObject<AVTCachedResource> *resource; // ivar: _resource


-(id)description;
-(id)initWithResource:(id)arg0 changeToken:(id)arg1 key:(id)arg2 cost:(NSUInteger)arg3 ;
-(void)dealloc;


@end


#endif