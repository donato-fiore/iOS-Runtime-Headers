// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TISTATISTICCHANGECACHE_H
#define TISTATISTICCHANGECACHE_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface TIStatisticChangeCache : NSObject {
    NSMutableDictionary *_cacheWithoutInputMode;
    NSMutableDictionary *_cacheWithInputMode;
}




+(id)sharedInstance;
-(id)flush;
-(id)init;
-(void)addValue:(int)arg0 toStatisticWithName:(id)arg1 andInputMode:(id)arg2 ;
-(void)addValue:(int)arg0 toStatisticWithName:(id)arg1 inCache:(id)arg2 ;


@end


#endif