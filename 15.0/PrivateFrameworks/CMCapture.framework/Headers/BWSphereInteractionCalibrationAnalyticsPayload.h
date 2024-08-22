// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BWSPHEREINTERACTIONCALIBRATIONANALYTICSPAYLOAD_H
#define BWSPHEREINTERACTIONCALIBRATIONANALYTICSPAYLOAD_H

@class NSString;
@protocol BWCoreAnalyticsPayload;

#import <Foundation/Foundation.h>


@interface BWSphereInteractionCalibrationAnalyticsPayload : NSObject <BWCoreAnalyticsPayload>



@property (nonatomic) unsigned int calibrationStatus; // ivar: _calibrationStatus
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger magneticFieldMagnitude; // ivar: _magneticFieldMagnitude
@property (retain, nonatomic) NSString *portType; // ivar: _portType
@property (nonatomic) int sphereMacroPosition; // ivar: _sphereMacroPosition
@property (nonatomic) int sphereMacroPositionError; // ivar: _sphereMacroPositionError
@property (nonatomic) int sphereNeutralPosition; // ivar: _sphereNeutralPosition
@property (nonatomic) int sphereNeutralPositionError; // ivar: _sphereNeutralPositionError
@property (readonly) Class superclass;


-(id)eventDictionary;
-(id)eventName;
-(id)init;
-(void)dealloc;
-(void)reset;


@end


#endif