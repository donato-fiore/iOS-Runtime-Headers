// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PLCGPATHCACHE_H
#define PLCGPATHCACHE_H


#import <Foundation/Foundation.h>


@interface PLCGPathCache : NSObject {
    *__CFDictionary _pathCache;
}




+(id)sharedPathCache;
-(id)init;
-(struct CGPath *)pathForKey:(struct CGRect )arg0 ;
-(void)dealloc;
-(void)setPath:(struct CGPath *)arg0 forKey:(struct CGRect )arg1 ;


@end


#endif