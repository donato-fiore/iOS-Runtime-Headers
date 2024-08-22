// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NSSQLRELATIONSHIPFAULTREQUESTCONTEXT_H
#define NSSQLRELATIONSHIPFAULTREQUESTCONTEXT_H



#import "NSSQLStoreRequestContext.h"
#import "NSRelationshipDescription.h"
#import "NSManagedObjectID.h"

@interface NSSQLRelationshipFaultRequestContext : NSSQLStoreRequestContext {
    NSRelationshipDescription *_relationship;
    NSManagedObjectID *_objectID;
}




-(BOOL)executeRequestCore:(*id)arg0 ;
-(id)initWithObjectID:(id)arg0 relationship:(id)arg1 context:(id)arg2 sqlCore:(id)arg3 ;
-(void)dealloc;


@end


#endif