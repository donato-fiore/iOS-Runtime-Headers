// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CHSCHRONOSERVICESTOOLCONNECTION_H
#define CHSCHRONOSERVICESTOOLCONNECTION_H

@class BSServiceConnection, NSMutableSet, NSString;
@protocol CHSChronoToolServiceClient, CHSChronoToolServiceServer, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface CHSChronoServicesToolConnection : NSObject <CHSChronoToolServiceClient, CHSChronoToolServiceServer>

 {
    NSObject<OS_dispatch_queue> *_queue;
    BSServiceConnection *_queue_connection;
    NSMutableSet *_queue_clients;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedInstance;
-(id)_init;
-(id)_queue_remoteTarget;
-(id)init;
-(void)_queue_addClient:(id)arg0 ;
-(void)_queue_createConnection;
-(void)_queue_invalidateConnection;
-(void)_queue_removeClient:(id)arg0 ;
-(void)addClient:(id)arg0 ;
-(void)cacheDescriptorsForBundleIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)expireLocationGracePeriods;
-(void)extensionInfo:(id)arg0 ;
-(void)extensionInfoForBundleIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)fetchStateForItemWithIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)fetchStateWithCompletion:(id)arg0 ;
-(void)listStateCaptureIdentifiersWithCompletion:(id)arg0 ;
-(void)reloadTimelinesOfKind:(id)arg0 containedIn:(id)arg1 reason:(id)arg2 completion:(id)arg3 ;
-(void)removeClient:(id)arg0 ;
-(void)resetCaches:(NSUInteger)arg0 completion:(id)arg1 ;
-(void)timelineForWidgetKey:(id)arg0 completion:(id)arg1 ;
-(void)widgetsWithTimelines:(id)arg0 ;


@end


#endif