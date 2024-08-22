// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CRSSIRIPREFERENCES_H
#define CRSSIRIPREFERENCES_H

@class CARObserverHashTable;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface CRSSiriPreferences : NSObject

@property (nonatomic) BOOL announceNotificationsInCarPlayTemporarilyDisabled;
@property (nonatomic) BOOL autoSendInCarPlayEnabled; // ivar: _autoSendInCarPlayEnabled
@property (nonatomic) BOOL autoSendInHeadphonesEnabled; // ivar: _autoSendInHeadphonesEnabled
@property (nonatomic) BOOL cachedAnnounceNotificationsInCarPlayTemporarilyDisabled; // ivar: _cachedAnnounceNotificationsInCarPlayTemporarilyDisabled
@property (nonatomic) BOOL cachedAutoSendInCarPlayEnabled; // ivar: _cachedAutoSendInCarPlayEnabled
@property (nonatomic) BOOL cachedAutoSendInHeadphonesEnabled; // ivar: _cachedAutoSendInHeadphonesEnabled
@property (nonatomic) NSInteger cachedCarPlayAnnounceEnablementType; // ivar: _cachedCarPlayAnnounceEnablementType
@property (nonatomic) BOOL cachedMainAutoSendEnabled; // ivar: _cachedMainAutoSendEnabled
@property (nonatomic) NSInteger carPlayAnnounceEnablementType;
@property (nonatomic) BOOL mainAutoSendEnabled; // ivar: _mainAutoSendEnabled
@property (readonly, nonatomic) CARObserverHashTable *observers; // ivar: _observers
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue


-(id)init;
-(void)_siriPreferencesDidChange;
-(void)_updateAnnounceNotificationsInCarPlayTemporarilyDisabled:(BOOL)arg0 ;
-(void)_updateAutoSendInCarPlayEnabled:(BOOL)arg0 ;
-(void)_updateAutoSendInHeadphonesEnabled:(BOOL)arg0 ;
-(void)_updateCarPlayAnnounceEnablementType:(NSInteger)arg0 ;
-(void)_updateMainAutoSendEnabled:(BOOL)arg0 ;
-(void)addObserver:(id)arg0 ;
-(void)clearAnnounceNotificationsInCarPlayTemporarilyDisabled;
-(void)removeObserver:(id)arg0 ;


@end


#endif