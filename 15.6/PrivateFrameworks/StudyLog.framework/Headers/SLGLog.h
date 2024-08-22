// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SLGLOG_H
#define SLGLOG_H

@class NSNumber, NSString, NSDateFormatter, NSHashTable, NSSet;
@protocol SLGLogClientProtocolDelegate, SLGLogging, SLGLogClientProtocol, SLGDomainWhitelisting, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface SLGLog : NSObject <SLGLogClientProtocolDelegate, SLGLogging>

 {
    id<SLGLogClientProtocol> *_client;
    id<SLGDomainWhitelisting> *_whitelist;
    NSNumber *_pid;
    NSString *_processName;
    NSDateFormatter *_dateFormatter;
    NSHashTable *_observers;
    NSObject<OS_dispatch_queue> *_observerLockQueue;
    NSObject<OS_dispatch_queue> *_observerCalloutQueue;
    BOOL _isEnabled;
}


@property (nonatomic) BOOL allowUnspecifiedDomains;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSSet *whitelistedDomains;


+(id)sharedInstance;
-(BOOL)isEnabled;
-(id)_serializeObjectAsLogEntry:(id)arg0 domain:(id)arg1 tags:(id)arg2 error:(*id)arg3 ;
-(id)_wrapObjectWithEntryMetadata:(id)arg0 domain:(id)arg1 tags:(id)arg2 ;
-(id)init;
-(id)initWithClient:(id)arg0 whitelist:(id)arg1 enabled:(BOOL)arg2 ;
-(void)_fetchProcessInfo;
-(void)_setClient:(id)arg0 ;
-(void)addDomainToWhitelist:(id)arg0 ;
-(void)addObserver:(id)arg0 ;
-(void)beginSession;
-(void)beginSessionWithCompletion:(id)arg0 ;
-(void)client:(id)arg0 didReceiveInitialLogMessageFromDomain:(id)arg1 ;
-(void)clientDidReceiveServerReset:(id)arg0 ;
-(void)endSession;
-(void)endSessionAndRenameFileTo:(id)arg0 withCompletion:(id)arg1 ;
-(void)endSessionWithCompletion:(id)arg0 ;
-(void)log:(id)arg0 ;
-(void)log:(id)arg0 completion:(id)arg1 ;
-(void)log:(id)arg0 domain:(id)arg1 ;
-(void)log:(id)arg0 domain:(id)arg1 completion:(id)arg2 ;
-(void)log:(id)arg0 domain:(id)arg1 tags:(id)arg2 ;
-(void)log:(id)arg0 domain:(id)arg1 tags:(id)arg2 completion:(id)arg3 ;
-(void)log:(id)arg0 tags:(id)arg1 ;
-(void)log:(id)arg0 tags:(id)arg1 completion:(id)arg2 ;
-(void)logBlock:(id)arg0 ;
// -(void)logBlock:(id)arg0 completion:(unk)arg1  ;
// -(void)logBlock:(id)arg0 domain:(unk)arg1  ;
// -(void)logBlock:(id)arg0 domain:(unk)arg1 completion:(id)arg2  ;
// -(void)logBlock:(id)arg0 domain:(unk)arg1 tags:(id)arg2  ;
// -(void)logBlock:(id)arg0 domain:(unk)arg1 tags:(id)arg2 completion:(id)arg3  ;
// -(void)logBlock:(id)arg0 tags:(unk)arg1  ;
// -(void)logBlock:(id)arg0 tags:(unk)arg1 completion:(id)arg2  ;
-(void)removeDomainFromWhitelist:(id)arg0 ;
-(void)removeObserver:(id)arg0 ;
-(void)reset;
-(void)reset:(NSUInteger)arg0 completion:(id)arg1 ;
-(void)resetWithCompletion:(id)arg0 ;


@end


#endif