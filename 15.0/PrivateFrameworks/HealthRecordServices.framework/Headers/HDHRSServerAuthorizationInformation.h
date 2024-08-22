// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDHRSSERVERAUTHORIZATIONINFORMATION_H
#define HDHRSSERVERAUTHORIZATIONINFORMATION_H

@class NSString, NSSet;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface HDHRSServerAuthorizationInformation : NSObject <NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) NSString *accessToken; // ivar: _accessToken
@property (readonly, copy, nonatomic) NSString *patientID; // ivar: _patientID
@property (readonly, copy, nonatomic) NSSet *scopeSet; // ivar: _scopeSet


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPatientID:(id)arg0 accessToken:(id)arg1 scopeSet:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif