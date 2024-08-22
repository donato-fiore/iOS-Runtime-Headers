// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WCUSERINFO_H
#define WCUSERINFO_H

@class NSDictionary, NSData;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface WCUserInfo : NSObject <NSSecureCoding>



@property (copy, nonatomic) NSDictionary *clientUserInfo; // ivar: _clientUserInfo
@property (copy, nonatomic) NSDictionary *userInfo; // ivar: _userInfo
@property (copy) NSData *userInfoData; // ivar: _userInfoData


+(BOOL)supportsSecureCoding;
-(BOOL)updateUserInfo:(id)arg0 error:(*id)arg1 ;
-(BOOL)updateUserInfoData:(id)arg0 error:(*id)arg1 ;
-(BOOL)verifyUserInfo;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif