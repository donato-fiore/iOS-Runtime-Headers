// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSTTABLETILEROWINFO_H
#define TSTTABLETILEROWINFO_H

@protocol TSTCompatibilityVersionProviding;

#import <Foundation/Foundation.h>


@interface TSTTableTileRowInfo : NSObject <TSTCompatibilityVersionProviding>

 {
    TSTTableTileRowBuffer _currentData;
    TSTTableTileRowBuffer _preBNCData;
    unsigned short _maxColumnIndexPrivate;
    BOOL _maxColumnIndexIsValidPrivate;
    unsigned char _storageVersion;
    os_unfair_lock_s _unfairLock;
}


@property (readonly, nonatomic) NSUInteger archivingCompatibilityVersion;
@property (readonly, nonatomic) BOOL bncStorageBufferExists;
@property (readonly, nonatomic) NSUInteger cellCount; // ivar: _cellCount
@property (readonly, nonatomic) unsigned short maxColumnIndex;
@property (nonatomic) unsigned int tileRowIndex; // ivar: _tileRowIndex
@property (readonly, nonatomic) BOOL usesWideOffsets;


+(id)rowInfoFromArchive:(*void)arg0 ;
+(id)rowInfoWithTileRowIndex:(unsigned int)arg0 wideOffsets:(BOOL)arg1 ;
-(BOOL)searchCellStorageRefAtColumnIndex:(unsigned short)arg0 searchMask:(NSUInteger)arg1 ;
-(BOOL)validateWithResult:(*id)arg0 ;
-(NSInteger)setCell:(id)arg0 atIndex:(unsigned short)arg1 formatKeys:(struct ? *)arg2 ;
-(NSUInteger)removeColumnsAtIndex:(unsigned short)arg0 count:(unsigned int)arg1 ;
-(id)description;
-(id)initFromArchive:(*void)arg0 ;
-(id)initWithTileRowIndex:(unsigned int)arg0 wideOffsets:(BOOL)arg1 ;
-(struct TSTCellStorage *)cellStorageRefAtIndex:(unsigned short)arg0 ;
-(struct TSTCellStorage *)preBNCStorageRefAtIndex:(unsigned short)arg0 ;
-(struct vector<TSTCell *, std::allocator<TSTCell *>> )accumulateCurrentCellsConcurrentlyAtColumns:(*void)arg0 usingCellCreationBlock:(id)arg1 ;
-(unsigned short)_archivedColumnCount;
-(unsigned short)cellIndexAtOrAfterIndex:(unsigned short)arg0 ;
-(unsigned short)cellIndexAtOrBeforeIndex:(unsigned short)arg0 ;
-(void)_insertCell:(id)arg0 atIndex:(unsigned short)arg1 formatKeys:(struct ? *)arg2 ;
-(void)_removeCellAtIndex:(unsigned short)arg0 ;
-(void)_replaceCellAtIndex:(unsigned short)arg0 withCell:(id)arg1 formatKeys:(struct ? *)arg2 ;
-(void)convertToWideOffsets;
-(void)dealloc;
-(void)encodeToArchive:(*void)arg0 archiver:(id)arg1 ;
-(void)enumerateStoragesInColumnRange:(struct _NSRange )arg0 getPreBNC:(BOOL)arg1 withBlock:(id)arg2 ;
-(void)enumerateStoragesInColumnRange:(struct _NSRange )arg0 withBlock:(id)arg1 ;
-(void)insertColumnsAtIndex:(unsigned short)arg0 count:(unsigned int)arg1 ;
-(void)lockForConcurrentAccess;
-(void)moveColumnsFromIndex:(unsigned short)arg0 toIndex:(unsigned short)arg1 count:(unsigned int)arg2 ;
-(void)unlockForConcurrentAccess;
-(void)validate;


@end


#endif