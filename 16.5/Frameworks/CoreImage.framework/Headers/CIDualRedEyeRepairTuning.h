// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CIDUALREDEYEREPAIRTUNING_H
#define CIDUALREDEYEREPAIRTUNING_H

@class NSDictionary;

#import <Foundation/Foundation.h>


@interface CIDualRedEyeRepairTuning : NSObject

@property (retain, nonatomic) NSDictionary *repairTuning; // ivar: repairTuning
@property (retain, nonatomic) NSDictionary *sessionTuning; // ivar: sessionTuning


+(id)defaultRepairParameters;
+(id)defaultSessionParameters;
+(id)repairParametersForTuning:(NSUInteger)arg0 ;
+(id)sessionParametersForTuning:(NSUInteger)arg0 ;
-(NSUInteger)tuningFromCameraModel:(id)arg0 portType:(id)arg1 ;
-(id)initWithTuning:(NSUInteger)arg0 ;
-(void)dealloc;
-(void)setTuningParametersByPortType:(id)arg0 withCameraMetadata:(id)arg1 ;
-(void)updateWithCaptureSetup:(id)arg0 portType:(id)arg1 ;


@end


#endif