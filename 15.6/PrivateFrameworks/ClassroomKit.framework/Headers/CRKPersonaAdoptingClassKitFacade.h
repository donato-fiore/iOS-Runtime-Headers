// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CRKPERSONAADOPTINGCLASSKITFACADE_H
#define CRKPERSONAADOPTINGCLASSKITFACADE_H



#import "CRKClassKitFacadeDecoratorBase.h"
#import "CRKClassKitPersonaAdopter.h"

@interface CRKPersonaAdoptingClassKitFacade : CRKClassKitFacadeDecoratorBase

@property (readonly, nonatomic) CRKClassKitPersonaAdopter *personaAdopter; // ivar: _personaAdopter


+(id)keyPathsForValuesAffectingCurrentPersonaUniqueString;
-(id)currentPersonaUniqueString;
-(id)initWithClassKitFacade:(id)arg0 personaBlockPerformer:(id)arg1 ;
-(void)currentUserWithCompletion:(id)arg0 ;
-(void)deregisterDataObserver:(id)arg0 ;
-(void)enrolledClassesWithCompletion:(id)arg0 ;
-(void)executeQuery:(id)arg0 ;
-(void)instructedClassesWithCompletion:(id)arg0 ;
-(void)instructorsInClassWithObjectID:(id)arg0 completion:(id)arg1 ;
-(void)locationsWithManagePermissionsForUserWithObjectID:(id)arg0 completion:(id)arg1 ;
-(void)locationsWithObjectIDs:(id)arg0 completion:(id)arg1 ;
-(void)performBlockWithClassKitPersona:(id)arg0 ;
-(void)registerDataObserver:(id)arg0 ;
-(void)removeClass:(id)arg0 completion:(id)arg1 ;
-(void)saveClass:(id)arg0 completion:(id)arg1 ;
-(void)studentsInClassWithObjectID:(id)arg0 completion:(id)arg1 ;


@end


#endif