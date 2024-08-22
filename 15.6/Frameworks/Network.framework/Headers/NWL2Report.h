// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NWL2REPORT_H
#define NWL2REPORT_H

@class NSString, NSMutableArray;

#import <Foundation/Foundation.h>


@interface NWL2Report : NSObject

@property (nonatomic) unsigned char cellularBand; // ivar: _cellularBand
@property (nonatomic) int cellularBandInfo; // ivar: _cellularBandInfo
@property (nonatomic) int cellularBandwidth; // ivar: _cellularBandwidth
@property (nonatomic) int cellularBars; // ivar: _cellularBars
@property (retain, nonatomic) NSString *cellularCellType; // ivar: _cellularCellType
@property (nonatomic) unsigned char cellularDualSimStatus; // ivar: _cellularDualSimStatus
@property (nonatomic) BOOL cellularKnownGood; // ivar: _cellularKnownGood
@property (nonatomic) int cellularLQM; // ivar: _cellularLQM
@property (nonatomic) int cellularMCC; // ivar: _cellularMCC
@property (nonatomic) int cellularMNC; // ivar: _cellularMNC
@property (nonatomic) unsigned int cellularMode; // ivar: _cellularMode
@property (nonatomic) int cellularOutrankPrimaryReason; // ivar: _cellularOutrankPrimaryReason
@property (nonatomic) NSUInteger cellularOutrankReasonFlags; // ivar: _cellularOutrankReasonFlags
@property (nonatomic) BOOL cellularOutranksWiFi; // ivar: _cellularOutranksWiFi
@property (nonatomic) int cellularPID; // ivar: _cellularPID
@property (nonatomic) unsigned char cellularRadioTechnology; // ivar: _cellularRadioTechnology
@property (nonatomic) int cellularSecondaryMcc; // ivar: _cellularSecondaryMcc
@property (nonatomic) int cellularSecondaryMnc; // ivar: _cellularSecondaryMnc
@property (nonatomic) int cellularTAC; // ivar: _cellularTAC
@property (nonatomic) int cellularUARFCN; // ivar: _cellularUARFCN
@property (retain, nonatomic) NSMutableArray *interfaceQueueStats; // ivar: _interfaceQueueStats
@property (nonatomic) BOOL wifiKnownGood; // ivar: _wifiKnownGood
@property (nonatomic) int wifiLQM; // ivar: _wifiLQM
@property (nonatomic) int wifiRSSI; // ivar: _wifiRSSI
@property (nonatomic) unsigned char wifiRadioTechnology; // ivar: _wifiRadioTechnology


-(id)awdReport;
-(id)description;


@end


#endif