// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MRAVCLUSTERCONTROLLER_H
#define MRAVCLUSTERCONTROLLER_H

@class NSHashTable, NSString;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface MRAVClusterController : NSObject {
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    NSHashTable *_observers;
    NSString *_localPairingIdentity;
    NSString *_clusterUID;
    NSString *_clusterLeaderUID;
    NSUInteger _clusterStatus;
    unsigned int _clusterType;
    int _airplayClusterStatusNotificationToken;
}


@property (readonly, nonatomic) NSString *clusterLeaderUID;
@property (readonly, nonatomic) NSUInteger clusterStatus;
@property (readonly, nonatomic) unsigned int clusterType;
@property (readonly, nonatomic) NSString *clusterUID;
@property (readonly, nonatomic) BOOL needsCommandRedirection;


+(BOOL)canBeClusterMember;
+(id)getClusterLeaderUID;
+(id)getClusterUID;
+(id)sharedController;
+(unsigned int)getClusterType;
-(NSUInteger)onQueue_computeClusterStatus;
-(id)init;
-(void)deviceInfoDidChangeNotification:(id)arg0 ;
-(void)getClusterLeaderEndpoint:(id)arg0 ;
-(void)getClusterStatus:(id)arg0 ;
-(void)onQueue_notifyObserversWithClusterStatus:(NSUInteger)arg0 ;
-(void)onQueue_notifyObserversWithClusterType:(unsigned int)arg0 ;
-(void)registerObserver:(id)arg0 ;
-(void)unregisterObserver:(id)arg0 ;
-(void)updateClusterInformation;


@end


#endif