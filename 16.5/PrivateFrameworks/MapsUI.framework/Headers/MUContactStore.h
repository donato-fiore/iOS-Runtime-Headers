// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MUCONTACTSTORE_H
#define MUCONTACTSTORE_H

@class CNContactStore, GEOObserverHashTable, geo_isolater;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface MUContactStore : NSObject {
    CNContactStore *_cnContactStore;
    BOOL _needsRefetch;
    NSObject<OS_dispatch_queue> *_queue;
    GEOObserverHashTable *_observers;
    geo_isolater *_propertyIsolator;
}


@property (readonly, nonatomic) CNContactStore *cnContactStore;
@property (readonly, nonatomic) BOOL hasContactAccess;
@property (readonly, nonatomic) BOOL isGuardianRestrictedCNContainer; // ivar: _isGuardianRestrictedCNContainer


-(BOOL)_calculateIfContainerIsGuardianRestricted;
-(id)init;
-(void)_contactStoreDidChange;
-(void)_invokeObservers;
-(void)fetchContactForPickerDisplayUsingContact:(id)arg0 callbackQueue:(id)arg1 completion:(id)arg2 ;
-(void)fetchStoredContactForMatchingMapItem:(id)arg0 callbackQueue:(id)arg1 completion:(id)arg2 ;
-(void)fetchUnifiedContactForIdentifier:(id)arg0 callbackQueue:(id)arg1 completion:(id)arg2 ;
-(void)registerObserver:(id)arg0 queue:(id)arg1 ;
-(void)removeMapsDataFromContact:(id)arg0 callbackQueue:(id)arg1 completion:(id)arg2 ;
-(void)unregisterObserver:(id)arg0 ;


@end


#endif