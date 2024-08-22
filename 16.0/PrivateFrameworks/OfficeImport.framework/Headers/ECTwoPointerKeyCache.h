// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ECTWOPOINTERKEYCACHE_H
#define ECTWOPOINTERKEYCACHE_H


#import <Foundation/Foundation.h>

#import "OITSUPointerKeyDictionary.h"

@interface ECTwoPointerKeyCache : NSObject {
    OITSUPointerKeyDictionary *mCache;
}




-(id)init;
-(id)objectForKey1:(id)arg0 key2:(id)arg1 ;
-(void)setObject:(id)arg0 forKey1:(id)arg1 key2:(id)arg2 ;


@end


#endif