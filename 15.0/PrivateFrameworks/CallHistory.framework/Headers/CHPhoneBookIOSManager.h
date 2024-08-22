// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CHPHONEBOOKIOSMANAGER_H
#define CHPHONEBOOKIOSMANAGER_H

@class NSString, CNContactStore;
@protocol CHPhoneBookManagerProtocol;

#import <Foundation/Foundation.h>


@interface CHPhoneBookIOSManager : NSObject <CHPhoneBookManagerProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) CNContactStore *fContactsStore; // ivar: _fContactsStore
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)get;
-(BOOL)isABContactASuggestion;
-(id)fetchCNContact:(id)arg0 countryCode:(id)arg1 isEmail:(BOOL)arg2 ;
-(id)fetchCNContactsMatchingPredicate:(id)arg0 keysToKetch:(id)arg1 error:(*id)arg2 ;
-(id)fetchContactIdentifiersForHandles:(id)arg0 error:(*id)arg1 ;
-(id)fetchFullCNContactForContactIdentifier:(id)arg0 isEmail:(BOOL)arg1 ;
-(id)getLocalizedCallerIdLabelForContact:(id)arg0 forCallerId:(id)arg1 withCallerIdIsEmail:(BOOL)arg2 ;
-(id)getPersonsNameForContact:(id)arg0 ;
-(id)getRecordId:(id)arg0 countryCode:(id)arg1 isEmail:(BOOL)arg2 ;
-(id)init;
-(void)fetchAndCacheContactIdentifiersForCalls:(id)arg0 ;


@end


#endif