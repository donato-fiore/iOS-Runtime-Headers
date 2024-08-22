// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef RESHAREDLOCATIONRELEVANCEPROVIDERMANAGER_H
#define RESHAREDLOCATIONRELEVANCEPROVIDERMANAGER_H

@class CLLocation, NSString;
@protocol REEngineLocationManagerObserver, RESharedLocationRelevanceProviderManagerProperties;


#import "RERelevanceProviderManager.h"

@interface RESharedLocationRelevanceProviderManager : RERelevanceProviderManager <REEngineLocationManagerObserver, RESharedLocationRelevanceProviderManagerProperties>

 {
    CLLocation *_lastLocationUpdate;
}


@property (readonly, nonatomic) CLLocation *currentLocation;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)_wantsSeperateRelevanceQueue;
-(void)_queue_loadLocation:(id)arg0 ;
-(void)locationManagerDidUpdateLocation:(id)arg0 ;
-(void)pause;
-(void)resume;


@end


#endif