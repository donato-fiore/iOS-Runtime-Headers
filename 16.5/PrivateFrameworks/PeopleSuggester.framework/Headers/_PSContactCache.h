// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _PSCONTACTCACHE_H
#define _PSCONTACTCACHE_H

@class CNContactStore, NSData, _PASLock, IDSIDQueryController, NSString;
@protocol CNChangeHistoryEventVisitor, NSObject, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface _PSContactCache : NSObject <CNChangeHistoryEventVisitor>

 {
    CNContactStore *_contactStore;
    NSData *_changeHistoryToken;
    id<NSObject> *_notificationCenterToken;
    NSObject<OS_dispatch_queue> *_notificationQueue;
    _PASLock *_cachedContactForHandle;
    _PASLock *_cachedFaceTimeableHandleForContactIdentifier;
    IDSIDQueryController *_idsQueryController;
    NSString *_faceTimeServiceName;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedInstance;
-(NSInteger)getFaceTimeIDSStatusForHandle:(id)arg0 contactType:(NSUInteger)arg1 ;
-(id)_getCachedContactForHandle:(id)arg0 ;
-(id)_getCachedFaceTimeableHandleForContactIdentifier:(id)arg0 ;
-(id)contactKeysToFetch;
-(id)fetchMeContact;
-(id)getContactForHandle:(id)arg0 handleType:(NSInteger)arg1 ;
-(id)getFaceTimeableHandleForContact:(id)arg0 interactionStore:(id)arg1 seedRecipientHandle:(id)arg2 ;
-(id)getMeContact;
-(id)init;
-(void)_purge;
-(void)_removeAllHandlesForContactIdentifier:(id)arg0 ;
-(void)_setContact:(id)arg0 ;
-(void)_setContact:(id)arg0 forHandle:(id)arg1 ;
-(void)_setLikelyFaceTimeHandle:(id)arg0 forContactIdentifier:(id)arg1 ;
-(void)dealloc;
-(void)syncChangeHistory;
-(void)visitAddContactEvent:(id)arg0 ;
-(void)visitDeleteContactEvent:(id)arg0 ;
-(void)visitDropEverythingEvent:(id)arg0 ;
-(void)visitUpdateContactEvent:(id)arg0 ;


@end


#endif