// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TVRCRAPPORTDEVICEQUERY_H
#define _TVRCRAPPORTDEVICEQUERY_H

@class RPCompanionLinkClient, NSMutableDictionary;
@protocol _TVRCRapportDeviceQueryDelegate;

#import <Foundation/Foundation.h>

#import "_TVRCRapportDeviceManager.h"
#import "_TVRCExpiringStore.h"

@interface _TVRCRapportDeviceQuery : NSObject

@property (retain, nonatomic) RPCompanionLinkClient *companionLinkClient; // ivar: _companionLinkClient
@property (weak, nonatomic) NSObject<_TVRCRapportDeviceQueryDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) _TVRCRapportDeviceManager *deviceManager; // ivar: _deviceManager
@property (retain, nonatomic) _TVRCExpiringStore *expiringStore; // ivar: _expiringStore
@property (retain, nonatomic) NSMutableDictionary *wrapperToIdentifierMapping; // ivar: _wrapperToIdentifierMapping


-(BOOL)_shouldReportDevice:(id)arg0 ;
-(id)_wrapperForDevice:(id)arg0 ;
-(id)init;
-(void)_deviceFound:(id)arg0 ;
-(void)_deviceLost:(id)arg0 ;
-(void)_disconnectAllDevices;
-(void)dealloc;
-(void)start;
-(void)stop;


@end


#endif