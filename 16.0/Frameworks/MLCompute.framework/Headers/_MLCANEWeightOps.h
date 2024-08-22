// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _MLCANEWEIGHTOPS_H
#define _MLCANEWEIGHTOPS_H

@class NSMutableDictionary, NSMutableArray;

#import <Foundation/Foundation.h>


@interface _MLCANEWeightOps : NSObject

@property (readonly, nonatomic) NSMutableDictionary *constantTensorMap; // ivar: _constantTensorMap
@property (readonly, nonatomic) NSMutableDictionary *weightFileIndexMap; // ivar: _weightFileIndexMap
@property (readonly, nonatomic) NSMutableArray *weightFiles; // ivar: _weightFiles
@property (readonly, nonatomic) NSMutableDictionary *weights; // ivar: _weights


+(id)hexStringForData:(id)arg0 ;
-(BOOL)convertAndComputHashWithWeightData:(id)arg0 weightDataType:(int)arg1 hash:(*id)arg2 convertedData:(*id)arg3 ;
-(NSUInteger)addWeightData:(id)arg0 hash:(id)arg1 ;
-(NSUInteger)addWeightData:(id)arg0 weightDataType:(int)arg1 ;
-(id)init;
-(id)queryConstantTensor:(id)arg0 ;
-(void)reset;


@end


#endif