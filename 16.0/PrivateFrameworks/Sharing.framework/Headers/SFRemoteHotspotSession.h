// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


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
-(void)enableHotspotForDevice:(id)arg0 withCompletionHandler:(id)arg1 ;
-(void)enableRemoteHotspotForDevice:(id)arg0 withCompletionHandler:(id)arg1 ;
-(void)startBrowsing;
-(void)stopBrowsing;
-(void)updateLowLatencyFilter:(id)arg0 isAddFilter:(BOOL)arg1 withCompletionHandler:(id)arg2 ;
-(void)updatedFoundDeviceList:(id)arg0 ;
-(void)xpcManagerConnectionInterrupted;


@end


#endif