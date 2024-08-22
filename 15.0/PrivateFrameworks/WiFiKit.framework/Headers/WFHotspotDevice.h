// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFHOTSPOTDEVICE_H
#define WFHOTSPOTDEVICE_H

@class NSString, SFRemoteHotspotDevice;
@protocol WFNetworkListRecord;

#import <Foundation/Foundation.h>


@interface WFHotspotDevice : NSObject <WFNetworkListRecord>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) SFRemoteHotspotDevice *hotspotDevice; // ivar: _hotspotDevice
@property (readonly, nonatomic) NSString *ssid;
@property (readonly) Class superclass;


-(BOOL)_isEqualToHotspotDevice:(id)arg0 ;
-(BOOL)_isEqualToNetwork:(id)arg0 ;
-(BOOL)canBeDisplayedAsCurrent;
-(BOOL)iOSHotspot;
-(BOOL)isAdhoc;
-(BOOL)isEnterprise;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEquivalentRecord:(id)arg0 ;
-(BOOL)isHotspot20;
-(BOOL)isInstantHotspot;
-(BOOL)isKnown;
-(BOOL)isPopular;
-(BOOL)isSecure;
-(BOOL)isUnconfiguredAccessory;
-(BOOL)prominentDisplay;
-(NSInteger)rssi;
-(NSInteger)securityMode;
-(NSUInteger)signalBars;
-(NSUInteger)uniqueIdentifier;
-(float)scaledRSSI;
-(id)hotspotBatteryLife;
-(id)hotspotCellularProtocol;
-(id)hotspotSignalStrength;
-(id)init;
-(id)initWithHotspotDevice:(id)arg0 ;
-(id)subtitle;
-(id)title;
-(void)setScaledRSSI:(float)arg0 ;


@end


#endif