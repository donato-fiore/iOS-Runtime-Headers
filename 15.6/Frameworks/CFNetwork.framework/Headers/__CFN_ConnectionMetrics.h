// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef __CFN_CONNECTIONMETRICS_H
#define __CFN_CONNECTIONMETRICS_H

@class NSDictionary, NSUUID, NSString;
@protocol NSSecureCoding, OS_nw_connection, OS_nw_endpoint, OS_nw_establishment_report;

#import <Foundation/Foundation.h>

#import "__CFN_SessionMetrics.h"

@interface __CFN_ConnectionMetrics : NSObject <NSSecureCoding>

 {
    os_unfair_lock_s connectionLock;
    BOOL _needsCachedTCPInfoAtEnd;
    BOOL _needsCachedSubflowCounts;
    BOOL _TLSConfigured;
    BOOL _cellular;
    BOOL _expensive;
    BOOL _constrained;
    BOOL _multipath;
    BOOL _usedTFO;
    BOOL _usedByTransaction;
    BOOL _coalesced;
    BOOL _discretionary;
    BOOL _dataBudgetingEnabled;
    unsigned short _negotiatedTLSProtocolVersion;
    unsigned short _negotiatedTLSCipherSuite;
    int _privacyStance;
    NSObject<OS_nw_connection> *_connection;
    __CFN_SessionMetrics *_sessionMetrics;
    NSDictionary *_cachedTCPInfoAtEnd;
    NSDictionary *_cachedSubflowCounts;
    NSUUID *_UUID;
    NSUInteger _identifier;
    NSUUID *_initiatingTransactionID;
    CGFloat _beginTime;
    CGFloat _establishTime;
    CGFloat _firstByteReceivedTime;
    CGFloat _endTime;
    NSObject<OS_nw_endpoint> *_endpoint;
    NSInteger _http3DiscoveryStatus;
    NSObject<OS_nw_endpoint> *_localEndpoint;
    NSObject<OS_nw_endpoint> *_remoteEndpoint;
    NSString *_interfaceName;
    NSString *_networkProtocolName;
    NSObject<OS_nw_establishment_report> *_establishmentReport;
    weak_ptr<TransportConnection> _transportConnection;
}


@property (readonly, nonatomic, getter=_daemon_isDataBudgetingEnabled) BOOL _daemon_dataBudgetingEnabled;
@property (readonly, nonatomic, getter=_daemon_isDiscretionary) BOOL _daemon_discretionary;
@property (readonly, copy, nonatomic) NSString *_daemon_interfaceName;


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif