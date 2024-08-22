// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSGPTPLOCALCLOCKPORT_H
#define TSGPTPLOCALCLOCKPORT_H



#import "TSgPTPPort.h"

@interface TSgPTPLocalClockPort : TSgPTPPort

@property (nonatomic) BOOL hasLocalFrequencyStabilityLower; // ivar: _hasLocalFrequencyStabilityLower
@property (nonatomic) BOOL hasLocalFrequencyStabilityUpper; // ivar: _hasLocalFrequencyStabilityUpper
@property (nonatomic) BOOL hasLocalFrequencyToleranceLower; // ivar: _hasLocalFrequencyToleranceLower
@property (nonatomic) BOOL hasLocalFrequencyToleranceUpper; // ivar: _hasLocalFrequencyToleranceUpper
@property (nonatomic) int localFrequencyStabilityLower; // ivar: _localFrequencyStabilityLower
@property (nonatomic) int localFrequencyStabilityUpper; // ivar: _localFrequencyStabilityUpper
@property (nonatomic) int localFrequencyToleranceLower; // ivar: _localFrequencyToleranceLower
@property (nonatomic) int localFrequencyToleranceUpper; // ivar: _localFrequencyToleranceUpper
@property (nonatomic) unsigned char localOscillatorType; // ivar: _localOscillatorType


+(id)diagnosticDescriptionForService:(id)arg0 withIndent:(id)arg1 ;
+(id)diagnosticInfoForService:(id)arg0 ;
+(id)iokitMatchingDictionaryForClockIdentifier:(NSUInteger)arg0 ;
-(BOOL)_commonInitWithService:(id)arg0 ;
-(id)initWithMatchingDictionary:(id)arg0 ;
-(id)initWithService:(id)arg0 ;
-(int)portType;


@end


#endif