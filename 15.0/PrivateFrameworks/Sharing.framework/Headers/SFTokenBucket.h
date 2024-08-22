// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SFTOKENBUCKET_H
#define SFTOKENBUCKET_H


#import <Foundation/Foundation.h>


@interface SFTokenBucket : NSObject {
    NSUInteger _bucketSize;
    NSUInteger _tokensAvailable;
    NSUInteger _tokenDurationTicks;
    NSUInteger _lastRefreshTicks;
}




-(BOOL)acquireToken;
-(id)init;
-(id)initWithBucketSize:(NSUInteger)arg0 tokenDurationSec:(CGFloat)arg1 ;
-(id)initWithBucketSize:(NSUInteger)arg0 tokenDurationTicks:(NSUInteger)arg1 ;
-(id)initWithBucketSize:(NSUInteger)arg0 tokensPerSec:(CGFloat)arg1 ;


@end


#endif