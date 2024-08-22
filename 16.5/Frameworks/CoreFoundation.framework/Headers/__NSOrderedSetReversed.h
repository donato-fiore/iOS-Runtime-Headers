// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef __NSORDEREDSETREVERSED_H
#define __NSORDEREDSETREVERSED_H



#import "NSOrderedSet.h"

@interface __NSOrderedSetReversed : NSOrderedSet {
    id *_orderedSet;
    NSUInteger _cnt;
}




-(NSUInteger)count;
-(NSUInteger)indexOfObject:(id)arg0 ;
-(id)initWithOrderedSet:(id)arg0 ;
-(id)objectAtIndex:(NSUInteger)arg0 ;
-(void)dealloc;


@end


#endif