// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSTTABLEHEADERSTORAGE_H
#define TSTTABLEHEADERSTORAGE_H

@class TSPContainedObject, TSPObject, NSIndexSet;
@protocol TSTCompatibilityVersionProviding;



@interface TSTTableHeaderStorage : TSPContainedObject <TSTCompatibilityVersionProviding>

 {
    TSTTableHeaderStorageBucket" _buckets;
    NSUInteger _bucketCount;
}


@property (readonly, nonatomic) NSUInteger archivingCompatibilityVersion;
@property (readonly, nonatomic) NSUInteger count;
@property (readonly, nonatomic) TSPObject *firstBucketForArchiving;
@property (readonly, nonatomic) unsigned int maxIndex;
@property (readonly, nonatomic) unsigned int minIndex;
@property (readonly, nonatomic) NSIndexSet *populatedIndexes;


-(CGFloat)sizeAtIndex:(unsigned int)arg0 ;
-(NSUInteger)cellCountAtIndex:(unsigned int)arg0 ;
-(NSUInteger)defaultStylesAtIndex:(unsigned int)arg0 outCellStyle:(*id)arg1 outTextStyle:(*id)arg2 ;
-(NSUInteger)totalCellCount;
-(id)cellStyleAtIndex:(unsigned int)arg0 ;
-(id)initFromArchive:(*void)arg0 unarchiver:(id)arg1 owner:(id)arg2 ;
-(id)initWithBucket:(id)arg0 owner:(id)arg1 ;
-(id)initWithOwner:(id)arg0 ;
-(id)metadataAtIndex:(unsigned int)arg0 hidingAction:(unsigned char)arg1 defaultSize:(CGFloat)arg2 uuid:(struct TSKUIDStruct )arg3 ;
-(id)textStyleAtIndex:(unsigned int)arg0 ;
-(unsigned char)hidingStateAtIndex:(unsigned int)arg0 ;
-(void)decrementCellCountAtIndex:(unsigned int)arg0 byAmount:(NSUInteger)arg1 ;
-(void)encodeToArchive:(*void)arg0 archiver:(id)arg1 ;
-(void)forceLoadHeaders;
-(void)incrementCellCountAtIndex:(unsigned int)arg0 byAmount:(NSUInteger)arg1 ;
-(void)moveIndexRange:(struct _NSRange )arg0 toIndex:(unsigned int)arg1 ;
-(void)removeIndexesAtIndex:(unsigned int)arg0 count:(unsigned int)arg1 ;
-(void)reset;
-(void)resetAllCellCounts;
-(void)setCellStyle:(id)arg0 atIndex:(unsigned int)arg1 ;
-(void)setHidingState:(unsigned char)arg0 atIndex:(unsigned int)arg1 ;
-(void)setSize:(CGFloat)arg0 atIndex:(unsigned int)arg1 ;
-(void)setTextStyle:(id)arg0 atIndex:(unsigned int)arg1 ;
-(void)shiftIndexesBackAtIndex:(unsigned int)arg0 count:(unsigned int)arg1 ;
-(void)shiftIndexesForwardAtIndex:(unsigned int)arg0 count:(unsigned int)arg1 ;
-(void)swapIndex:(unsigned int)arg0 withIndex:(unsigned int)arg1 ;
-(void)updateHeaderAtIndex:(unsigned int)arg0 fromMetadata:(id)arg1 ;
-(void)updateStylesWithBlock:(id)arg0 ;


@end


#endif