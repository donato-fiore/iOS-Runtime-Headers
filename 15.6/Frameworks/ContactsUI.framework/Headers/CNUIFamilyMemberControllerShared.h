// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CNUIFAMILYMEMBERCONTROLLERSHARED_H
#define CNUIFAMILYMEMBERCONTROLLERSHARED_H


#import <Foundation/Foundation.h>


@interface CNUIFamilyMemberControllerShared : NSObject



+(NSInteger)contactsUIFetchStatusFromContactsUICoreFetchStatus:(NSInteger)arg0 ;
+(id)actionTitleAddNewContactForFamilyMember:(id)arg0 ;
+(id)actionTitleChooseFromContactsForFamilyMember:(id)arg0 ;
+(id)addContactsOptionsSheetForFamilyMember:(id)arg0 delegate:(id)arg1 ;
+(id)addContactsToWhitelistOptionsSheetForFamilyMember:(id)arg0 offerChooseFromFamilyMemberContactsOption:(BOOL)arg1 delegate:(id)arg2 ;
+(id)contactMatchingFamilyMemberContactItem:(id)arg0 fetchedFromContactStore:(id)arg1 schedulerProvider:(id)arg2 ;
+(id)contactViewControllerForContact:(id)arg0 fromStore:(id)arg1 ;
+(id)formattedNameOfFamilyMember:(id)arg0 ;


@end


#endif