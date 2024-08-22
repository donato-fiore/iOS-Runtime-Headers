// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WCAFETCHBEACONDBPARAMETERS_H
#define WCAFETCHBEACONDBPARAMETERS_H

@class NSString;

#import <Foundation/Foundation.h>


@interface WCAFetchBeaconDBParameters : NSObject

@property (nonatomic) BOOL QBSS_Load; // ivar: _QBSS_Load
@property (nonatomic) BOOL UAPSD; // ivar: _UAPSD
@property (nonatomic) float antennas11c; // ivar: _antennas11c
@property (retain, nonatomic) NSString *antennas11n; // ivar: _antennas11n
@property (nonatomic) NSInteger beaconInterval; // ivar: _beaconInterval
@property (nonatomic) BOOL has_11krm; // ivar: _has_11krm
@property (nonatomic) float max_rates; // ivar: _max_rates
@property (retain, nonatomic) NSString *wlanAsel; // ivar: _wlanAsel
@property (retain, nonatomic) NSString *wlanFixedCapabilities; // ivar: _wlanFixedCapabilities
@property (retain, nonatomic) NSString *wlanHTAmpduparam; // ivar: _wlanHTAmpduparam
@property (retain, nonatomic) NSString *wlanHTCapabilities; // ivar: _wlanHTCapabilities
@property (retain, nonatomic) NSString *wlanHtexCapabilities; // ivar: _wlanHtexCapabilities
@property (nonatomic) float wlanTimDtimPeriod; // ivar: _wlanTimDtimPeriod
@property (retain, nonatomic) NSString *wlanTxbf; // ivar: _wlanTxbf
@property (retain, nonatomic) NSString *wlanVhtCapabilities; // ivar: _wlanVhtCapabilities
@property (retain, nonatomic) NSString *wlanWfaIeWmeQosInfo; // ivar: _wlanWfaIeWmeQosInfo


-(void)fetchWithCompletion:(id)arg0 ;


@end


#endif