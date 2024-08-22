// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HFHOMEPROPERTYCACHEMANAGER_H
#define HFHOMEPROPERTYCACHEMANAGER_H

@class NSMutableDictionary, NSString, NSCache;
@protocol HFHomeObserver, HFHomeManagerObserver, HFAccessoryObserver;

#import <Foundation/Foundation.h>


@interface HFHomePropertyCacheManager : NSObject <HFHomeObserver, HFHomeManagerObserver, HFAccessoryObserver>



@property (readonly, nonatomic) NSMutableDictionary *changedKeys; // ivar: _changedKeys
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSCache *objectCaches; // ivar: _objectCaches
@property (readonly) Class superclass;


+(id)sharedManager;
-(id)cachedValuesForObject:(id)arg0 ;
-(id)init;
-(id)valueForObject:(id)arg0 key:(id)arg1 invalidationReasons:(NSUInteger)arg2 recalculationBlock:(id)arg3 ;
-(void)_clearCachedValues;
-(void)accessoryDidUpdateServices:(id)arg0 ;
-(void)home:(id)arg0 didAddAccessory:(id)arg1 ;
-(void)home:(id)arg0 didAddService:(id)arg1 toServiceGroup:(id)arg2 ;
-(void)home:(id)arg0 didAddServiceGroup:(id)arg1 ;
-(void)home:(id)arg0 didRemoveAccessory:(id)arg1 ;
-(void)home:(id)arg0 didRemoveService:(id)arg1 fromServiceGroup:(id)arg2 ;
-(void)home:(id)arg0 didRemoveServiceGroup:(id)arg1 ;
-(void)homeKitDispatcher:(id)arg0 manager:(id)arg1 didChangeHome:(id)arg2 ;
-(void)homeManagerDidFinishInitialDatabaseLoad:(id)arg0 ;
-(void)homeManagerDidFinishUnknownChange:(id)arg0 ;
-(void)resetTrackingChangedKeys;
-(void)stopTrackingChangedKeys;


@end


#endif