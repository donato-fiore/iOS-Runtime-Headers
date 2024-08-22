// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WBSCONTACTSTOREMANAGER_H
#define WBSCONTACTSTOREMANAGER_H

@class NSMutableDictionary, CNContactStore;

#import <Foundation/Foundation.h>


@interface WBSContactStoreManager : NSObject {
    NSMutableDictionary *_temporaryContacts;
}


@property (readonly, nonatomic) CNContactStore *contactStore; // ivar: _contactStore


+(id)sharedContactStoreManager;
-(BOOL)enumerateContactsWithFetchRequest:(id)arg0 error:(*id)arg1 usingBlock:(id)arg2 ;
-(id)_ios_meContactWithKeysToFetch:(id)arg0 error:(*id)arg1 ;
-(id)contactForHandle:(id)arg0 error:(*id)arg1 ;
-(id)defaultContainerIdentifier;
-(id)init;
-(id)temporaryContactForIdentity:(id)arg0 ;
-(id)unifiedContactWithIdentifier:(id)arg0 keysToFetch:(id)arg1 error:(*id)arg2 ;
-(id)unifiedContactsMatchingPredicate:(id)arg0 keysToFetch:(id)arg1 error:(*id)arg2 ;
-(void)requestAccessForEntityType:(NSInteger)arg0 completionHandler:(id)arg1 ;


@end


#endif