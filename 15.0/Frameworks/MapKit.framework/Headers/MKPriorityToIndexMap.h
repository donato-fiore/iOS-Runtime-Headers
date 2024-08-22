// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MKPRIORITYTOINDEXMAP_H
#define MKPRIORITYTOINDEXMAP_H

@class NSMutableArray, NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface MKPriorityToIndexMap : NSObject {
    NSMutableArray *_priorities;
    NSMutableDictionary *_prioritiesToIndexes;
}




-(BOOL)addPriorities:(id)arg0 ;
-(BOOL)contains:(id)arg0 ;
-(BOOL)containsPriority:(CGFloat)arg0 ;
-(CGFloat)priorityOfIndex:(NSUInteger)arg0 ;
-(NSInteger)indexOfPriority:(CGFloat)arg0 ;
-(id)init;
-(id)initWithPriorities:(id)arg0 ;
-(id)nextPriorityFromPriorities:(id)arg0 prioritiesToReAdd:(id)arg1 ;
-(id)objectForKeyedSubscript:(id)arg0 ;
-(void)appendRemainingPriorities:(id)arg0 prioritiesToReAdd:(id)arg1 ;
-(void)insertPriorities:(id)arg0 prioritiesToReAdd:(id)arg1 ;


@end


#endif