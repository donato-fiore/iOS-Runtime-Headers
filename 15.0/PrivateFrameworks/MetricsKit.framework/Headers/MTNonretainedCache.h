// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MTNONRETAINEDCACHE_H
#define MTNONRETAINEDCACHE_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface MTNonretainedCache : NSObject

@property (retain, nonatomic) NSMutableDictionary *cache; // ivar: _cache


-(id)init;
-(id)objectForKeyedSubscript:(id)arg0 ;
-(id)objectForKeyedSubscript:(id)arg0 creation:(id)arg1 ;
-(void)setObject:(id)arg0 forKeyedSubscript:(id)arg1 ;


@end


#endif