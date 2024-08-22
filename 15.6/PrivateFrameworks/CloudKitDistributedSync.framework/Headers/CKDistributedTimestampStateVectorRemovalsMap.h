// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKDISTRIBUTEDTIMESTAMPSTATEVECTORREMOVALSMAP_H
#define CKDISTRIBUTEDTIMESTAMPSTATEVECTORREMOVALSMAP_H


#import <Foundation/Foundation.h>


@interface CKDistributedTimestampStateVectorRemovalsMap : NSObject {
    RangeDataVector<unsigned long, unsigned long, id, 0U, std::less<id>> rangeMap;
    vector<unsigned int, std::allocator<unsigned int>> workingIndexArray;
}




-(NSUInteger)addObjectsAtIndex:(NSUInteger)arg0 toSet:(id)arg1 ;
-(void)addIndexesInRange:(struct _NSRange )arg0 withObject:(id)arg1 ;
-(void)sort;


@end


#endif