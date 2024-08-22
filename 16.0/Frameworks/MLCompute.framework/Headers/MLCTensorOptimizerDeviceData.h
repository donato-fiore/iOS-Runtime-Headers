// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MLCTENSOROPTIMIZERDEVICEDATA_H
#define MLCTENSOROPTIMIZERDEVICEDATA_H

@class NSArray, NSData, NSMutableArray;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface MLCTensorOptimizerDeviceData : NSObject <NSCopying>



@property (retain, nonatomic) NSArray *centerWeightVectors; // ivar: _centerWeightVectors
@property (retain, nonatomic) id *gpuOps; // ivar: _gpuOps
@property (retain, nonatomic) NSData *gradientBNNSDesc; // ivar: _gradientBNNSDesc
@property (retain, nonatomic) NSMutableArray *momentumData; // ivar: _momentumData
@property (retain, nonatomic) NSMutableArray *momentumDataBytes; // ivar: _momentumDataBytes
@property (retain, nonatomic) NSArray *momentumVectors; // ivar: _momentumVectors
@property (retain, nonatomic) NSData *sourceBNNSDesc; // ivar: _sourceBNNSDesc
@property (retain, nonatomic) NSArray *velocityVectors; // ivar: _velocityVectors


+(id)optimizerDeviceData;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;


@end


#endif