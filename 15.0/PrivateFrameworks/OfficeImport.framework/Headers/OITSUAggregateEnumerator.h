// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef OITSUAGGREGATEENUMERATOR_H
#define OITSUAGGREGATEENUMERATOR_H

@class NSEnumerator, NSMutableArray;



@interface OITSUAggregateEnumerator : NSEnumerator {
    NSMutableArray *_objects;
}




+(id)aggregateEnumeratorWithObjects:(id)arg0 ;
-(id)init;
-(id)initWithFirstObject:(id)arg0 argumentList:(char *)arg1 ;
-(id)initWithObjects:(id)arg0 ;
-(id)nextObject;
-(void)addObject:(id)arg0 ;
-(void)dealloc;


@end


#endif