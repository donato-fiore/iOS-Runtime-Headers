// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _NSMANAGEDOBJECT_ST_H
#define _NSMANAGEDOBJECT_ST_H


#import <Foundation/Foundation.h>

#import "NSManagedObjectContext.h"
#import "NSManagedObjectID.h"

@interface _NSManagedObject_st : NSObject {
    int _cd_rc;
    unsigned int _cd_lockingInfo;
    unsigned int _cd_stateFlags;
    unsigned int _cd_extraFlags;
    id *_cd_rawData;
    NSManagedObjectContext *_cd_managedObjectContext;
    NSManagedObjectID *_cd_objectID;
    *void _cd_extras;
    id *_cd_queueReference;
}






@end


#endif