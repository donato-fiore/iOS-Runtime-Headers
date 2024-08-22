// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SGSOCIALPROFILEDETAILS_H
#define SGSOCIALPROFILEDETAILS_H

@class NSString, NSArray;

#import <Foundation/Foundation.h>


@interface SGSocialProfileDetails : NSObject

@property (readonly, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (readonly, nonatomic) NSString *displayName; // ivar: _displayName
@property (readonly, nonatomic) NSString *preferredUniqueIdentifier; // ivar: _preferredUniqueIdentifier
@property (readonly, nonatomic) NSString *service; // ivar: _service
@property (readonly, nonatomic) NSString *teamIdentifier; // ivar: _teamIdentifier
@property (readonly, nonatomic) NSArray *uniqueIdentifiers; // ivar: _uniqueIdentifiers
@property (readonly, nonatomic) NSString *userIdentifier; // ivar: _userIdentifier
@property (readonly, nonatomic) NSString *username; // ivar: _username


-(id)initWithCNSocialProfile:(id)arg0 ;
-(id)initWithSerialized:(id)arg0 ;
-(id)initWithSocialProfile:(id)arg0 ;
-(id)initWithUsername:(id)arg0 userIdentifier:(id)arg1 bundleIdentifier:(id)arg2 displayName:(id)arg3 service:(id)arg4 teamIdentifier:(id)arg5 ;
-(id)serialize;


@end


#endif