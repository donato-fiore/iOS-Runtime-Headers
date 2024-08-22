// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EKRECENTS_H
#define EKRECENTS_H


#import <Foundation/Foundation.h>


@interface EKRecents : NSObject



+(BOOL)recordRecentForContactWithName:(id)arg0 emailAddress:(id)arg1 phoneNumber:(id)arg2 ;
+(Class)crRecentContactsLibraryClass;
+(id)crAddressKindEmailString;
+(id)crAddressKindPhoneNumberString;
+(id)crRecentsDomainCalendarString;
+(id)recentForContactWithAddress:(id)arg0 name:(id)arg1 kind:(id)arg2 ;
+(void)recordRecentWithAddress:(id)arg0 name:(id)arg1 kind:(id)arg2 ;


@end


#endif