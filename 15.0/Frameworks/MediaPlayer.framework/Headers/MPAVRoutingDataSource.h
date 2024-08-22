// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MPAVROUTINGDATASOURCE_H
#define MPAVROUTINGDATASOURCE_H

@class NSString;
@protocol NSObject, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface MPAVRoutingDataSource : NSObject <NSObject>

 {
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSObject<OS_dispatch_queue> *_workerQueue;
    NSString *_activeAudioCategory;
}


@property (readonly, copy, nonatomic) NSString *activeAudioCategory;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL devicePresenceDetected; // ivar: _devicePresenceDetected
@property (readonly, nonatomic) BOOL didFinishLoading; // ivar: _didFinishLoading
@property (nonatomic) NSInteger discoveryMode; // ivar: _discoveryMode
@property (nonatomic) NSInteger filterMode; // ivar: _filterMode
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL supportsMultipleSelection;
@property (nonatomic) unsigned int targetSessionID; // ivar: _targetSessionID


-(BOOL)routeIsLeaderOfEndpoint:(id)arg0 ;
-(id)_stateDumpObject;
-(id)getRoutesForCategory:(id)arg0 ;
-(id)init;
-(void)_activeAudioRouteDidChangeNotification:(id)arg0 ;
-(void)_externalScreenTypeDidChangeNotification:(id)arg0 ;
-(void)_reloadActiveAudioCategoryWithCompletion:(id)arg0 ;
-(void)_volumeControlAvailabilityDidChangeNotification:(id)arg0 ;
-(void)dealloc;
-(void)getExternalScreenTypeWithCompletion:(id)arg0 ;
-(void)getPickedRouteHasVolumeControlWithCompletion:(id)arg0 ;
-(void)setPickedRoute:(id)arg0 withPassword:(id)arg1 completion:(id)arg2 ;
-(void)unpickAirPlayAVRoutesWithCompletion:(id)arg0 ;


@end


#endif