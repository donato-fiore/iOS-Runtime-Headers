// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WBSMUTABLEORDEREDDICTIONARY_H
#define WBSMUTABLEORDEREDDICTIONARY_H

@class NSMutableDictionary, NSArray;

#import <Foundation/Foundation.h>

#import "WBSMutableOrderedSet.h"

@interface WBSMutableOrderedDictionary : NSObject {
    WBSMutableOrderedSet *_mutableOrderedSetOfKeys;
    NSMutableDictionary *_mutableDictionary;
    NSUInteger _maximumCount;
}


@property (readonly, nonatomic) NSArray *orderedKeys;
@property (readonly, nonatomic) NSArray *orderedValues;


-(id)init;
-(id)initWithMaximumCount:(NSUInteger)arg0 ;
-(id)objectForKey:(id)arg0 ;
-(id)objectForKeyedSubscript:(id)arg0 ;
-(void)removeObjectForKey:(id)arg0 ;
-(void)removeObjectsForKeys:(id)arg0 ;
-(void)setObject:(id)arg0 forKey:(id)arg1 ;
-(void)setObject:(id)arg0 forKeyedSubscript:(id)arg1 ;


@end


#endif