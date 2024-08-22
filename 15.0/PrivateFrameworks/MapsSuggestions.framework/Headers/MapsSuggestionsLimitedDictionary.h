// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MAPSSUGGESTIONSLIMITEDDICTIONARY_H
#define MAPSSUGGESTIONSLIMITEDDICTIONARY_H

@class NSMutableDictionary, NSMutableArray, NSString;
@protocol MapsSuggestionsTriggerObserver;

#import <Foundation/Foundation.h>


@interface MapsSuggestionsLimitedDictionary : NSObject <MapsSuggestionsTriggerObserver>

 {
    NSUInteger _maxCapacity;
    NSMutableDictionary *_dict;
    NSMutableDictionary *_hits;
    NSMutableArray *_order;
    NSUInteger _totalHits;
    NSUInteger _totalMisses;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *uniqueName;


-(CGFloat)totalHitRatio;
-(NSUInteger)count;
-(NSUInteger)hitsOnKey:(id)arg0 ;
-(id)initWithMaximumCapacity:(NSUInteger)arg0 ;
-(id)objectForKeyedSubscript:(id)arg0 ;
-(void)removeAllObjects;
-(void)removeObjectForKey:(id)arg0 ;
-(void)setObject:(id)arg0 forKeyedSubscript:(id)arg1 ;
-(void)triggerFired:(id)arg0 ;


@end


#endif