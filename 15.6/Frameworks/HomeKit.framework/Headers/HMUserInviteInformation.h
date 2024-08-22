// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMUSERINVITEINFORMATION_H
#define HMUSERINVITEINFORMATION_H

@class NSArray, NSString;
@protocol HMFObject, NSCopying, NSMutableCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface HMUserInviteInformation : NSObject <HMFObject, NSCopying, NSMutableCopying, NSSecureCoding>



@property (readonly, getter=isAdministrator) BOOL administrator; // ivar: _administrator
@property (readonly, getter=isAnnounceAccessAllowed) BOOL announceAccessAllowed; // ivar: _announceAccessAllowed
@property (readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property (readonly, nonatomic) NSUInteger camerasAccessLevel; // ivar: _camerasAccessLevel
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, getter=isRemoteAccessAllowed) BOOL remoteAccessAllowed; // ivar: _remoteAccessAllowed
@property (readonly, copy) NSString *shortDescription;
@property (readonly) Class superclass;
@property (copy) NSString *userID; // ivar: _userID


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithUser:(id)arg0 administrator:(BOOL)arg1 remoteAccess:(BOOL)arg2 ;
-(id)initWithUser:(id)arg0 administrator:(BOOL)arg1 remoteAccess:(BOOL)arg2 announceAccess:(BOOL)arg3 camerasAccessLevel:(NSUInteger)arg4 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif