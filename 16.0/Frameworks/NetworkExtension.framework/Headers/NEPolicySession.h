// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NEPOLICYSESSION_H
#define NEPOLICYSESSION_H

@class NSMutableDictionary, NSData;
@protocol NEPrettyDescription, OS_dispatch_queue, OS_dispatch_semaphore;

#import <Foundation/Foundation.h>


@interface NEPolicySession : NSObject <NEPrettyDescription>

 {
    BOOL _convertToLegacyPriority;
    unsigned int _lastSendMessageID;
    int _sessionFD;
    NSInteger _internalPriority;
    NSMutableDictionary *_policies;
    NSObject<OS_dispatch_queue> *_ioQueue;
    NSObject<OS_dispatch_semaphore> *_responseSemaphore;
    NSData *_lastReceivedResponse;
}


@property NSInteger priority;


-(BOOL)apply;
-(BOOL)lockSessionToCurrentProcess;
-(BOOL)registerServiceUUID:(id)arg0 ;
-(BOOL)removeAllDomainFilters;
-(BOOL)removeAllPolicies;
-(BOOL)removeDomainFilterWithID:(NSUInteger)arg0 ;
-(BOOL)removePolicyWithID:(NSUInteger)arg0 ;
-(BOOL)unregisterServiceUUID:(id)arg0 ;
-(NSUInteger)addDomainFilterWithData:(id)arg0 ;
-(NSUInteger)addPolicy:(id)arg0 ;
-(NSUInteger)addPolicy:(id)arg0 storeLocally:(BOOL)arg1 ;
-(id)description;
-(id)descriptionWithIndent:(int)arg0 options:(NSUInteger)arg1 ;
-(id)dumpKernelPolicies;
-(id)init;
-(id)initFromPrivilegedProcess;
-(id)initWithSessionName:(id)arg0 ;
-(id)initWithSocket:(int)arg0 ;
-(id)policyWithID:(NSUInteger)arg0 ;
-(int)dupSocket;
-(void)dealloc;


@end


#endif