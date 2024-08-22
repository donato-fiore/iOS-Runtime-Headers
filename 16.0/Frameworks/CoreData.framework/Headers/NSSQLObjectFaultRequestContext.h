// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NSSQLOBJECTFAULTREQUESTCONTEXT_H
#define NSSQLOBJECTFAULTREQUESTCONTEXT_H



#import "NSSQLStoreRequestContext.h"
#import "NSManagedObjectID.h"
#import "NSFetchRequest.h"

@interface NSSQLObjectFaultRequestContext : NSSQLStoreRequestContext {
    NSManagedObjectID *_objectID;
    NSFetchRequest *_fetchRequest;
    BOOL _forConflictAnalysis;
}




-(BOOL)executeRequestCore:(*id)arg0 ;
-(id)initWithObjectID:(id)arg0 context:(id)arg1 sqlCore:(id)arg2 ;
-(void)dealloc;


@end


#endif