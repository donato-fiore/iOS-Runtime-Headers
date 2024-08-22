// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ARCAMERAPARAMETERS_H
#define ARCAMERAPARAMETERS_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface ARCameraParameters : NSObject <NSSecureCoding>



@property (readonly, nonatomic) CGPoint focalLength; // ivar: _focalLength
@property (readonly, nonatomic) CGSize imageResolution; // ivar: _imageResolution
@property (readonly, nonatomic) CGPoint principalPoint; // ivar: _principalPoint


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFocalLength:(struct CGPoint )arg0 imageResolution:(struct CGSize )arg1 principalPoint:(struct CGPoint )arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif