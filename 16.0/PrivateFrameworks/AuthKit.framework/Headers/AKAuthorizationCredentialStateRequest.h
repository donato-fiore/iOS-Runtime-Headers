// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AKAUTHORIZATIONCREDENTIALSTATEREQUEST_H
#define AKAUTHORIZATIONCREDENTIALSTATEREQUEST_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface AKAuthorizationCredentialStateRequest : NSObject <NSSecureCoding>



@property (copy, nonatomic) NSString *altDSID; // ivar: _altDSID
@property (copy, nonatomic) NSString *clientID; // ivar: _clientID
@property (nonatomic) BOOL shouldIgnoreTeamID; // ivar: _shouldIgnoreTeamID
@property (nonatomic) BOOL shouldIgnoreUserID; // ivar: _shouldIgnoreUserID
@property (copy, nonatomic) NSString *teamID; // ivar: _teamID
@property (copy, nonatomic) NSString *userID; // ivar: _userID


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif