// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ARSESSIONREPLAYSTATS_H
#define ARSESSIONREPLAYSTATS_H

@class NSString;

#import <Foundation/Foundation.h>


@interface ARSessionReplayStats : NSObject

@property (retain, nonatomic) NSString *arkitVersion; // ivar: _arkitVersion
@property (retain, nonatomic) NSString *deviceModel; // ivar: _deviceModel
@property (retain, nonatomic) NSString *fileName; // ivar: _fileName
@property (retain, nonatomic) NSString *osVersion; // ivar: _osVersion
@property (nonatomic) NSUInteger recordedSensorTypes; // ivar: _recordedSensorTypes
@property (nonatomic) int recordingFormat; // ivar: _recordingFormat




@end


#endif