// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CMATTITUDE_H
#define CMATTITUDE_H

@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CMAttitude : NSObject <NSCopying, NSSecureCoding>

 {
    id *_internal;
}


@property (readonly, nonatomic) CGFloat pitch;
@property (readonly, nonatomic) ? quaternion;
@property (readonly, nonatomic) CGFloat roll;
@property (readonly, nonatomic) ? rotationMatrix;
@property (readonly, nonatomic) CGFloat yaw;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithQuaternion:(struct ? )arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)multiplyByInverseOfAttitude:(id)arg0 ;


@end


#endif