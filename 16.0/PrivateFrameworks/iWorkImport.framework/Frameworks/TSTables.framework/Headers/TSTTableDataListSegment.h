// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSTTABLEDATALISTSEGMENT_H
#define TSTTABLEDATALISTSEGMENT_H

@class TSPObject, NSMutableIndexSet;
@protocol TSPCopying;



@interface TSTTableDataListSegment : TSPObject <TSPCopying>

 {
    unordered_map<unsigned int, TSTTableDataObject *, std::hash<unsigned int>, std::equal_to<unsigned int>, std::allocator<std::pair<const unsigned int, TSTTableDataObject *>>> _data;
}


@property (readonly, nonatomic) NSUInteger count;
@property (readonly, nonatomic) NSUInteger estimatedByteSize; // ivar: _estimatedByteSize
@property (nonatomic) _NSRange keyRange; // ivar: _keyRange
@property (retain, nonatomic) NSMutableIndexSet *keys; // ivar: _keys
@property (readonly, nonatomic) int listType; // ivar: _listType
@property (readonly, nonatomic) BOOL shouldSplit;


-(id)copyWithContext:(id)arg0 ;
-(id)initWithType:(int)arg0 keyRange:(struct _NSRange )arg1 context:(id)arg2 ;
-(id)objectAtIndexedSubscript:(unsigned int)arg0 ;
-(id)packageLocator;
-(id)split;
-(void)encodeObjectsToDataListArchive:(*void)arg0 archiver:(id)arg1 ;
-(void)enumerateObjectsWithBlock:(id)arg0 ;
-(void)loadFromUnarchiver:(id)arg0 ;
-(void)loadObjectsFromDataListArchive:(*void)arg0 unarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg0 ;
-(void)setObject:(id)arg0 atIndexedSubscript:(unsigned int)arg1 ;


@end


#endif