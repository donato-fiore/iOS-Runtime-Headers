// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CVACMDEVICEMOTIONDATA_H
#define CVACMDEVICEMOTIONDATA_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "CVACMMotionTypeDeviceMotionData.h"

@interface CVACMDeviceMotionData : NSObject <NSSecureCoding>



@property (retain, nonatomic) CVACMMotionTypeDeviceMotionData *deviceMotion; // ivar: _deviceMotion
@property (nonatomic) NSUInteger syncTimestamp; // ivar: _syncTimestamp
@property (nonatomic) CGFloat timestamp; // ivar: _timestamp


+(BOOL)supportsSecureCoding;
-(id)dictionary;
-(id)init;
-(id)initWithCMDeviceMotion:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif