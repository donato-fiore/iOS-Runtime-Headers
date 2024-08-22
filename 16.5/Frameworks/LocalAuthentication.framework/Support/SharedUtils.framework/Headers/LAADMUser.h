// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef LAADMUSER_H
#define LAADMUSER_H

@class NSString;

#import <Foundation/Foundation.h>


@interface LAADMUser : NSObject

@property (readonly, nonatomic) NSString *fullName; // ivar: _fullName
@property (readonly, nonatomic) NSString *groupName; // ivar: _groupName
@property (readonly, nonatomic) BOOL isAdministrator; // ivar: _isAdministrator
@property (readonly, nonatomic) BOOL isDirectAdministrator; // ivar: _isDirectAdministrator
@property (readonly, nonatomic) BOOL isGuestUser; // ivar: _isGuestUser
@property (readonly, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) NSInteger userID; // ivar: _userID


+(BOOL)isUserNameUnique:(id)arg0 searchParent:(BOOL)arg1 ;
+(BOOL)shouldDisplayUser:(id)arg0 ;
+(id)allLocalUsers;
+(id)currentUser;
+(id)findUserByID:(NSUInteger)arg0 searchParent:(BOOL)arg1 ;
+(id)findUserByName:(id)arg0 searchParent:(BOOL)arg1 ;
+(id)namesFromUsersWithUIDs:(id)arg0 ;
+(id)namesFromUsersWithUIDs:(id)arg0 presentInGroupWithName:(id)arg1 ;
+(id)rootUser;
-(BOOL)isMemberOfGroupWithName:(id)arg0 ;


@end


#endif