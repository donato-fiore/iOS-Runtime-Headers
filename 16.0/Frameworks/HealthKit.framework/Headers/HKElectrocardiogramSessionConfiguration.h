// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKELECTROCARDIOGRAMSESSIONCONFIGURATION_H
#define HKELECTROCARDIOGRAMSESSIONCONFIGURATION_H

@class NSUUID;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface HKElectrocardiogramSessionConfiguration : NSObject <NSCopying, NSSecureCoding>



@property (nonatomic) CGFloat maximumDuration; // ivar: _maximumDuration
@property (nonatomic) NSInteger mode; // ivar: _mode
@property (copy, nonatomic) NSUUID *sessionUUID; // ivar: _sessionUUID
@property (nonatomic) BOOL wornOnRightArm; // ivar: _wornOnRightArm


+(BOOL)supportsSecureCoding;
+(id)sessionConfigurationWithUUID:(id)arg0 mode:(NSInteger)arg1 maximumDuration:(CGFloat)arg2 wornOnRightArm:(BOOL)arg3 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif