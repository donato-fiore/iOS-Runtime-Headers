// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NEPOLICYSESSION_H
#define NEPOLICYSESSION_H

@class NSData, NSMutableDictionary;
@protocol NEPrettyDescription, OS_dispatch_queue, OS_dispatch_semaphore;

#import <Foundation/Foundation.h>


@interface NEPolicySession : NSObject <NEPrettyDescription>



@property NSInteger internalPriority; // ivar: _internalPriority
@property (retain) NSObject<OS_dispatch_queue> *ioQueue; // ivar: _ioQueue
@property (retain) NSData *lastReceivedResponse; // ivar: _lastReceivedResponse
@property unsigned int lastSendMessageID; // ivar: _lastSendMessageID
@property (retain) NSMutableDictionary *policies; // ivar: _policies
@property NSInteger priority;
@property (retain) NSObject<OS_dispatch_semaphore> *responseSemaphore; // ivar: _responseSemaphore
@property int sessionFD; // ivar: _sessionFD


+(BOOL)isTLVValid:(char *)arg0 cursorCurrent:(char *)arg1 totalLength:(NSUInteger)arg2 ;
+(id)copyTLVForBytes:(char *)arg0 messageLength:(NSUInteger)arg1 type:(unsigned char)arg2 includeHeaderOffset:(BOOL)arg3 n:(int)arg4 ;
+(id)errorFromMessage:(id)arg0 ;
+(id)parseTLVResponseForDump:(id)arg0 ;
+(id)policyDumpFromData:(id)arg0 ;
+(id)readTLVOfType:(unsigned char)arg0 startCursor:(char *)arg1 currentCursor:(*char *)arg2 totalLength:(NSUInteger)arg3 readTLVInstance:(unsigned int)arg4 ;
+(unsigned char)getTLVtypeForBytes:(char *)arg0 includeHeaderOffset:(BOOL)arg1 nextTLVOffset:(*unsigned int)arg2 ;
+(unsigned int)messageIDForMessage:(id)arg0 ;
+(unsigned int)policyIDFromMessage:(id)arg0 ;
+(void)addTLVToMessage:(id)arg0 type:(unsigned char)arg1 length:(NSUInteger)arg2 value:(*void)arg3 ;
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
-(id)createTLVMessage:(unsigned char)arg0 ;
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