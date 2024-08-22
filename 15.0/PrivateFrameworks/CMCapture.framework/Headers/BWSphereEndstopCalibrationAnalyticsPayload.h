// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BWSPHEREENDSTOPCALIBRATIONANALYTICSPAYLOAD_H
#define BWSPHEREENDSTOPCALIBRATIONANALYTICSPAYLOAD_H

@class NSString;
@protocol BWCoreAnalyticsPayload;

#import <Foundation/Foundation.h>


@interface BWSphereEndstopCalibrationAnalyticsPayload : NSObject <BWCoreAnalyticsPayload>



@property (nonatomic) unsigned int calibrationStatus; // ivar: _calibrationStatus
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) int deltaSphereXNegEndstop; // ivar: _deltaSphereXNegEndstop
@property (nonatomic) int deltaSphereXPosEndstop; // ivar: _deltaSphereXPosEndstop
@property (nonatomic) int deltaSphereYNegEndstop; // ivar: _deltaSphereYNegEndstop
@property (nonatomic) int deltaSphereYPosEndstop; // ivar: _deltaSphereYPosEndstop
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger magneticFieldMagnitude; // ivar: _magneticFieldMagnitude
@property (retain, nonatomic) NSString *portType; // ivar: _portType
@property (nonatomic) int sphereXNegEndstop; // ivar: _sphereXNegEndstop
@property (nonatomic) int sphereXPosEndstop; // ivar: _sphereXPosEndstop
@property (nonatomic) int sphereXStroke; // ivar: _sphereXStroke
@property (nonatomic) int sphereYNegEndstop; // ivar: _sphereYNegEndstop
@property (nonatomic) int sphereYPosEndstop; // ivar: _sphereYPosEndstop
@property (nonatomic) int sphereYStroke; // ivar: _sphereYStroke
@property (readonly) Class superclass;


-(id)eventDictionary;
-(id)eventName;
-(id)init;
-(void)dealloc;
-(void)reset;


@end


#endif