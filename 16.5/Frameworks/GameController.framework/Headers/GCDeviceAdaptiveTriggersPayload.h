// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GCDEVICEADAPTIVETRIGGERSPAYLOAD_H
#define GCDEVICEADAPTIVETRIGGERSPAYLOAD_H

@class NSArray, NSNumber;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface GCDeviceAdaptiveTriggersPayload : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSArray *amplitudes; // ivar: _amplitudes
@property (readonly, nonatomic) NSNumber *endPosition; // ivar: _endPosition
@property (readonly, nonatomic) NSNumber *frequency; // ivar: _frequency
@property (readonly, nonatomic) NSNumber *mode; // ivar: _mode
@property (readonly, nonatomic) NSNumber *startPosition; // ivar: _startPosition
@property (readonly, nonatomic) NSArray *strengths; // ivar: _strengths


+(BOOL)supportsSecureCoding;
-(BOOL)hasEqualAmplitudes:(id)arg0 ;
-(BOOL)hasEqualStrengths:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)description;
-(id)initFeedbackWithResistiveStrengths:(struct ? )arg0 ;
-(id)initFeedbackWithStartPosition:(float)arg0 resistiveStrength:(float)arg1 ;
-(id)initOff;
-(id)initSlopeFeedbackWithStartPosition:(float)arg0 endPosition:(float)arg1 startStrength:(float)arg2 endStrength:(float)arg3 ;
-(id)initVibrationWithAmplitudes:(struct ? )arg0 frequency:(float)arg1 ;
-(id)initVibrationWithStartPosition:(float)arg0 amplitude:(float)arg1 frequency:(float)arg2 ;
-(id)initWeaponWithStartPosition:(float)arg0 endPosition:(float)arg1 resistiveStrength:(float)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(id)redactedDescription;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif