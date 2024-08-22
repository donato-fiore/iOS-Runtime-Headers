// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CBCOLORFILTER_H
#define CBCOLORFILTER_H

@class NSMutableArray, NSString;
@protocol CBHIDServiceProtocol;


#import "CBModule.h"
#import "CBColorSample.h"

@interface CBColorFilter : CBModule <CBHIDServiceProtocol>

 {
    NSMutableArray *_services;
    NSMutableArray *_validServices;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger mode; // ivar: _mode
@property (readonly) CBColorSample *sample; // ivar: _sample
@property (nonatomic) NSUInteger sensorPolicy; // ivar: _sensorPolicy
@property (readonly) Class superclass;


+(CGFloat)calculateCCTForChromaticity:(struct ? )arg0 ;
+(CGFloat)calculateCCTForTristimulus:(struct ? )arg0 ;
+(struct ? )calculateTristimulusForChromaticity:(struct ? )arg0 andLux:(CGFloat)arg1 ;
-(BOOL)ALSServiceConformsToPolicy:(id)arg0 ;
-(BOOL)addHIDServiceClient:(struct __IOHIDServiceClient *)arg0 ;
-(BOOL)forceSampleUpdate;
-(BOOL)handleHIDEvent:(struct __IOHIDEvent *)arg0 from:(struct __IOHIDServiceClient *)arg1 ;
-(BOOL)hasExtFrontSensor;
-(BOOL)hasExtRearSensor;
-(BOOL)removeHIDServiceClient:(struct __IOHIDServiceClient *)arg0 ;
-(NSUInteger)evaluatedFilterMode;
-(id)initWithQueue:(id)arg0 ;
-(id)newColorSampleConditionWeighted;
-(id)newColorSampleLinearWeightedForSamples:(id)arg0 ;
-(id)newColorSampleLinearWeightedForServices:(id)arg0 ;
-(id)newColorSampleLogWeighted;
-(id)newColorSampleLogWeightedForSamples:(id)arg0 ;
-(id)newColorSampleWinnerTakesAll;
-(void)dealloc;
-(void)registerNotificationBlock:(id)arg0 ;
-(void)reportSampleUpdate;
-(void)sendNotificationForKey:(id)arg0 withValue:(id)arg1 ;
-(void)unregisterNotificationBlock;
-(void)updateSample;
-(void)updateValidServices;


@end


#endif