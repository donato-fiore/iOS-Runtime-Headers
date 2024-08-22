// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SPOTLIGHTRECEIVERCONNECTION_H
#define SPOTLIGHTRECEIVERCONNECTION_H

@class CSXPCConnection, NSMutableSet, NSSet, NSArray;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;



@interface SpotlightReceiverConnection : CSXPCConnection {
    NSMutableSet *_positiveSet;
    NSMutableSet *_negativeSet;
    uint8_t _disabled;
}


@property (readonly, nonatomic) NSSet *INIntentClassNames; // ivar: _INIntentClassNames
@property (readonly, nonatomic) NSSet *bundleIDs; // ivar: _bundleIDs
@property (readonly, nonatomic) NSArray *contentTypes; // ivar: _contentTypes
@property (nonatomic) CGFloat minDate; // ivar: _minDate
@property (readonly, nonatomic) uint8_t requestCount; // ivar: _requestCount
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *senderQueue; // ivar: _senderQueue
@property (nonatomic) BOOL setupComplete; // ivar: _setupComplete
@property (retain) NSObject<OS_dispatch_semaphore> *setupSemaphore; // ivar: _setupSemaphore
@property (nonatomic) BOOL setupStarted; // ivar: _setupStarted
@property (nonatomic) BOOL skipFileProviderItems; // ivar: _skipFileProviderItems
@property (readonly, nonatomic) int supportedJobs; // ivar: _supportedJobs
@property (readonly, nonatomic) BOOL unresponsive;
@property (nonatomic) BOOL wantsHTML; // ivar: _wantsHTML
@property (nonatomic) BOOL wantsText; // ivar: _wantsText


+(void)setup;
-(BOOL)_wantsBundleID:(id)arg0 ;
-(BOOL)_wantsContentType:(id)arg0 ;
-(BOOL)canRun;
-(BOOL)disabled;
-(id)initWithServiceName:(id)arg0 clientID:(NSInteger)arg1 wantsText:(BOOL)arg2 wantsHTML:(BOOL)arg3 ;
-(void)addInteraction:(id)arg0 intentClassName:(id)arg1 bundleID:(id)arg2 protectionClass:(id)arg3 ;
-(void)addUserActions:(id)arg0 bundleID:(id)arg1 protectionClass:(id)arg2 ;
-(void)deleteAllInteractionsWithBundleID:(id)arg0 protectionClass:(id)arg1 ;
-(void)deleteAllUserActivities:(id)arg0 ;
-(void)deleteFromBundle:(id)arg0 ;
-(void)deleteFromBundle:(id)arg0 contentType:(id)arg1 identifiers:(id)arg2 ;
-(void)deleteFromBundle:(id)arg0 domainIdentifiers:(id)arg1 ;
-(void)deleteFromBundle:(id)arg0 encodedIdentifiers:(id)arg1 ;
-(void)deleteFromBundle:(id)arg0 sinceDate:(id)arg1 ;
-(void)deleteInteractionsWithGroupIdentifiers:(id)arg0 bundleID:(id)arg1 protectionClass:(id)arg2 ;
-(void)deleteInteractionsWithIdentifiers:(id)arg0 bundleID:(id)arg1 protectionClass:(id)arg2 ;
-(void)deleteUserActivitiesWithPersistentIdentifiers:(id)arg0 bundleID:(id)arg1 retainedData:(id)arg2 ;
-(void)dictionary:(id)arg0 setDecoderData:(id)arg1 forKey:(char *)arg2 sizeKey:(char *)arg3 ;
-(void)disableReceiver;
-(void)donateRelevantActions:(id)arg0 bundleID:(id)arg1 ;
-(void)enableReceiver;
-(void)handleError:(id)arg0 ;
-(void)indexFromBundle:(id)arg0 protectionClass:(id)arg1 items:(id)arg2 itemsContent:(id)arg3 ;
-(void)invalidationHandler;
-(void)purgeFromBundle:(id)arg0 identifiers:(id)arg1 ;
-(void)receiverRequestComplete;
-(void)receiverRequestStart;
-(void)runOnSenderQueue:(id)arg0 ;
-(void)setupComplete:(BOOL)arg0 ;
-(void)startSetup;


@end


#endif