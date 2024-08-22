// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CLFINDMYACCESSORYACCELEROMETERORIENTATIONMODECONFIGURATION_H
#define CLFINDMYACCESSORYACCELEROMETERORIENTATIONMODECONFIGURATION_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CLFindMyAccessoryAccelerometerOrientationModeConfiguration : NSObject <NSSecureCoding>



@property (nonatomic) unsigned short sleepDuration_ms; // ivar: _sleepDuration_ms
@property (nonatomic) unsigned int threshold; // ivar: _threshold


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithThreshold:(unsigned int)arg0 sleepDuration:(unsigned short)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif