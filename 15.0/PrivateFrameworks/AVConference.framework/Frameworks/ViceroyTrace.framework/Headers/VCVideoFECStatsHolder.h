// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VCVIDEOFECSTATSHOLDER_H
#define VCVIDEOFECSTATSHOLDER_H


#import <Foundation/Foundation.h>


@interface VCVideoFECStatsHolder : NSObject

@property unsigned int completeFECFrameCount; // ivar: _completeFECFrameCount
@property unsigned int failedFECFrameCount; // ivar: _failedFECFrameCount
@property NSUInteger totalFECDataByteCount; // ivar: _totalFECDataByteCount
@property unsigned int totalFECFrameCount; // ivar: _totalFECFrameCount
@property NSUInteger totalFECParityByteCount; // ivar: _totalFECParityByteCount
@property unsigned int unfixableFECFrameCount; // ivar: _unfixableFECFrameCount


-(void)merge:(id)arg0 ;


@end


#endif