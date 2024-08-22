// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MLLAYEREXECUTIONSCHEDULE_H
#define MLLAYEREXECUTIONSCHEDULE_H

@class NSString;

#import <Foundation/Foundation.h>


@interface MLLayerExecutionSchedule : NSObject

@property (copy, nonatomic) NSString *deviceName; // ivar: _deviceName
@property (nonatomic) NSInteger layerError; // ivar: _layerError
@property (copy, nonatomic) NSString *layerName; // ivar: _layerName


-(id)initWithLayerError:(NSInteger)arg0 ;
-(id)initWithScheduledDevice:(id)arg0 layerName:(id)arg1 layerError:(NSInteger)arg2 ;


@end


#endif