// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CLFINDMYACCESSORYACCELEROMETERSLOPEMODECONFIGURATION_H
#define CLFINDMYACCESSORYACCELEROMETERSLOPEMODECONFIGURATION_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CLFindMyAccessoryAccelerometerSlopeModeConfiguration : NSObject <NSSecureCoding>



@property (nonatomic) unsigned char sampleCount; // ivar: _sampleCount
@property (nonatomic) unsigned char sampleRate; // ivar: _sampleRate
@property (nonatomic) float threshold; // ivar: _threshold


+(BOOL)supportsSecureCoding;
+(float)maximumThreshold;
+(float)minimumThreshold;
+(unsigned char)maximumSampleCount;
+(unsigned char)minimumSampleCount;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithThreshold:(float)arg0 sampleCount:(unsigned char)arg1 sampleRate:(unsigned char)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif