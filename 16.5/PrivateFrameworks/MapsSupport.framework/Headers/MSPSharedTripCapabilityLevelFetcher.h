// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MSPSHAREDTRIPCAPABILITYLEVELFETCHER_H
#define MSPSHAREDTRIPCAPABILITYLEVELFETCHER_H

@class GEOObserverHashTable, NSMutableDictionary, IDSBatchIDQueryController, NSMutableSet, NSTimer, NSString;
@protocol IDSBatchIDQueryControllerDelegate;

#import <Foundation/Foundation.h>


@interface MSPSharedTripCapabilityLevelFetcher : NSObject <IDSBatchIDQueryControllerDelegate>

 {
    GEOObserverHashTable *_observers;
    NSMutableDictionary *_identifierToShareETAStatus;
    NSMutableDictionary *_identifierToMessagesStatus;
    IDSBatchIDQueryController *_messagesBatchController;
    IDSBatchIDQueryController *_etaBatchController;
    NSMutableSet *_etaFetchQueue;
    NSMutableSet *_messagesFetchQueue;
    NSTimer *_retryAfterBackoffTimer;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedFetcher;
-(BOOL)processEtaDictionary:(id)arg0 ;
-(BOOL)processMessagesDictionary:(id)arg0 ;
-(NSUInteger)capabilityLevelForContact:(id)arg0 ;
-(id)init;
-(void)batchQueryController:(id)arg0 updatedDestinationsStatus:(id)arg1 onService:(id)arg2 error:(id)arg3 ;
-(void)cancelCapabilityLevelRequestForContact:(id)arg0 ;
-(void)fetchCapabilityLevelForContact:(id)arg0 timeout:(CGFloat)arg1 queue:(id)arg2 completion:(id)arg3 ;
-(void)fetchQueueDidUpdate;
-(void)notifyObservers;
-(void)registerObserver:(id)arg0 ;
-(void)requestCapabilityLevelsForContacts:(id)arg0 ;
-(void)unregisterObserver:(id)arg0 ;


@end


#endif