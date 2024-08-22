// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CTSTEWIEDEVICEORIENTATIONDATA_H
#define CTSTEWIEDEVICEORIENTATIONDATA_H

@class NSDate;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CTStewieDeviceOrientationData : NSObject <NSCopying, NSSecureCoding>



@property (nonatomic) BOOL isDeviceStationary; // ivar: _isDeviceStationary
@property (nonatomic) BOOL targetLocked; // ivar: _targetLocked
@property (retain, nonatomic) NSDate *timestamp; // ivar: _timestamp
@property (nonatomic) NSInteger x; // ivar: _x


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif