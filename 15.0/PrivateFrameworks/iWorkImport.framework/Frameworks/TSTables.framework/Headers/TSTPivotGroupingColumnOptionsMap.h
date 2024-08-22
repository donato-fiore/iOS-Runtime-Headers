// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSTPIVOTGROUPINGCOLUMNOPTIONSMAP_H
#define TSTPIVOTGROUPINGCOLUMNOPTIONSMAP_H

@class TSPObject;
@protocol NSCopying;



@interface TSTPivotGroupingColumnOptionsMap : TSPObject <NSCopying>

 {
    map<TSKUIDStruct, TSTPivotGroupingColumnOptions *, std::less<TSKUIDStruct>, std::allocator<std::pair<const TSKUIDStruct, TSTPivotGroupingColumnOptions *>>> _optionsForUidMap;
}




-(BOOL)hasContent;
-(NSUInteger)count;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)pivotOptionsForUID:(struct TSKUIDStruct )arg0 ;
-(id)prunedCopyWithUids:(*void)arg0 ;
-(struct TSKUIDStructVectorTemplate<TSKUIDStruct> )keys;
-(void)clear;
-(void)enumerateOptionsUsingBlock:(id)arg0 ;
-(void)loadFromUnarchiver:(id)arg0 ;
-(void)saveToArchiver:(id)arg0 ;
-(void)setPivotOptions:(id)arg0 forUid:(struct TSKUIDStruct )arg1 ;


@end


#endif