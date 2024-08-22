// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NETWORKANALYTICSSTATERELAY_H
#define NETWORKANALYTICSSTATERELAY_H

@class NSMutableSet, NSSet, NSString, NSDate;

#import <Foundation/Foundation.h>

#import "NetworkAnalyticsQueueStatistics.h"

@interface NetworkAnalyticsStateRelay : NSObject {
    NSMutableSet *_defaultGateways;
}


@property BOOL active; // ivar: _active
@property int advisory; // ivar: _advisory
@property BOOL apsdFailure; // ivar: _apsdFailure
@property BOOL arpOut; // ivar: _arpOut
@property (readonly) BOOL constrained; // ivar: _constrained
@property (readonly) NSSet *defaultGateways;
@property BOOL dnsOut; // ivar: _dnsOut
@property (readonly) BOOL expensive; // ivar: _expensive
@property BOOL firstAttachment; // ivar: _firstAttachment
@property (readonly) unsigned char interface; // ivar: _interface
@property NSUInteger interfaceIndex; // ivar: _interfaceIndex
@property (retain) NSString *interfaceName; // ivar: _interfaceName
@property BOOL internetDnsOut; // ivar: _internetDnsOut
@property BOOL knowableSporadic; // ivar: _knowableSporadic
@property BOOL knownGood; // ivar: _knownGood
@property BOOL knownSporadic; // ivar: _knownSporadic
@property NSUInteger l2MetricsCount; // ivar: _l2MetricsCount
@property NSUInteger lastReportedL2TxFail; // ivar: _lastReportedL2TxFail
@property NSUInteger lastReportedL2TxFrames; // ivar: _lastReportedL2TxFrames
@property NSUInteger lastReportedL2TxRetry; // ivar: _lastReportedL2TxRetry
@property int lastReportedRxSignalStrength; // ivar: _lastReportedRxSignalStrength
@property int linkQuality; // ivar: _linkQuality
@property NSInteger loi; // ivar: _loi
@property BOOL lqmAsystole; // ivar: _lqmAsystole
@property (retain) NSDate *madePrimaryDate; // ivar: _madePrimaryDate
@property unsigned char powerCostDL; // ivar: _powerCostDL
@property unsigned char powerCostUL; // ivar: _powerCostUL
@property BOOL primary; // ivar: _primary
@property (retain) NetworkAnalyticsQueueStatistics *queueStatistics; // ivar: _queueStatistics
@property unsigned char radioTechnology; // ivar: _radioTechnology
@property (nonatomic) unsigned int rxSignalExemptions; // ivar: _rxSignalExemptions
@property BOOL rxSignalFullBars; // ivar: _rxSignalFullBars
@property BOOL rxSignalThresholded; // ivar: _rxSignalThresholded
@property unsigned char signalBars; // ivar: _signalBars
@property BOOL stuckDefRoute; // ivar: _stuckDefRoute
@property BOOL supportsIPv4; // ivar: _supportsIPv4
@property BOOL supportsIPv6; // ivar: _supportsIPv6
@property BOOL tcpExtraStatsPositive; // ivar: _tcpExtraStatsPositive
@property unsigned int tcpProgressHintsScore; // ivar: _tcpProgressHintsScore
@property BOOL txThresholded; // ivar: _txThresholded


+(BOOL)automaticallyNotifiesObserversForKey:(id)arg0 ;
-(id)description;
-(id)initForInternalType:(unsigned char)arg0 ;
-(id)valueForUndefinedKey:(id)arg0 ;
-(void)addDefaultGateway:(id)arg0 ;
-(void)populatePropertiesOnAWDMetric:(id)arg0 ingress:(BOOL)arg1 ;
-(void)removeAllDefaultGateways;
-(void)setValue:(id)arg0 forUndefinedKey:(id)arg1 ;
-(void)updateSignalStrength:(id)arg0 ;


@end


#endif