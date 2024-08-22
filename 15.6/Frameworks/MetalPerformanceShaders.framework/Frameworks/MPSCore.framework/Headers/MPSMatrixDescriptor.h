// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MPSMATRIXDESCRIPTOR_H
#define MPSMATRIXDESCRIPTOR_H


#import <Foundation/Foundation.h>


@interface MPSMatrixDescriptor : NSObject

@property (nonatomic) NSUInteger columns; // ivar: _columns
@property (nonatomic) unsigned int dataType; // ivar: _dataType
@property (readonly, nonatomic) NSUInteger matrices; // ivar: _matrices
@property (readonly, nonatomic) NSUInteger matrixBytes; // ivar: _matrixBytes
@property (nonatomic) NSUInteger rowBytes; // ivar: _rowBytes
@property (nonatomic) NSUInteger rows; // ivar: _rows


+(NSUInteger)rowBytesForColumns:(NSUInteger)arg0 dataType:(unsigned int)arg1 ;
+(NSUInteger)rowBytesFromColumns:(NSUInteger)arg0 dataType:(unsigned int)arg1 ;
+(id)matrixDescriptorWithDimensions:(NSUInteger)arg0 columns:(NSUInteger)arg1 rowBytes:(NSUInteger)arg2 dataType:(unsigned int)arg3 ;
+(id)matrixDescriptorWithRows:(NSUInteger)arg0 columns:(NSUInteger)arg1 matrices:(NSUInteger)arg2 rowBytes:(NSUInteger)arg3 matrixBytes:(NSUInteger)arg4 dataType:(unsigned int)arg5 ;
+(id)matrixDescriptorWithRows:(NSUInteger)arg0 columns:(NSUInteger)arg1 rowBytes:(NSUInteger)arg2 dataType:(unsigned int)arg3 ;
-(id)init;


@end


#endif