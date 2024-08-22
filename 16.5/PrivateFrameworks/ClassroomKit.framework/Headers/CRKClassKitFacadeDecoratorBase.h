// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CRKCLASSKITFACADEDECORATORBASE_H
#define CRKCLASSKITFACADEDECORATORBASE_H

@class NSString;
@protocol CRKClassKitFacade;

#import <Foundation/Foundation.h>


@interface CRKClassKitFacadeDecoratorBase : NSObject <CRKClassKitFacade>



@property (readonly, nonatomic) NSInteger accountState;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<CRKClassKitFacade> *underlyingClassKitFacade; // ivar: _underlyingClassKitFacade


+(id)keyPathsForValuesAffectingAccountState;
-(BOOL)ownsError:(id)arg0 ;
-(id)classDataObserverWithSortDescriptors:(id)arg0 ;
-(id)init;
-(id)initWithClassKitFacade:(id)arg0 ;
-(id)locationsObserverWithSortDescriptors:(id)arg0 ;
-(id)makeClassWithLocationID:(id)arg0 name:(id)arg1 ;
-(id)makeInstructorQueryForSearchString:(id)arg0 locationIDs:(id)arg1 sortingGivenNameFirst:(BOOL)arg2 pageSize:(NSInteger)arg3 ;
-(id)makeQueryForPersonsWithIdentifiers:(id)arg0 ;
-(id)makeStudentQueryForSearchString:(id)arg0 locationIDs:(id)arg1 sortingGivenNameFirst:(BOOL)arg2 pageSize:(NSInteger)arg3 ;
-(id)objectIDsOfInstructorsInClass:(id)arg0 ;
-(id)objectIDsOfStudentsInClass:(id)arg0 ;
-(id)personObserverWithPersonIDs:(id)arg0 sortDescriptors:(id)arg1 ;
-(id)subscribeToClassMembershipChangeEvents:(id)arg0 ;
-(id)subscribeToCurrentUserDidChangeEvents:(id)arg0 ;
-(void)addInstructor:(id)arg0 toClass:(id)arg1 ;
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
-(void)removeStudent:(id)arg0 fromClass:(id)arg1 ;
-(void)saveClass:(id)arg0 completion:(id)arg1 ;
-(void)studentsInClassWithObjectID:(id)arg0 completion:(id)arg1 ;


@end


#endif