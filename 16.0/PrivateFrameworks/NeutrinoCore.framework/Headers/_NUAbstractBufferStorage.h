// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _NUABSTRACTBUFFERSTORAGE_H
#define _NUABSTRACTBUFFERSTORAGE_H

@class NUAbstractStorage;



@interface _NUAbstractBufferStorage : NUAbstractStorage

@property (readonly) *void bytes; // ivar: _bytes
@property (readonly) *void mutableBytes; // ivar: _mutableBytes
@property (readonly) NSInteger rowBytes; // ivar: _rowBytes
@property (readonly) NSInteger sizeInBytes;


-(*void)bytesAtPoint:(struct ? )arg0 ;
-(*void)mutableBytesAtPoint:(struct ? )arg0 ;
-(NSInteger)copyFromStorage:(id)arg0 region:(id)arg1 ;


@end


#endif