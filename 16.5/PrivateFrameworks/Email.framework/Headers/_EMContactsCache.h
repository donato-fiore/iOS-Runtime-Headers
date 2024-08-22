// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _EMCONTACTSCACHE_H
#define _EMCONTACTSCACHE_H

@class EFLazyCache, CNContactStore;

#import <Foundation/Foundation.h>


@interface _EMContactsCache : NSObject

@property (readonly, nonatomic) EFLazyCache *addressesCache; // ivar: _addressesCache
@property (readonly, nonatomic) EFLazyCache *namesCache; // ivar: _namesCache
@property (readonly, weak, nonatomic) CNContactStore *store; // ivar: _store


// -(id)_contactsForKey:(id)arg0 cache:(id)arg1 keysToFetch:(id)arg2 predicateBlock:(id)arg3 error:(unk)arg4  ;
-(id)allContactEmailAddressesWithError:(*id)arg0 ;
-(id)contactsForEmailAddress:(id)arg0 keysToFetch:(id)arg1 error:(*id)arg2 ;
-(id)contactsForName:(id)arg0 keysToFetch:(id)arg1 error:(*id)arg2 ;
-(id)initWithStore:(id)arg0 ;
-(void)_contactsChanged:(id)arg0 ;


@end


#endif