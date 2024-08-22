// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNUICOREFAMILYINFORETRIEVER_H
#define CNUICOREFAMILYINFORETRIEVER_H

@class NSString, CNFuture, FAFetchFamilyCircleRequest;
@protocol CNUICoreFamilyInfoFetching, CNUICoreContactStoreFacade, CNSchedulerProvider;

#import <Foundation/Foundation.h>


@interface CNUICoreFamilyInfoRetriever : NSObject <CNUICoreFamilyInfoFetching>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) CNFuture *familyFuture; // ivar: _familyFuture
@property (readonly, nonatomic) FAFetchFamilyCircleRequest *fetchFamilyCircleRequest; // ivar: _fetchFamilyCircleRequest
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<CNUICoreContactStoreFacade> *mainContactStore; // ivar: _mainContactStore
@property (readonly, nonatomic) BOOL matchFamilyMembersWithContacts; // ivar: _matchFamilyMembersWithContacts
@property (readonly, nonatomic) NSObject<CNSchedulerProvider> *schedulerProvider; // ivar: _schedulerProvider
@property (readonly) Class superclass;


+(id)contactsMatchingFamilyMember:(id)arg0 inContactStore:(id)arg1 ;
+(id)familyCircleFromRequest:(id)arg0 schedulerProvider:(id)arg1 ;
+(id)familyInfoWithFamilyMembers:(id)arg0 meContact:(id)arg1 ;
+(id)familyInfoWithFamilyMembers:(id)arg0 meContact:(id)arg1 matchedWithContactsInContactStore:(id)arg2 ;
+(id)keysToFetch;
+(id)meContactFromStore:(id)arg0 schedulerProvider:(id)arg1 ;
-(id)createFamilyFuture;
-(id)familyInfo;
-(id)init;
-(id)initWithMainContactStoreFacade:(id)arg0 fetchFamilyCircleRequest:(id)arg1 matchFamilyMembersWithContacts:(BOOL)arg2 schedulerProvider:(id)arg3 ;
-(id)initWithMainContactStoreFacade:(id)arg0 matchFamilyMembersWithContacts:(BOOL)arg1 schedulerProvider:(id)arg2 ;


@end


#endif