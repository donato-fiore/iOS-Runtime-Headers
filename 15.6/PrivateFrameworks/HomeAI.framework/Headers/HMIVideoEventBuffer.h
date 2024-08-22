// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMIVIDEOEVENTBUFFER_H
#define HMIVIDEOEVENTBUFFER_H

@class HMFObject, NSMutableArray;



@interface HMIVideoEventBuffer : HMFObject {
    NSMutableArray *_data;
    os_unfair_lock_s _lock;
    NSInteger _maxCapacity;
}


@property (readonly) NSUInteger count;


-(id)description;
-(id)extractObjectsInTimeRange:(struct ? )arg0 ;
-(id)initWithMaxCapacity:(NSInteger)arg0 ;
-(id)neighborsOfObject:(id)arg0 ;
-(id)objectsInTimeRange:(struct ? )arg0 includeEnd:(BOOL)arg1 ;
-(void)addObject:(id)arg0 ;
-(void)removeAllObjects;


@end


#endif