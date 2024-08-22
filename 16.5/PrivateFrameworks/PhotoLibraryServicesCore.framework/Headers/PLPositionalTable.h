// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLPOSITIONALTABLE_H
#define PLPOSITIONALTABLE_H

@class NSString;

#import <Foundation/Foundation.h>


@interface PLPositionalTable : NSObject {
    os_unfair_lock_s _expansionLock;
}


@property (nonatomic) int descriptor; // ivar: _descriptor
@property (nonatomic) NSInteger entryCapacity; // ivar: _entryCapacity
@property (nonatomic) NSUInteger entryLength; // ivar: _entryLength
@property (readonly, nonatomic) NSInteger fileLength;
@property (nonatomic) BOOL flushAfterWrite; // ivar: _flushAfterWrite
@property (nonatomic) BOOL isReadOnly; // ivar: _isReadOnly
@property (retain, nonatomic) NSString *path; // ivar: _path
@property (readonly, nonatomic) *tagPLPositionalTableMemoryPool pool; // ivar: _pool
@property (readonly, nonatomic, getter=isReadOnly) BOOL readOnly; // ivar: _readOnly


-(BOOL)_increaseEntryCapacityIfNeededToStoreIndex:(NSInteger)arg0 ;
-(BOOL)deleteEntryAtIndex:(NSUInteger)arg0 ;
-(BOOL)isEmptyAtIndex:(NSUInteger)arg0 ;
-(BOOL)readDataAtIndex:(NSUInteger)arg0 intoPoolNode:(struct tagPLPositionalTableMemoryPoolNode *)arg1 bytesRead:(*NSUInteger)arg2 ;
-(BOOL)writeEntryData:(id)arg0 toIndex:(NSUInteger)arg1 ;
-(Class)entriesClass;
-(id)fileStatistics;
-(id)initWithPath:(id)arg0 readOnly:(BOOL)arg1 entryLength:(NSUInteger)arg2 ;
-(id)readEntriesAtIndexes:(id)arg0 ;
-(void)dealloc;
-(void)flush;
-(void)touchEntriesInRange:(struct _NSRange )arg0 ;


@end


#endif