// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ASKNETWORKQUALITYINQUIRY_H
#define ASKNETWORKQUALITYINQUIRY_H

@class NSMutableSet, NSMutableArray, NWNetworkOfInterestManager;
@protocol NWNetworkOfInterestManagerDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface ASKNetworkQualityInquiry : NSObject <NWNetworkOfInterestManagerDelegate>



@property (readonly, nonatomic) NSMutableSet *knownNetworks; // ivar: _knownNetworks
@property (retain, nonatomic) NSMutableArray *knownNetworksReadyHandlers; // ivar: _knownNetworksReadyHandlers
@property (readonly, nonatomic) NWNetworkOfInterestManager *manager; // ivar: _manager
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue


-(BOOL)areKnownNetworksReady;
-(id)init;
-(void)dealloc;
-(void)didStartTrackingNOI:(id)arg0 ;
-(void)didStopTrackingAllNOIs:(id)arg0 ;
-(void)didStopTrackingNOI:(id)arg0 ;
-(void)drainKnownNetworksReadyHandlers;
-(void)investigateNetworksWithCompletionBlock:(id)arg0 ;
-(void)performWhenKnownNetworksReady:(id)arg0 ;


@end


#endif