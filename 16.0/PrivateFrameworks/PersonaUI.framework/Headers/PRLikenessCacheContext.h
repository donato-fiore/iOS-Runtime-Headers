// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PRLIKENESSCACHECONTEXT_H
#define PRLIKENESSCACHECONTEXT_H


#import <Foundation/Foundation.h>


@interface PRLikenessCacheContext : NSObject

@property (nonatomic) NSUInteger cacheSize; // ivar: _cacheSize
@property (nonatomic) BOOL circular; // ivar: _circular
@property (nonatomic) BOOL forceDecode; // ivar: _forceDecode
@property (nonatomic) CGFloat scale; // ivar: _scale


+(id)contextWithCacheSize:(NSUInteger)arg0 ;
-(id)init;


@end


#endif