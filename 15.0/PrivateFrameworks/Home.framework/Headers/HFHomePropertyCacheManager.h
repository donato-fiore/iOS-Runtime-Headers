// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HFHOMEPROPERTYCACHEMANAGER_H
#define HFHOMEPROPERTYCACHEMANAGER_H

@class NSString, NSCache;
@protocol HFHomeObserver, HFHomeManagerObserver, HFAccessoryObserver;

#import <Foundation/Foundation.h>


@interface HFHomePropertyCacheManager : NSObject <HFHomeObserver, HFHomeManagerObserver, HFAccessoryObserver>



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
-(void)home:(id)arg0 didRemoveAccessory:(id)arg1 ;
-(void)homeKitDispatcher:(id)arg0 manager:(id)arg1 didChangeHome:(id)arg2 ;
-(void)homeManagerDidFinishInitialDatabaseLoad:(id)arg0 ;
-(void)homeManagerDidFinishUnknownChange:(id)arg0 ;


@end


#endif