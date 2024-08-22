// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBSYSTEMSTATUSWIFIDATAPROVIDER_H
#define SBSYSTEMSTATUSWIFIDATAPROVIDER_H

@class NSString, STWifiStatusDomainPublisher;
@protocol BSInvalidatable;

#import <Foundation/Foundation.h>


@interface SBSystemStatusWifiDataProvider : NSObject <BSInvalidatable>



@property (nonatomic) *void cellularFallbackWatcher; // ivar: _cellularFallbackWatcher
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isFallingBackToCellular) BOOL fallingBackToCellular; // ivar: _fallingBackToCellular
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (nonatomic, getter=isWifiActive) BOOL wifiActive; // ivar: _wifiActive
@property (readonly, nonatomic) STWifiStatusDomainPublisher *wifiDataPublisher; // ivar: _wifiDataPublisher


-(id)init;
-(void)_registerForNotifications;
-(void)_updateData;
-(void)_updateWifiActive;
-(void)dealloc;
-(void)invalidate;


@end


#endif