// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MLLAYEREXECUTIONSCHEDULE_H
#define MLLAYEREXECUTIONSCHEDULE_H

@class NSString;

#import <Foundation/Foundation.h>


@interface MLLayerExecutionSchedule : NSObject

@property (readonly, nonatomic) NSInteger layerError; // ivar: _layerError
@property (readonly, nonatomic) NSInteger layerIndex; // ivar: _layerIndex
@property (readonly, copy, nonatomic) NSString *layerName; // ivar: _layerName
@property (readonly, copy, nonatomic) NSString *layerTypeName; // ivar: _layerTypeName
@property (readonly, nonatomic) NSUInteger preferredComputeUnit; // ivar: _preferredComputeUnit
@property (readonly, nonatomic) NSUInteger supportedComputeUnits; // ivar: _supportedComputeUnits


-(id)initWithComputeUnits:(NSUInteger)arg0 layerName:(id)arg1 layerError:(NSInteger)arg2 layerTypeName:(id)arg3 supportedComputeUnits:(NSUInteger)arg4 layerIndex:(NSInteger)arg5 ;
-(id)initWithLayerError:(NSInteger)arg0 ;


@end


#endif