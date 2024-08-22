// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _ICRESULTCACHE_H
#define _ICRESULTCACHE_H

@class NSArray, NSDate;

#import <Foundation/Foundation.h>


@interface _ICResultCache : NSObject {
    NSArray *_cachedResults;
    NSDate *_start;
    CGFloat _ttlInSeconds;
}




-(BOOL)fuzzyMatchItem:(id)arg0 withValue:(id)arg1 ;
-(id)initWithTTL:(CGFloat)arg0 ;
-(id)searchWithTrigger:(id)arg0 ;
-(id)searchWithValue:(id)arg0 ;
-(void)addResults:(id)arg0 ;
-(void)clear;


@end


#endif