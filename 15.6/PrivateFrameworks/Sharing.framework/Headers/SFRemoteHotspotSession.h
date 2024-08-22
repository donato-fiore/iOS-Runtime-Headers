// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SFREMOTEHOTSPOTSESSION_H
#define SFREMOTEHOTSPOTSESSION_H

@class NSString;
@protocol SFRemoteHotspotClient, SFCompanionXPCManagerObserver, SFRemoteHotspotProtocol, SFRemoteHotspotSessionDelegate;

#import <Foundation/Foundation.h>


@interface SFRemoteHotspotSession : NSObject <SFRemoteHotspotClient, SFCompanionXPCManagerObserver>



@property BOOL browsing; // ivar: _browsing
@property (retain) NSObject<SFRemoteHotspotProtocol> *connectionProxy; // ivar: _connectionProxy
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SFRemoteHotspotSessionDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(void)addDedicatedCellularBearer:(id)arg0 withCompletionHandler:(id)arg1 ;
-(void)enableHotspotForDevice:(id)arg0 withCompletionHandler:(id)arg1 ;
-(void)enableRemoteHotspotForDevice:(id)arg0 withCompletionHandler:(id)arg1 ;
-(void)removeDedicatedCellularBearerWithCompletion:(id)arg0 ;
-(void)startBrowsing;
-(void)stopBrowsing;
-(void)updatedFoundDeviceList:(id)arg0 ;
-(void)xpcManagerConnectionInterrupted;


@end


#endif