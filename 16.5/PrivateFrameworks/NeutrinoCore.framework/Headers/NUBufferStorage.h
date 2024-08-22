// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NUBUFFERSTORAGE_H
#define NUBUFFERSTORAGE_H

@class NUAbstractBufferStorage, NSString;
@protocol NUBuffer, NUMutableBuffer, NUPurgeableStorage;


#import "NUColorSpace.h"
#import "NUPixelFormat.h"
#import "NURegion.h"

@interface NUBufferStorage : NUAbstractBufferStorage <NUBuffer, NUMutableBuffer, NUPurgeableStorage>

 {
    NSInteger _purgeLevel;
    NSInteger _length;
    BOOL _purgeable;
    uint8_t _useCount;
}


@property (readonly, nonatomic) *void bytes; // ivar: _bytes
@property (retain) NUColorSpace *colorSpace;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NUPixelFormat *format;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) *void mutableBytes;
@property (readonly, nonatomic) NSInteger rowBytes; // ivar: _rowBytes
@property (readonly, nonatomic) ? size;
@property (readonly) NSInteger sizeInBytes;
@property (readonly) Class superclass;
@property (readonly) NURegion *validRegion;


-(*void)_allocateMemory:(NSInteger)arg0 ;
-(BOOL)decrementUseCount;
-(BOOL)isInUse;
-(BOOL)isPurgeable;
-(BOOL)isPurged;
-(BOOL)isShared;
-(BOOL)makeNonPurgeable;
-(NSInteger)purgeLevel;
-(NSInteger)readBufferInRegion:(id)arg0 block:(id)arg1 ;
-(NSInteger)useAsCIImageWithOptions:(id)arg0 renderer:(id)arg1 block:(id)arg2 ;
-(NSInteger)useAsCIRenderDestinationWithRenderer:(id)arg0 block:(id)arg1 ;
-(NSInteger)writeBufferInRegion:(id)arg0 block:(id)arg1 ;
-(id)_purgeStateDescription;
-(id)initWithSize:(struct ? )arg0 format:(id)arg1 ;
-(id)newRenderDestination;
-(int)_fetchPurgeState:(*int)arg0 ;
-(int)_purgeLevelToOSValue:(NSInteger)arg0 ;
-(int)useCount;
-(void)_deallocateMemory;
-(void)adjustPurgeLevel:(NSInteger)arg0 ;
-(void)dealloc;
-(void)incrementUseCount;
-(void)makePurgeable;


@end


#endif