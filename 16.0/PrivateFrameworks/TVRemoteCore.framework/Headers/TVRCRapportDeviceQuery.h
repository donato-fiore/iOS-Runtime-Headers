// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TVRCRAPPORTDEVICEQUERY_H
#define TVRCRAPPORTDEVICEQUERY_H

@class RPCompanionLinkClient, NSMutableDictionary;
@protocol TVRCRapportDeviceQueryDelegate;

#import <Foundation/Foundation.h>

#import "_TVRCRapportDeviceManager.h"
#import "_TVRCExpiringStore.h"

@interface TVRCRapportDeviceQuery : NSObject

@property (retain, nonatomic) RPCompanionLinkClient *companionLinkClient; // ivar: _companionLinkClient
@property (weak, nonatomic) NSObject<TVRCRapportDeviceQueryDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) _TVRCRapportDeviceManager *deviceManager; // ivar: _deviceManager
@property (retain, nonatomic) _TVRCExpiringStore *expiringStore; // ivar: _expiringStore
@property (retain, nonatomic) NSMutableDictionary *wrapperToIdentifierMapping; // ivar: _wrapperToIdentifierMapping


-(BOOL)_shouldReportDevice:(id)arg0 ;
-(id)_wrapperForDevice:(id)arg0 ;
-(id)init;
-(void)_deviceFound:(id)arg0 ;
-(void)_deviceLost:(id)arg0 ;
-(void)_disconnectAllDevices;
-(void)_disconnectDevice:(id)arg0 ;
-(void)_mdmConfigChanged:(id)arg0 ;
-(void)dealloc;
-(void)start;
-(void)stop;


@end


#endif