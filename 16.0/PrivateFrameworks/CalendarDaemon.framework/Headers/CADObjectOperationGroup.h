// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CADOBJECTOPERATIONGROUP_H
#define CADOBJECTOPERATIONGROUP_H

@protocol CADObjectInterface;


#import "CADOperationGroup.h"

@interface CADObjectOperationGroup : CADOperationGroup <CADObjectInterface>





+(BOOL)requiresEventAccess;
-(void)CADObject:(id)arg0 getDataPropertyWithName:(id)arg1 reply:(id)arg2 ;
-(void)CADObject:(id)arg0 getDatePropertyWithName:(id)arg1 reply:(id)arg2 ;
-(void)CADObject:(id)arg0 getNumberPropertyWithName:(id)arg1 reply:(id)arg2 ;
-(void)CADObject:(id)arg0 getPropertiesWithNames:(id)arg1 reply:(id)arg2 ;
-(void)CADObject:(id)arg0 getPropertyWithName:(id)arg1 reply:(id)arg2 ;
-(void)CADObject:(id)arg0 getRelatedObjectWithRelationName:(id)arg1 reply:(id)arg2 ;
-(void)CADObject:(id)arg0 getRelatedObjectsWithRelationName:(id)arg1 reply:(id)arg2 ;
-(void)CADObject:(id)arg0 getSecurityScopedURLWrapperPropertyWithName:(id)arg1 reply:(id)arg2 ;
-(void)CADObject:(id)arg0 getStringPropertyWithName:(id)arg1 reply:(id)arg2 ;
-(void)CADObjectExists:(id)arg0 reply:(id)arg1 ;
-(void)CADObjectIsManaged:(id)arg0 reply:(id)arg1 ;
-(void)CADObjects:(id)arg0 getPropertiesWithNames:(id)arg1 reply:(id)arg2 ;
-(void)CADObjectsExist:(id)arg0 reply:(id)arg1 ;


@end


#endif