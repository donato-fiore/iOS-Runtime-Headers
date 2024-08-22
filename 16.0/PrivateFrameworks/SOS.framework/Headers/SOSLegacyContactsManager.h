// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SOSLEGACYCONTACTSMANAGER_H
#define SOSLEGACYCONTACTSMANAGER_H

@class FKFriendsManager;

#import <Foundation/Foundation.h>


@interface SOSLegacyContactsManager : NSObject

@property (readonly, nonatomic) BOOL SOSLegacyContactsExist;
@property (retain, nonatomic) FKFriendsManager *friendsManager; // ivar: _friendsManager


+(BOOL)authorizedToUseContactStore;
+(id)contactStore;
+(void)preloadContactStoreIfNecessary;
-(id)SOSLegacyContacts;
-(id)SOSLegacyContactsDestinations;
-(id)_SOSDestinationsForFriend:(id)arg0 ;
-(id)_SOSFormattedDestinationForFriend:(id)arg0 withDestinationNumber:(id)arg1 ;
-(id)_SOSFriends;
-(id)_contactFromFriend:(id)arg0 ;
-(id)init;
-(void)contactStoreDidChange;
-(void)dealloc;


@end


#endif