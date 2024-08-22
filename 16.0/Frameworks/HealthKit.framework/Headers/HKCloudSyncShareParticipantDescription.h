// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKCLOUDSYNCSHAREPARTICIPANTDESCRIPTION_H
#define HKCLOUDSYNCSHAREPARTICIPANTDESCRIPTION_H

@class NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface HKCloudSyncShareParticipantDescription : NSObject <NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) NSString *acceptanceStatus; // ivar: _acceptanceStatus
@property (readonly, copy, nonatomic) NSString *identity; // ivar: _identity
@property (readonly, copy, nonatomic) NSString *permission; // ivar: _permission
@property (readonly, copy, nonatomic) NSString *role; // ivar: _role


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentity:(id)arg0 role:(id)arg1 acceptanceStatus:(id)arg2 permission:(id)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif