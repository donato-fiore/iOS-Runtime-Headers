// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HFCONTACTSTORE_H
#define HFCONTACTSTORE_H

@class CNContactStore;

#import <Foundation/Foundation.h>


@interface HFContactStore : NSObject

@property (readonly, nonatomic) CNContactStore *backingStore;
@property (readonly, nonatomic) CNContactStore *contactStore; // ivar: _contactStore


+(id)defaultStore;
-(id)_fallbackContactWithEmailAddress:(id)arg0 phoneNumber:(id)arg1 ;
-(id)_meContactWithEmailAddress:(id)arg0 keys:(id)arg1 ;
-(id)contactForEmailAddress:(id)arg0 withKeys:(id)arg1 ;
-(id)contactForPhoneNumber:(id)arg0 withKeys:(id)arg1 ;
-(id)contactForUserHandle:(id)arg0 withKeys:(id)arg1 ;
-(id)init;


@end


#endif