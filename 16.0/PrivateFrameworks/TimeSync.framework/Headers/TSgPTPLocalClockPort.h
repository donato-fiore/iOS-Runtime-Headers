// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSGPTPLOCALCLOCKPORT_H
#define TSGPTPLOCALCLOCKPORT_H



#import "TSgPTPPort.h"
#import "TSXgPTPLocalClockPort.h"

@interface TSgPTPLocalClockPort : TSgPTPPort {
    TSXgPTPLocalClockPort *_implXPC;
}


@property (readonly, nonatomic) BOOL hasLocalFrequencyStabilityLower;
@property (readonly, nonatomic) BOOL hasLocalFrequencyStabilityUpper;
@property (readonly, nonatomic) BOOL hasLocalFrequencyToleranceLower;
@property (readonly, nonatomic) BOOL hasLocalFrequencyToleranceUpper;
@property (readonly, nonatomic) int localFrequencyStabilityLower;
@property (readonly, nonatomic) int localFrequencyStabilityUpper;
@property (readonly, nonatomic) int localFrequencyToleranceLower;
@property (readonly, nonatomic) int localFrequencyToleranceUpper;
@property (readonly, nonatomic) unsigned char localOscillatorType;


+(id)diagnosticDescriptionForInfo:(id)arg0 withIndent:(id)arg1 ;
+(id)keyPathsForValuesAffectingHasLocalFrequencyStabilityLower;
+(id)keyPathsForValuesAffectingHasLocalFrequencyStabilityUpper;
+(id)keyPathsForValuesAffectingHasLocalFrequencyToleranceLower;
+(id)keyPathsForValuesAffectingHasLocalFrequencyToleranceUpper;
+(id)keyPathsForValuesAffectingLocalFrequencyStabilityLower;
+(id)keyPathsForValuesAffectingLocalFrequencyStabilityUpper;
+(id)keyPathsForValuesAffectingLocalFrequencyToleranceLower;
+(id)keyPathsForValuesAffectingLocalFrequencyToleranceUpper;
+(id)keyPathsForValuesAffectingLocalOscillatorType;
-(id)initWithImplXPC:(id)arg0 ;


@end


#endif