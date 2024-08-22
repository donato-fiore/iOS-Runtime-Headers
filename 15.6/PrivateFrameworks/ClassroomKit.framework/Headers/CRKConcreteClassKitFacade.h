// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CRKCONCRETECLASSKITFACADE_H
#define CRKCONCRETECLASSKITFACADE_H

@class NSString;
@protocol CRKClassKitFacade;

#import <Foundation/Foundation.h>

#import "CRKClassKitAccountStateProvider.h"

@interface CRKConcreteClassKitFacade : NSObject <CRKClassKitFacade>



@property (readonly, nonatomic) NSInteger accountState;
@property (readonly, nonatomic) CRKClassKitAccountStateProvider *accountStateProvider; // ivar: _accountStateProvider
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)keyPathsForValuesAffectingAccountState;
+(id)makePersonSortDescriptorsSortingGivenNameFirst:(BOOL)arg0 ;
-(BOOL)ownsError:(id)arg0 ;
-(id)classDataObserverWithSortDescriptors:(id)arg0 ;
-(id)dataStore;
-(id)init;
-(id)locationsObserverWithSortDescriptors:(id)arg0 ;
-(id)makeClassWithLocationID:(id)arg0 name:(id)arg1 ;
-(id)makeDataObserverWithObjectType:(Class)arg0 predicate:(id)arg1 sortDescriptors:(id)arg2 ;
-(id)makeInstructorQueryForSearchString:(id)arg0 locationIDs:(id)arg1 sortingGivenNameFirst:(BOOL)arg2 pageSize:(NSInteger)arg3 ;
-(id)makePredicateForObjectIDs:(id)arg0 ;
-(id)makePredicatesForObjectIDs:(id)arg0 ;
-(id)makeQueryForPersonsWithIdentifiers:(id)arg0 ;
-(id)makeQueryForPersonsWithRole:(NSInteger)arg0 locationIDs:(id)arg1 searchString:(id)arg2 sortingGivenNameFirst:(BOOL)arg3 pageSize:(NSInteger)arg4 ;
-(id)makeStudentQueryForSearchString:(id)arg0 locationIDs:(id)arg1 sortingGivenNameFirst:(BOOL)arg2 pageSize:(NSInteger)arg3 ;
-(id)objectIDsOfInstructorsInClass:(id)arg0 ;
-(id)objectIDsOfMembersInClass:(id)arg0 withRole:(NSUInteger)arg1 ;
-(id)objectIDsOfStudentsInClass:(id)arg0 ;
-(id)personObserverWithPersonIDs:(id)arg0 sortDescriptors:(id)arg1 ;
-(id)subscribeToClassMembershipChangeEvents:(id)arg0 ;
-(id)subscribeToCurrentUserDidChangeEvents:(id)arg0 ;
-(void)addInstructor:(id)arg0 toClass:(id)arg1 ;
-(void)addPerson:(id)arg0 withRole:(NSUInteger)arg1 toClass:(id)arg2 ;
-(void)addStudent:(id)arg0 toClass:(id)arg1 ;
-(void)currentUserWithCompletion:(id)arg0 ;
-(void)deregisterDataObserver:(id)arg0 ;
-(void)enrolledClassesWithCompletion:(id)arg0 ;
-(void)executeQuery:(id)arg0 ;
-(void)instructedClassesWithCompletion:(id)arg0 ;
-(void)instructorsInClassWithObjectID:(id)arg0 completion:(id)arg1 ;
-(void)locationsWithManagePermissionsForUserWithObjectID:(id)arg0 completion:(id)arg1 ;
-(void)locationsWithObjectIDs:(id)arg0 completion:(id)arg1 ;
-(void)registerDataObserver:(id)arg0 ;
-(void)removeClass:(id)arg0 completion:(id)arg1 ;
-(void)removeInstructor:(id)arg0 fromClass:(id)arg1 ;
-(void)removePerson:(id)arg0 withRole:(NSUInteger)arg1 fromClass:(id)arg2 ;
-(void)removeStudent:(id)arg0 fromClass:(id)arg1 ;
-(void)saveClass:(id)arg0 completion:(id)arg1 ;
-(void)studentsInClassWithObjectID:(id)arg0 completion:(id)arg1 ;


@end


#endif