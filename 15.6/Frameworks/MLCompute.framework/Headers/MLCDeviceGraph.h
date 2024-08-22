// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MLCDEVICEGRAPH_H
#define MLCDEVICEGRAPH_H

@class NSMutableArray, NSMutableSet;

#import <Foundation/Foundation.h>

#import "MLCDevice.h"

@interface MLCDeviceGraph : NSObject

@property (readonly, retain, nonatomic) MLCDevice *device; // ivar: _device
@property (retain, nonatomic) NSMutableArray *graphLayerList; // ivar: _graphLayerList
@property (weak, nonatomic) NSMutableSet *liveInputs; // ivar: _liveInputs
@property (weak, nonatomic) NSMutableSet *liveOutputs; // ivar: _liveOutputs


+(id)deviceGraphWithLayers:(id)arg0 device:(id)arg1 ;
-(id)initDeviceGraphWithLayers:(id)arg0 device:(id)arg1 ;


@end


#endif