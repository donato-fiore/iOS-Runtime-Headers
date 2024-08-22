// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CNSERIALIZEDPOSECONFIGURATION_H
#define CNSERIALIZEDPOSECONFIGURATION_H

@class AVTAvatarPhysicalizedPose, NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CNSerializedPoseConfiguration : NSObject <NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) AVTAvatarPhysicalizedPose *pose; // ivar: _pose
@property (readonly, copy, nonatomic) NSString *poseName; // ivar: _poseName


+(BOOL)supportsSecureCoding;
+(id)log;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPoseConfiguration:(id)arg0 ;
-(id)initWithPoseName:(id)arg0 pose:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif