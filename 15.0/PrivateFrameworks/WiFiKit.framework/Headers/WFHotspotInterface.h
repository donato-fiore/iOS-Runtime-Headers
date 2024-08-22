// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFHOTSPOTINTERFACE_H
#define WFHOTSPOTINTERFACE_H

@class NSString, SFRemoteHotspotSession, NSSet;
@protocol SFRemoteHotspotSessionDelegate, WFHotspotInterfaceDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface WFHotspotInterface : NSObject <SFRemoteHotspotSessionDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (weak) NSObject<WFHotspotInterfaceDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain) SFRemoteHotspotSession *hotspotSession; // ivar: _hotspotSession
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *internalQueue; // ivar: _internalQueue
@property (retain) NSSet *networks; // ivar: _networks
@property (nonatomic, getter=isScanning) BOOL scanning; // ivar: _scanning
@property (readonly) Class superclass;


-(id)enableHotspot:(id)arg0 error:(*id)arg1 ;
-(id)init;
-(void)_stopBrowsingRemoveCache:(BOOL)arg0 ;
-(void)session:(id)arg0 updatedFoundDevices:(id)arg1 ;
-(void)startBrowsing;
-(void)stopBrowsing;
-(void)updateNetworksWithHotspots:(id)arg0 ;


@end


#endif