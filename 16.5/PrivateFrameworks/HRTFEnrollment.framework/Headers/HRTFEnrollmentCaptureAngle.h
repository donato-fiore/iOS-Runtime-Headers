// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HRTFENROLLMENTCAPTUREANGLE_H
#define HRTFENROLLMENTCAPTUREANGLE_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface HRTFEnrollmentCaptureAngle : NSObject <NSSecureCoding>



@property (readonly) CGFloat angle; // ivar: _angle
@property (readonly) BOOL captured; // ivar: _captured


+(BOOL)supportsSecureCoding;
-(id)initWithAngle:(CGFloat)arg0 captured:(BOOL)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif