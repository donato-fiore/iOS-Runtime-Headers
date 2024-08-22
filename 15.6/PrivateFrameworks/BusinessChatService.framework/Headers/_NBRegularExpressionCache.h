// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _NBREGULAREXPRESSIONCACHE_H
#define _NBREGULAREXPRESSIONCACHE_H

@class NSCache;

#import <Foundation/Foundation.h>


@interface _NBRegularExpressionCache : NSObject

@property (retain, nonatomic) NSCache *cache; // ivar: _cache


+(id)sharedInstance;
-(id)init;
-(id)regularExpressionForPattern:(id)arg0 error:(*id)arg1 ;


@end


#endif