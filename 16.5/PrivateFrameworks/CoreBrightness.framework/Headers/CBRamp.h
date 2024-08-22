// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CBRAMP_H
#define CBRAMP_H

@class NSString, NSDictionary;
@protocol OS_os_log;

#import <Foundation/Foundation.h>


@interface CBRamp : NSObject {
    CGFloat _sMachTimebaseFactor;
    NSObject<OS_os_log> *_logHandle;
}


@property (readonly) CGFloat currentAbsoluteTimestamp; // ivar: _currentAbsoluteTimestamp
@property (readonly) CGFloat currentTimestamp; // ivar: _currentTimestamp
@property (readonly) float currentValue; // ivar: _currentValue
@property (readonly) float frequency; // ivar: _frequency
@property (readonly) NSString *identifier; // ivar: _identifier
@property (readonly) BOOL isFinished; // ivar: _isFinished
@property (readonly) float length; // ivar: _length
@property (readonly) float originalValue; // ivar: _originalValue
@property (readonly) NSDictionary *properties; // ivar: _properties
@property (copy) id *rampProgressCallback; // ivar: _rampProgressCallback
@property (readonly) CGFloat startAbsoluteTime; // ivar: _startAbsoluteTime
@property (readonly) CGFloat startTime; // ivar: _startTime
@property (readonly) float targetValue; // ivar: _targetValue


+(id)className;
+(id)newLinearRampWithWithOrigin:(float)arg0 target:(float)arg1 length:(float)arg2 frequency:(float)arg3 identifier:(id)arg4 ;
-(id)description;
-(id)init;
-(id)initWithOrigin:(float)arg0 target:(float)arg1 length:(float)arg2 frequency:(float)arg3 identifier:(id)arg4 ;
-(id)initWithOrigin:(float)arg0 target:(float)arg1 length:(float)arg2 frequency:(float)arg3 identifier:(id)arg4 properties:(id)arg5 ;
-(void)clockRamp;
-(void)clockRamp:(CGFloat)arg0 ;
-(void)dealloc;
-(void)updateTargetValue:(float)arg0 ;


@end


#endif