// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSPMUTABLELARGEUUIDARRAY_H
#define TSPMUTABLELARGEUUIDARRAY_H



#import "TSPAbstractMutableLargeArray.h"

@interface TSPMutableLargeUUIDArray : TSPAbstractMutableLargeArray



+(Class)arraySegmentClass;
-(struct UUIDData<TSP::UUIDData> )UUIDAtIndex:(NSUInteger)arg0 ;
-(void)addUUID:(struct UUIDData<TSP::UUIDData> )arg0 ;
-(void)insertUUID:(struct UUIDData<TSP::UUIDData> )arg0 atIndex:(NSUInteger)arg1 ;
-(void)loadFromMessage:(*void)arg0 unarchiver:(id)arg1 ;
-(void)loadFromUnarchiver:(id)arg0 ;
-(void)replaceUUIDAtIndex:(NSUInteger)arg0 withUUID:(struct UUIDData<TSP::UUIDData> )arg1 ;
-(void)saveToArchiver:(id)arg0 ;
-(void)saveToMessage:(*void)arg0 archiver:(id)arg1 ;


@end


#endif