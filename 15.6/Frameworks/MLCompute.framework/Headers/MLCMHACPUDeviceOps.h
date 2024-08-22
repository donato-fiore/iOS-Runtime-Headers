// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MLCMHACPUDEVICEOPS_H
#define MLCMHACPUDEVICEOPS_H

@class NSArray, NSData, NSMutableArray;


#import "MLCCPUDeviceOps.h"

@interface MLCMHACPUDeviceOps : MLCCPUDeviceOps

@property (retain, nonatomic) NSArray *attnBiasDeltaData; // ivar: _attnBiasDeltaData
@property (retain, nonatomic) NSData *attnMask; // ivar: _attnMask
@property (retain, nonatomic) NSData *backpropCacheData; // ivar: _backpropCacheData
@property (nonatomic) NSUInteger backpropCacheSize; // ivar: _backpropCacheSize
@property (retain, nonatomic) NSMutableArray *biasMomentumDeltaDataArray; // ivar: _biasMomentumDeltaDataArray
@property (nonatomic) BOOL hasAttnBias; // ivar: _hasAttnBias
@property (nonatomic) BOOL hasAttnMask; // ivar: _hasAttnMask
@property (nonatomic) BOOL hasKeyMask; // ivar: _hasKeyMask
@property (retain, nonatomic) NSData *keyMask; // ivar: _keyMask
@property (nonatomic) NSUInteger keyMaskStride; // ivar: _keyMaskStride
@property (retain, nonatomic) NSMutableArray *weightsMomentumDeltaDataArray; // ivar: _weightsMomentumDeltaDataArray


+(id)deviceOpsWithType:(int)arg0 params:(id)arg1 inDeltaData:(id)arg2 outDeltaData:(id)arg3 weightsDeltaData:(id)arg4 biasDeltaData:(id)arg5 weightsMomentumData:(id)arg6 biasMomentumData:(id)arg7 ;
-(id)initWithType:(int)arg0 params:(id)arg1 inDeltaData:(id)arg2 outDeltaData:(id)arg3 weightsDeltaData:(id)arg4 biasDeltaData:(id)arg5 weightsMomentumData:(id)arg6 biasMomentumData:(id)arg7 betaDeltaData:(id)arg8 gammaDeltaData:(id)arg9 betaMomentumData:(id)arg10 gammaMomentumData:(id)arg11 ;


@end


#endif