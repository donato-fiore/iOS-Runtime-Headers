// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CRSSIRIPREFERENCES_H
#define CRSSIRIPREFERENCES_H

@class CARObserverHashTable;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface CRSSiriPreferences : NSObject

@property (nonatomic) BOOL announceNotificationsInCarPlayTemporarilyDisabled;
@property (nonatomic) BOOL cachedAnnounceNotificationsInCarPlayTemporarilyDisabled; // ivar: _cachedAnnounceNotificationsInCarPlayTemporarilyDisabled
@property (nonatomic) NSInteger cachedCarPlayAnnounceEnablementType; // ivar: _cachedCarPlayAnnounceEnablementType
@property (nonatomic) NSInteger carPlayAnnounceEnablementType;
@property (readonly, nonatomic) CARObserverHashTable *observers; // ivar: _observers
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue


-(id)init;
-(void)_siriPreferencesDidChange;
-(void)_updateAnnounceNotificationsInCarPlayTemporarilyDisabled:(BOOL)arg0 ;
-(void)_updateCarPlayAnnounceEnablementType:(NSInteger)arg0 ;
-(void)addObserver:(id)arg0 ;
-(void)clearAnnounceNotificationsInCarPlayTemporarilyDisabled;
-(void)removeObserver:(id)arg0 ;


@end


#endif