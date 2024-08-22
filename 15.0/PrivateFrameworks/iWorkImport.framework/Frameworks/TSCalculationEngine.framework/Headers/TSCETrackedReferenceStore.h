// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSCETRACKEDREFERENCESTORE_H
#define TSCETRACKEDREFERENCESTORE_H

@class TSPObject, NSLock, TSUSparseArray;



@interface TSCETrackedReferenceStore : TSPObject {
    NSLock *_trackedRefsLock;
    TSUSparseArray *_trackedReferences;
    NSUInteger _nextEmptyTrackedReferencesIndex;
}


@property (nonatomic) TSKUIDStruct ownerUID; // ivar: _ownerUID


+(NSUInteger)indexFromCoord:(struct TSUCellCoord *)arg0 ;
+(struct TSUCellCoord )coordFromIndex:(NSUInteger)arg0 ;
-(id)allTrackedReferences;
-(id)beginTrackingReferenceWithCellRef:(struct TSCECellRef *)arg0 calcEngine:(id)arg1 ;
-(id)beginTrackingReferenceWithSpanningRef:(struct TSCESpanningRangeRef *)arg0 calcEngine:(id)arg1 ;
-(id)initWithContext:(id)arg0 ;
-(id)trackedReferenceAtCoord:(struct TSUCellCoord )arg0 ;
-(void)beginTrackingReference:(id)arg0 calcEngine:(id)arg1 ;
-(void)endTrackingReference:(id)arg0 calcEngine:(id)arg1 ;
-(void)loadFromUnarchiver:(id)arg0 ;
-(void)saveToArchiver:(id)arg0 ;
-(void)willClose;


@end


#endif