// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NSXPCSAVEREQUESTCONTEXT_H
#define NSXPCSAVEREQUESTCONTEXT_H

@class NSDictionary, NSMutableDictionary;

#import <Foundation/Foundation.h>

#import "NSXPCStore.h"
#import "NSSaveChangesRequest.h"
#import "NSManagedObjectContext.h"

@interface NSXPCSaveRequestContext : NSObject {
    NSXPCStore *_store;
    NSSaveChangesRequest *_request;
    NSDictionary *_metadata;
    NSManagedObjectContext *_context;
    NSMutableDictionary *_changeCache;
    NSUInteger _interrupts;
    BOOL _forceUpdates;
}




-(id)initForStore:(id)arg0 request:(id)arg1 metadata:(id)arg2 forceInsertsToUpdates:(BOOL)arg3 context:(id)arg4 ;
-(id)managedObjectContext;
-(void)dealloc;


@end


#endif