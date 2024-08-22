// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PHOBJECTDELETEVALIDATOR_H
#define PHOBJECTDELETEVALIDATOR_H

@class NSMutableSet, NSEntityDescription, NSManagedObjectContext;

#import <Foundation/Foundation.h>


@interface PHObjectDeleteValidator : NSObject {
    NSMutableSet *_deletedObjectIDs;
    NSEntityDescription *_entity;
    NSManagedObjectContext *_context;
}




-(BOOL)recordObjectID:(id)arg0 ;
-(BOOL)validateForDeleteWithRequestsByObjectID:(id)arg0 error:(*id)arg1 ;
-(id)initWithEntityName:(id)arg0 managedObjectContext:(id)arg1 ;


@end


#endif