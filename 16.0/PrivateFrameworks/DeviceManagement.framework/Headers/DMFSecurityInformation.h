// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DMFSECURITYINFORMATION_H
#define DMFSECURITYINFORMATION_H

@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface DMFSecurityInformation : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) BOOL passcodeIsCompliantWithGlobalRestrictions; // ivar: _passcodeIsCompliantWithGlobalRestrictions
@property (readonly, nonatomic) BOOL passcodeIsCompliantWithProfileRestrictions; // ivar: _passcodeIsCompliantWithProfileRestrictions
@property (readonly, nonatomic) BOOL passcodeIsSet; // ivar: _passcodeIsSet
@property (readonly, nonatomic) NSUInteger passcodeLockGracePeriod; // ivar: _passcodeLockGracePeriod
@property (readonly, nonatomic) NSUInteger passcodeLockGracePeriodEnforced; // ivar: _passcodeLockGracePeriodEnforced
@property (readonly, nonatomic) BOOL supportsBlockLevelEncryption; // ivar: _supportsBlockLevelEncryption
@property (readonly, nonatomic) BOOL supportsFileLevelEncryption; // ivar: _supportsFileLevelEncryption


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSupportsBlockLevelEncryption:(BOOL)arg0 supportsFileLevelEncryption:(BOOL)arg1 passcodeIsSet:(BOOL)arg2 passcodeIsCompliantWithGlobalRestrictions:(BOOL)arg3 passcodeIsCompliantWithProfileRestrictions:(BOOL)arg4 passcodeLockGracePeriodEnforced:(NSUInteger)arg5 passcodeLockGracePeriod:(NSUInteger)arg6 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif