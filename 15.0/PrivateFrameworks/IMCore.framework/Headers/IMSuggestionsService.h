// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IMSUGGESTIONSSERVICE_H
#define IMSUGGESTIONSSERVICE_H

@class NSCache, NSMutableDictionary, NSDictionary, NSHashTable;
@protocol SGSuggestionsServiceContactsProtocol, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface IMSuggestionsService : NSObject {
    NSObject<SGSuggestionsServiceContactsProtocol> *_connection;
    NSCache *_cache;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_pending;
    NSDictionary *_localTable;
    NSHashTable *_handlesToRetry;
    id *_newContactNotificationToken;
    *__CFRunLoopObserver _notificationObserver;
}




+(id)sharedInstance;
-(BOOL)_maybeEmailAddress:(id)arg0 ;
-(BOOL)_maybePhoneNumber:(id)arg0 ;
-(BOOL)isBusiness:(id)arg0 ;
-(id)_contactForSGContactMatch:(id)arg0 ;
-(id)fetchCNContactForSuggestedHandle:(id)arg0 ;
-(id)init;
-(id)personNameComponentsForHandle:(id)arg0 ;
-(id)serviceConnection;
-(id)suggestedNameFromCache:(id)arg0 wasFound:(*BOOL)arg1 ;
-(void)_startRequestForDisplayName:(id)arg0 messageUID:(id)arg1 queue:(id)arg2 ;
-(void)_startRequestForDisplayNameCallbackWithSuggestedName:(id)arg0 displayName:(id)arg1 queue:(id)arg2 ;
-(void)dealloc;
-(void)fetchSuggestedRealNameForDisplayName:(id)arg0 messageUID:(id)arg1 queue:(id)arg2 block:(id)arg3 ;
-(void)scheduleFetchIfNecessaryForHandle:(id)arg0 ;
-(void)startUsingLocalLookupsWithTable:(id)arg0 ;
-(void)stopUsingLocalLookups;


@end


#endif