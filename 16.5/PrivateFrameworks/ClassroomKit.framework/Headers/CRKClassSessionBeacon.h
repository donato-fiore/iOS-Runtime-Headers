// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CRKCLASSSESSIONBEACON_H
#define CRKCLASSSESSIONBEACON_H

@class DMFControlSessionIdentifier, WPAdvertising, NSDictionary, NSString;
@protocol WPAdvertisingDelegate;

#import <Foundation/Foundation.h>


@interface CRKClassSessionBeacon : NSObject <WPAdvertisingDelegate>



@property (copy, nonatomic) DMFControlSessionIdentifier *advertisedIdentifier; // ivar: _advertisedIdentifier
@property (readonly, nonatomic) WPAdvertising *advertiser; // ivar: _advertiser
@property (nonatomic, getter=isAdvertising) BOOL advertising; // ivar: _advertising
@property (copy, nonatomic) NSDictionary *beaconAdvertisement; // ivar: _beaconAdvertisement
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned short flags; // ivar: _flags
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(void)advertiserDidUpdateState:(id)arg0 ;
-(void)advertiserPendingServiceOfType:(id)arg0 ;
-(void)startAdvertisingClassSessionWithIdentifier:(id)arg0 ;
-(void)startAdvertisingWithUUID:(id)arg0 IPAddress:(unsigned int)arg1 ;
-(void)stopAdvertising;


@end


#endif