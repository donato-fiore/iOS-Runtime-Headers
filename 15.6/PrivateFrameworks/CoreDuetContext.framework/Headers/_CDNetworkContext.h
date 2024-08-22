// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _CDNETWORKCONTEXT_H
#define _CDNETWORKCONTEXT_H


#import <Foundation/Foundation.h>


@interface _CDNetworkContext : NSObject



+(BOOL)cellInterfaceUp:(id)arg0 ;
+(BOOL)inexpensiveNetworkingAvailable:(id)arg0 ;
+(BOOL)networkingAvailable:(id)arg0 ;
+(NSInteger)cellDownloadCost:(id)arg0 ;
+(NSInteger)cellInterfaceClass:(id)arg0 ;
+(NSInteger)cellQuality:(id)arg0 ;
+(NSInteger)cellUploadCost:(id)arg0 ;
+(NSInteger)interfaceClassForPath:(id)arg0 inContext:(id)arg1 ;
+(NSInteger)qualityForPath:(id)arg0 inContext:(id)arg1 ;
+(NSInteger)wifiInterfaceClass:(id)arg0 ;
+(NSInteger)wifiQuality:(id)arg0 ;
+(NSInteger)wiredInterfaceClass:(id)arg0 ;
+(NSInteger)wiredQuality:(id)arg0 ;
+(id)connectionQualityKey;
+(id)downloadPowerCostKey;
+(id)interfaceClassKey;
+(id)interfaceUpKey;
+(id)keyPathForCellConnectionStatus;
+(id)keyPathForWiFiConnectionStatus;
+(id)keyPathForWiredConnectionStatus;
+(id)loiKey;
+(id)predictionKey;
+(id)uploadPowerCostKey;


@end


#endif