// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _CLVIOESTIMATION_H
#define _CLVIOESTIMATION_H

@class NSData;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface _CLVIOEstimation : NSObject <NSCopying, NSSecureCoding>



@property (nonatomic) CGSize cameraImageResolution; // ivar: _cameraImageResolution
@property (nonatomic) ? cameraIntrinsics; // ivar: _cameraIntrinsics
@property (nonatomic) ? cameraPose; // ivar: _cameraPose
@property (copy, nonatomic) NSData *inertialCovariance; // ivar: _inertialCovariance
@property (nonatomic) ? inertialCovarianceInfo; // ivar: _inertialCovarianceInfo
@property (copy, nonatomic) NSData *inertialState; // ivar: _inertialState
@property (nonatomic) ? inertialStateInfo; // ivar: _inertialStateInfo
@property (nonatomic) CGFloat originTimestamp; // ivar: _originTimestamp
@property (nonatomic) CGFloat timestamp; // ivar: _timestamp
@property (nonatomic) int trackingState; // ivar: _trackingState


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)descriptionWithMemberIndent:(id)arg0 endIndent:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif