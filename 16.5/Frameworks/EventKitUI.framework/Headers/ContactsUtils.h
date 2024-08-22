// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CONTACTSUTILS_H
#define CONTACTSUTILS_H


#import <Foundation/Foundation.h>


@interface ContactsUtils : NSObject



+(id)contactForAddress:(id)arg0 fullName:(id)arg1 firstName:(id)arg2 lastName:(id)arg3 ;
+(id)contactForAddress:(id)arg0 fullName:(id)arg1 firstName:(id)arg2 lastName:(id)arg3 keysToFetch:(id)arg4 ;
+(id)contactForContact:(id)arg0 keysToFetch:(id)arg1 ;
+(id)contactForEmailAddress:(id)arg0 fullName:(id)arg1 firstName:(id)arg2 lastName:(id)arg3 keysToFetch:(id)arg4 ;
+(id)contactForPhoneNumber:(id)arg0 fullName:(id)arg1 firstName:(id)arg2 lastName:(id)arg3 keysToFetch:(id)arg4 ;
+(id)defaultContactKeysToFetch;


@end


#endif