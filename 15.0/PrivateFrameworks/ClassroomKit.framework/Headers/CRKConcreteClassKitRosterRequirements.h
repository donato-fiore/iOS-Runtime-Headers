// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CRKCONCRETECLASSKITROSTERREQUIREMENTS_H
#define CRKCONCRETECLASSKITROSTERREQUIREMENTS_H

@class NSArray, NSString, NSMutableDictionary;
@protocol CRKClassKitRosterRequirements, CRKClassKitFacade, CRKCancelable;

#import <Foundation/Foundation.h>


@interface CRKConcreteClassKitRosterRequirements : NSObject <CRKClassKitRosterRequirements>



@property (readonly, nonatomic) NSInteger accountState;
@property (readonly, nonatomic) NSObject<CRKClassKitFacade> *classKitFacade; // ivar: _classKitFacade
@property (readonly, copy, nonatomic) NSArray *dataObservers; // ivar: _dataObservers
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic, getter=isForInstructor) BOOL forInstructor; // ivar: _forInstructor
@property (readonly, nonatomic) NSMutableDictionary *generalObserversByToken; // ivar: _generalObserversByToken
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<CRKCancelable> *membershipDidChangeSubscription; // ivar: _membershipDidChangeSubscription
@property (readonly, nonatomic) NSMutableDictionary *personObserversByToken; // ivar: _personObserversByToken
@property (readonly) Class superclass;
@property (retain, nonatomic) NSObject<CRKCancelable> *userDidChangeSubscription; // ivar: _userDidChangeSubscription


+(id)instructorRosterRequirementsWithClassKitFacade:(id)arg0 ;
+(id)studentRosterRequirementsWithClassKitFacade:(id)arg0 ;
-(BOOL)isForStudent;
-(BOOL)ownsError:(id)arg0 ;
-(id)addGeneralObserver:(id)arg0 ;
-(id)addObserverForPersonIDs:(id)arg0 observerBlock:(id)arg1 ;
-(id)initWithClassKitFacade:(id)arg0 isForInstructor:(BOOL)arg1 ;
-(id)makeClassWithLocationID:(id)arg0 name:(id)arg1 ;
-(id)makeDataChangedBlockWithObserverDescription:(SEL)arg0 ;
-(id)makeDataObservers;
-(id)makeInstructorQueryForSearchString:(id)arg0 locationIDs:(id)arg1 sortingGivenNameFirst:(BOOL)arg2 pageSize:(NSInteger)arg3 ;
-(id)makeQueryForPersonsWithIdentifiers:(id)arg0 ;
-(id)makeStudentQueryForSearchString:(id)arg0 locationIDs:(id)arg1 sortingGivenNameFirst:(BOOL)arg2 pageSize:(NSInteger)arg3 ;
-(id)makeToken;
-(id)objectIDsOfPersonsInClass:(id)arg0 ;
-(id)objectIDsOfTrustedPersonsInClass:(id)arg0 ;
-(void)addNullableObserver:(id)arg0 toArray:(id)arg1 ;
-(void)addPerson:(id)arg0 toClass:(id)arg1 ;
-(void)addTrustedPerson:(id)arg0 toClass:(id)arg1 ;
-(void)callGeneralObserversWithReason:(id)arg0 ;
-(void)classesWithCompletion:(id)arg0 ;
-(void)currentUserWithCompletion:(id)arg0 ;
-(void)dealloc;
-(void)deregisterDataObservers;
-(void)executeQuery:(id)arg0 ;
-(void)locationsWithManagePermissionsForUserWithObjectID:(id)arg0 completion:(id)arg1 ;
-(void)locationsWithObjectIDs:(id)arg0 completion:(id)arg1 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)personsInClassWithObjectID:(id)arg0 completion:(id)arg1 ;
-(void)registerDataObservers;
-(void)registerForCurrentUserChangeNotification;
-(void)registerForMembershipChangeDarwinNotification;
-(void)removeClass:(id)arg0 completion:(id)arg1 ;
-(void)removeGeneralObserver:(id)arg0 ;
-(void)removeObserver:(id)arg0 ;
-(void)removePerson:(id)arg0 fromClass:(id)arg1 ;
-(void)removePersonObserver:(id)arg0 ;
-(void)removeTrustedPerson:(id)arg0 fromClass:(id)arg1 ;
-(void)saveClass:(id)arg0 completion:(id)arg1 ;
-(void)startObservingAccountState;
-(void)stopObservingAccountState;
-(void)trustedPersonsInClassWithObjectID:(id)arg0 completion:(id)arg1 ;
-(void)unregisterForMembershipChangeDarwinNotification;


@end


#endif