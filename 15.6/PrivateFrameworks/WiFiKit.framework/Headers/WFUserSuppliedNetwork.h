// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFUSERSUPPLIEDNETWORK_H
#define WFUSERSUPPLIEDNETWORK_H

@class NSString;
@protocol WFNetworkListRecord;

#import <Foundation/Foundation.h>


@interface WFUserSuppliedNetwork : NSObject <WFNetworkListRecord>



@property (nonatomic) *__SecIdentity TLSIdentity; // ivar: _TLSIdentity
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *password; // ivar: _password
@property (nonatomic) NSInteger security; // ivar: _security
@property (copy, nonatomic) NSString *ssid; // ivar: _ssid
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *username; // ivar: _username


-(BOOL)canBeDisplayedAsCurrent;
-(BOOL)iOSHotspot;
-(BOOL)isAdhoc;
-(BOOL)isEnterprise;
-(BOOL)isInstantHotspot;
-(BOOL)isSecure;
-(BOOL)isUnconfiguredAccessory;
-(NSInteger)rssi;
-(NSUInteger)signalBars;
-(float)scaledRSSI;
-(id)hotspotBatteryLife;
-(id)hotspotCellularProtocol;
-(id)hotspotSignalStrength;
-(id)subtitle;
-(id)title;


@end


#endif