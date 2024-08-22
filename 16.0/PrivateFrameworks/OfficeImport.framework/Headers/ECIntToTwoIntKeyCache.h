// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ECINTTOTWOINTKEYCACHE_H
#define ECINTTOTWOINTKEYCACHE_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface ECIntToTwoIntKeyCache : NSObject {
    NSMutableDictionary *mCache;
}




+(id)keyForKey1:(NSUInteger)arg0 key2:(NSUInteger)arg1 ;
-(BOOL)integerIsPresentForKey1:(NSUInteger)arg0 key2:(NSUInteger)arg1 outValue:(*NSUInteger)arg2 ;
-(id)init;
-(void)setObject:(NSUInteger)arg0 forKey1:(NSUInteger)arg1 key2:(NSUInteger)arg2 ;


@end


#endif