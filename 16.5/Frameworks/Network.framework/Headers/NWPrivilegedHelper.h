// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NWPRIVILEGEDHELPER_H
#define NWPRIVILEGEDHELPER_H

@class NSMutableArray, NSMutableSet, NSMutableDictionary;
@protocol OS_xpc_object, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface NWPrivilegedHelper : NSObject

@property (retain) NSMutableArray *allKnownEntitlementGroup; // ivar: _allKnownEntitlementGroup
@property (retain) NSMutableSet *allKnownEntitlementSet; // ivar: _allKnownEntitlementSet
@property (retain) NSMutableDictionary *handlers; // ivar: _handlers
@property (retain) NSObject<OS_xpc_object> *listener; // ivar: _listener
@property (retain) NSObject<OS_dispatch_queue> *queue; // ivar: _queue


-(BOOL)startXPCListener;
-(id)initWithQueue:(id)arg0 ;
-(void)handleRequest:(id)arg0 onConnection:(id)arg1 ;
-(void)registerHandlerFunction:(*unk)arg0 type:(int)arg1 allowedEntitlementGroup:(id)arg2 ;
-(void)registerHelperFunctions;
-(void)startThrottlePolicyEventListener;


@end


#endif