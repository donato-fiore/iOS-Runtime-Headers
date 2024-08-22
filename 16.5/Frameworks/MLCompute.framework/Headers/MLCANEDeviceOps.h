// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MLCANEDEVICEOPS_H
#define MLCANEDEVICEOPS_H

@class NSMutableArray, NSString, _ANERequest, NSArray;


#import "MLCDeviceOps.h"
#import "_MLCANEModel.h"
#import "_MLCANEPlistBuilder.h"

@interface MLCANEDeviceOps : MLCDeviceOps

@property (readonly, nonatomic) NSMutableArray *constantTensors; // ivar: _constantTensors
@property (readonly, nonatomic) int deviceOpType; // ivar: _deviceOpType
@property (retain, nonatomic) _MLCANEModel *model; // ivar: _model
@property (readonly, retain, nonatomic) id *params; // ivar: _params
@property (retain, nonatomic) _MLCANEPlistBuilder *plistBuilder; // ivar: _plistBuilder
@property (nonatomic) NSUInteger procedureIndex; // ivar: _procedureIndex
@property (retain, nonatomic) NSString *procedureName; // ivar: _procedureName
@property (retain, nonatomic) _ANERequest *request; // ivar: _request
@property (retain, nonatomic) NSArray *units; // ivar: _units


+(id)deviceOpsWithType:(int)arg0 params:(id)arg1 ;
-(id)initWithType:(int)arg0 params:(id)arg1 ;


@end


#endif