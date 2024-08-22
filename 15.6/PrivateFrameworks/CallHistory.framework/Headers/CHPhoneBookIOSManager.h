// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CHPHONEBOOKIOSMANAGER_H
#define CHPHONEBOOKIOSMANAGER_H

@class CNContactStore;

#import <Foundation/Foundation.h>


@interface CHPhoneBookIOSManager : NSObject

@property (readonly, nonatomic) CNContactStore *contactStore; // ivar: _contactStore


-(id)fetchCNContact:(id)arg0 countryCode:(id)arg1 isEmail:(BOOL)arg2 ;
-(id)fetchCNContactsMatchingPredicate:(id)arg0 keysToKetch:(id)arg1 error:(*id)arg2 ;
-(id)fetchFullCNContactForContactIdentifier:(id)arg0 isEmail:(BOOL)arg1 ;
-(id)getLocalizedCallerIdLabelForContact:(id)arg0 forCallerId:(id)arg1 withCallerIdIsEmail:(BOOL)arg2 ;
-(id)getPersonsNameForContact:(id)arg0 ;
-(id)getRecordId:(id)arg0 countryCode:(id)arg1 isEmail:(BOOL)arg2 ;
-(id)initWithContactStore:(id)arg0 ;


@end


#endif