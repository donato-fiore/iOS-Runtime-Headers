// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CNUICOREFAMILYMEMBERSAVEREQUESTFACTORY_H
#define CNUICOREFAMILYMEMBERSAVEREQUESTFACTORY_H


#import <Foundation/Foundation.h>


@interface CNUICoreFamilyMemberSaveRequestFactory : NSObject



+(id)distinctCopiesOfContacts:(id)arg0 ;
+(id)saveRequestToUpdateContactListByAddingContacts:(id)arg0 ;
+(id)saveRequestToUpdateContactListByAddingContacts:(id)arg0 toContainer:(id)arg1 ;
+(id)saveRequestToUpdateContactListByRemovingContacts:(id)arg0 ;
+(id)saveRequestToUpdateContactListByUpdatingContacts:(id)arg0 ;
+(id)saveRequestToUpdateContactWhitelistByRemovingContacts:(id)arg0 ;
+(id)saveRequestToupdateContactWhitelistByAddingContacts:(id)arg0 ;


@end


#endif