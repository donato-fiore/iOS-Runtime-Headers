// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PLMANAGEDOBJECTVALIDATOR_H
#define PLMANAGEDOBJECTVALIDATOR_H


#import <Foundation/Foundation.h>


@interface PLManagedObjectValidator : NSObject



+(BOOL)validateAllObjectsUsingManagedObjectContext:(id)arg0 resultHandler:(id)arg1 ;
+(BOOL)validateAllObjectsWithEntityClass:(Class)arg0 inManagedObjectContext:(id)arg1 resultHandler:(id)arg2 ;
+(id)_entityClassesToValidate;
+(id)validateManagedObject:(id)arg0 ;


@end


#endif