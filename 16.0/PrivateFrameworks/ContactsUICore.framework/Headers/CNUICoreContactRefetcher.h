// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNUICORECONTACTREFETCHER_H
#define CNUICORECONTACTREFETCHER_H

@class NSArray;
@protocol CNUICoreContactStoreFacade;

#import <Foundation/Foundation.h>


@interface CNUICoreContactRefetcher : NSObject

@property (readonly, nonatomic) NSObject<CNUICoreContactStoreFacade> *contactStore; // ivar: _contactStore
@property (readonly, nonatomic) NSArray *contactsToRefetch; // ivar: _contactsToRefetch
@property (readonly, nonatomic) NSArray *keysToFetch; // ivar: _keysToFetch


+(id)contactsByReplacingContacts:(id)arg0 withContactsHavingMatchingIdentifier:(id)arg1 ;
+(id)contactsFoundAndNotFoundByPartioningContacts:(id)arg0 usingFoundContacts:(id)arg1 ;
+(id)refetchedContacts:(id)arg0 fromStore:(id)arg1 keysToFetch:(id)arg2 ;
-(id)allContacts;
-(id)contactsFoundAndNotFound;
-(id)foundContacts;
-(id)init;
-(id)initWithContactStore:(id)arg0 contactsToRefetch:(id)arg1 ;
-(id)initWithContactStore:(id)arg0 contactsToRefetch:(id)arg1 keysToFetch:(id)arg2 ;


@end


#endif