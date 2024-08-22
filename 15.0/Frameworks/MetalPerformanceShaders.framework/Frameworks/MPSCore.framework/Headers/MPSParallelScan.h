// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MPSPARALLELSCAN_H
#define MPSPARALLELSCAN_H



#import "MPSKernel.h"

@interface MPSParallelScan : MPSKernel {
    unsigned int _kernelID;
    int _scanOp;
    BOOL _useSpinLockVersion;
}


@property (readonly, nonatomic) unsigned int destinationDataType; // ivar: _destinationDataType
@property (nonatomic) NSUInteger scanImpl; // ivar: _scanImpl
@property (readonly, nonatomic) unsigned int sourceDataType; // ivar: _sourceDataType


+(struct MPSLibraryInfo *)libraryInfo:(*void)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 device:(id)arg1 ;
-(id)initPrivateWithDevice:(id)arg0 ;
-(id)initWithCoder:(id)arg0 device:(id)arg1 ;
-(id)initWithDevice:(id)arg0 ;
-(id)initWithDevice:(id)arg0 sourceDataType:(unsigned int)arg1 destinationDataType:(unsigned int)arg2 ;
-(id)initWithDevice:(id)arg0 sourceDataType:(unsigned int)arg1 destinationDataType:(unsigned int)arg2 scanOp:(int)arg3 ;
-(void)encodeToCommandBuffer:(id)arg0 sourceBuffer:(id)arg1 sourceOffset:(NSUInteger)arg2 destinationBuffer:(id)arg3 destinationOffset:(NSUInteger)arg4 numEntries:(NSUInteger)arg5 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif