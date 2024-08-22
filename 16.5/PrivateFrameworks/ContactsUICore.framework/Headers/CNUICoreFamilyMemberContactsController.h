// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNUICOREFAMILYMEMBERCONTACTSCONTROLLER_H
#define CNUICOREFAMILYMEMBERCONTACTSCONTROLLER_H

@class NSNumber, CNFuture, NSString, FAFamilyMember;
@protocol CNUICoreFamilyMemberContactsDataSource, CNCancelable, CNUICoreFamilyMemberContactsUpdating, CNUICoreFamilyMemberContactsModelFetching, CNUICoreFamilyMemberContactsObserver, CNSchedulerProvider;

#import <Foundation/Foundation.h>


@interface CNUICoreFamilyMemberContactsController : NSObject <CNUICoreFamilyMemberContactsDataSource>



@property (retain, nonatomic) NSObject<CNCancelable> *contactStoreDidChangeToken; // ivar: _contactStoreDidChangeToken
@property (retain, nonatomic) NSNumber *countOfFamilyMemberContacts; // ivar: _countOfFamilyMemberContacts
@property (retain, nonatomic) CNFuture *countOfFamilyMemberContactsFuture; // ivar: _countOfFamilyMemberContactsFuture
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) FAFamilyMember *familyMember; // ivar: _familyMember
@property (readonly, nonatomic) NSObject<CNUICoreFamilyMemberContactsUpdating> *familyMemberContactsUpdator; // ivar: _familyMemberContactsUpdator
@property (readonly, nonatomic) NSInteger fetchStatus;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<CNUICoreFamilyMemberContactsModelFetching> *modelFetcher; // ivar: _modelFetcher
@property (weak, nonatomic) NSObject<CNUICoreFamilyMemberContactsObserver> *observer; // ivar: _observer
@property (readonly, nonatomic) NSObject<CNSchedulerProvider> *schedulerProvider; // ivar: _schedulerProvider
@property (readonly) Class superclass;
@property (retain, nonatomic) CNFuture *updateContactListByAddingContactsFuture; // ivar: _updateContactListByAddingContactsFuture
@property (retain, nonatomic) CNFuture *updateContactListByRemovingContactsFuture; // ivar: _updateContactListByRemovingContactsFuture


+(id)contactByRemovingSensitiveDataFromContact:(id)arg0 ;
+(id)propertyKeysContainingSenstiveData;
-(id)init;
-(id)initWithFamilyMember:(id)arg0 modelFetcher:(id)arg1 familyMemberContactsUpdator:(id)arg2 schedulerProvider:(id)arg3 ;
-(id)initWithFamilyMember:(id)arg0 schedulerProvider:(id)arg1 ;
-(void)cancelCountOfFamilyMemberContactsFetch;
-(void)dealloc;
-(void)setupChangeNotificationResponse;
-(void)triggerCountOfFamilyMemberContactsFetch;
-(void)updateListByAddingContacts:(id)arg0 ;
-(void)updateListByRemovingContacts:(id)arg0 ;


@end


#endif