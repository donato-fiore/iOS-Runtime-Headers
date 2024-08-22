// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDCAMERAVIDEOTIER_H
#define HMDCAMERAVIDEOTIER_H

@class HMFObject, NSNumber;
@protocol NSSecureCoding;


#import "HMDVideoResolution.h"

@interface HMDCameraVideoTier : HMFObject <NSSecureCoding>



@property (retain, nonatomic) NSNumber *framerate; // ivar: _framerate
@property (readonly, nonatomic) NSNumber *maxBitRate; // ivar: _maxBitRate
@property (readonly, nonatomic) NSNumber *minBitRate; // ivar: _minBitRate
@property (readonly, nonatomic) NSNumber *rtcpInterval; // ivar: _rtcpInterval
@property (readonly, nonatomic) HMDVideoResolution *videoResolution; // ivar: _videoResolution


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithVideoResolution:(id)arg0 framerate:(id)arg1 minBitRate:(id)arg2 maxBitRate:(id)arg3 rtcpInterval:(id)arg4 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif