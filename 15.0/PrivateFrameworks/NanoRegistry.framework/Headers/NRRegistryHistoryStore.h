// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NRREGISTRYHISTORYSTORE_H
#define NRREGISTRYHISTORYSTORE_H

@class NSMutableDictionary;


#import "NRRegistry.h"
#import "NRDeviceCollectionHistory.h"

@interface NRRegistryHistoryStore : NRRegistry {
    NSMutableDictionary *_diffIndexObservers;
    int _keyBagStatusChangedNotificationToken;
    NRDeviceCollectionHistory *_history;
}


@property (readonly, nonatomic) NRDeviceCollectionHistory *history;


+(id)sharedInstance;
-(id)addDiffIndexObserverWithWriteBlock:(id)arg0 ;
-(id)collection;
-(id)initWithParameters:(id)arg0 ;
-(void)_notifyDiffIndexObserversWithHistoryEntry:(id)arg0 deviceCollection:(id)arg1 secureProperties:(id)arg2 ;
-(void)_notifyObserversSecurePropertiesAreAvailableWithCollection:(id)arg0 secureProperties:(id)arg1 ;
-(void)dealloc;
-(void)grabHistoryWithReadBlock:(id)arg0 ;
-(void)grabHistoryWithWriteBlock:(id)arg0 ;
-(void)invalidate;
-(void)removeDiffIndexObserver:(id)arg0 ;
-(void)setCollection:(id)arg0 ;
-(void)syncGrabHistoryWithReadBlock:(id)arg0 ;
-(void)syncGrabHistoryWithWriteBlock:(id)arg0 ;


@end


#endif