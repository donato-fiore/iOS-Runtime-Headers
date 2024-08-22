// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NUWRAPPEDBUFFERSTORAGE_H
#define NUWRAPPEDBUFFERSTORAGE_H

@class NUAbstractBufferStorage, NSString;
@protocol NUBuffer, NUMutableBuffer;


#import "NUPixelFormat.h"

@interface NUWrappedBufferStorage : NUAbstractBufferStorage <NUBuffer, NUMutableBuffer>

 {
    NSInteger _length;
}


@property (readonly, nonatomic) *void bytes; // ivar: _bytes
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NUPixelFormat *format;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) *void mutableBytes;
@property (readonly, nonatomic) NSInteger rowBytes; // ivar: _rowBytes
@property (readonly, nonatomic) ? size;
@property (readonly) Class superclass;


-(NSInteger)readBufferInRegion:(id)arg0 block:(id)arg1 ;
-(NSInteger)writeBufferInRegion:(id)arg0 block:(id)arg1 ;
-(id)initWithSize:(struct ? )arg0 format:(id)arg1 bytes:(*void)arg2 rowBytes:(NSInteger)arg3 length:(NSInteger)arg4 ;
-(id)newRenderDestination;


@end


#endif