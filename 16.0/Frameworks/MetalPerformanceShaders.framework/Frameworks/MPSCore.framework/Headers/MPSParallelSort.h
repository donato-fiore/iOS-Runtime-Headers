// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MPSPARALLELSORT_H
#define MPSPARALLELSORT_H



#import "MPSKernel.h"
#import "MPSParallelExclusiveScan.h"

@interface MPSParallelSort : MPSKernel {
    NSUInteger dataTypeSizeInBytes;
    unsigned int _sourceDataType;
    unsigned int _destinationDataType;
    int _sortOp;
    MPSParallelExclusiveScan *_exclusiveScanKernel;
}


@property (readonly, nonatomic) unsigned int keyPairDataType; // ivar: _keyPairDataType
@property (readonly, nonatomic) unsigned int valuePairDataType; // ivar: _valuePairDataType


+(struct MPSLibraryInfo *)libraryInfo:(*void)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 device:(id)arg1 ;
-(id)initPrivateWithDevice:(id)arg0 ;
-(id)initWithCoder:(id)arg0 device:(id)arg1 ;
-(id)initWithDevice:(id)arg0 ;
-(id)initWithDevice:(id)arg0 keyPairDataType:(unsigned int)arg1 valuePairDataType:(unsigned int)arg2 ;
-(id)initWithDevice:(id)arg0 keyPairDataType:(unsigned int)arg1 valuePairDataType:(unsigned int)arg2 sortOp:(int)arg3 ;
-(void)dealloc;
-(void)encodeToCommandBuffer:(id)arg0 sourceBuffer:(id)arg1 sourceOffset:(NSUInteger)arg2 destinationBuffer:(id)arg3 destinationOffset:(NSUInteger)arg4 numEntries:(NSUInteger)arg5 ;
-(void)encodeToCommandBuffer:(id)arg0 sourceKeyBuffer:(id)arg1 sourceKeyOffset:(NSUInteger)arg2 sourceValueBuffer:(id)arg3 sourceValueOffset:(NSUInteger)arg4 destinationKeyBuffer:(id)arg5 destinationKeyOffset:(NSUInteger)arg6 destinationValueBuffer:(id)arg7 destinationValueOffset:(NSUInteger)arg8 numEntries:(NSUInteger)arg9 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif