// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NSURLSESSIONTASKTRANSACTIONMETRICS_H
#define NSURLSESSIONTASKTRANSACTIONMETRICS_H

@class NSUUID, NSDate, NSString, NSNumber;
@protocol NSSecureCoding, OS_nw_data_transfer_report, OS_nw_establishment_report;

#import <Foundation/Foundation.h>

#import "__CFN_TransactionMetrics.h"
#import "NSURLRequest.h"
#import "NSURLResponse.h"

@interface NSURLSessionTaskTransactionMetrics : NSObject <NSSecureCoding>

 {
    BOOL __forCache;
    __CFN_TransactionMetrics *__metrics;
}


@property (readonly) BOOL _apsRelayAttempted;
@property (readonly) BOOL _apsRelaySucceeded;
@property (readonly, copy) NSUUID *_connectionIdentifier;
@property (readonly) BOOL _connectionRace;
@property (nonatomic) ? _connectionTiming; // ivar: __connectionTiming
@property (nonatomic) BOOL _connectionTimingCached; // ivar: __connectionTimingCached
@property (readonly, retain) NSObject<OS_nw_data_transfer_report> *_dataTransferReport;
@property (readonly, retain) NSObject<OS_nw_establishment_report> *_establishmentReport;
@property (readonly, copy) NSDate *_firstByteReceivedDate;
@property (readonly, copy) NSString *_interfaceName;
@property (readonly, copy) NSString *_localAddressAndPort;
@property (readonly) BOOL _localCache;
@property (readonly) unsigned short _negotiatedTLSCipher;
@property (readonly) int _negotiatedTLSProtocol;
@property (readonly) int _privacyStance;
@property (readonly, copy) NSString *_proxyAddress;
@property (readonly, copy) NSNumber *_proxyPort;
@property (readonly) unsigned int _redirected;
@property (readonly, copy) NSString *_remoteAddressAndPort;
@property (readonly) NSInteger _requestHeaderBytesSent;
@property (readonly) NSInteger _responseBodyBytesDecoded;
@property (readonly) NSInteger _responseBodyBytesReceived;
@property (readonly) NSInteger _responseHeaderBytesReceived;
@property (readonly) BOOL _secureConnection;
@property (readonly) BOOL _serverPush;
@property (readonly) NSInteger _totalBytesReceived;
@property (readonly) NSInteger _totalBytesSent;
@property (readonly) BOOL _usesMultipath;
@property (readonly, getter=isCellular) BOOL cellular;
@property (readonly, copy) NSDate *connectEndDate;
@property (readonly, copy) NSDate *connectStartDate;
@property (readonly, getter=isConstrained) BOOL constrained;
@property (readonly) NSInteger countOfRequestBodyBytesBeforeEncoding;
@property (readonly) NSInteger countOfRequestBodyBytesSent;
@property (readonly) NSInteger countOfRequestHeaderBytesSent;
@property (readonly) NSInteger countOfResponseBodyBytesAfterDecoding;
@property (readonly) NSInteger countOfResponseBodyBytesReceived;
@property (readonly) NSInteger countOfResponseHeaderBytesReceived;
@property (readonly, copy) NSDate *domainLookupEndDate;
@property (readonly, copy) NSDate *domainLookupStartDate;
@property (readonly) NSInteger domainResolutionProtocol;
@property (readonly, getter=isExpensive) BOOL expensive;
@property (readonly, copy) NSDate *fetchStartDate;
@property (readonly, copy) NSString *localAddress;
@property (readonly, copy) NSNumber *localPort;
@property (readonly, getter=isMultipath) BOOL multipath;
@property (readonly, copy) NSNumber *negotiatedTLSCipherSuite;
@property (readonly, copy) NSNumber *negotiatedTLSProtocolVersion;
@property (readonly, copy) NSString *networkProtocolName;
@property (readonly, getter=isProxyConnection) BOOL proxyConnection;
@property (readonly, copy) NSString *remoteAddress;
@property (readonly, copy) NSNumber *remotePort;
@property (readonly, copy) NSURLRequest *request;
@property (readonly, copy) NSDate *requestEndDate;
@property (readonly, copy) NSDate *requestStartDate;
@property (readonly) NSInteger resourceFetchType;
@property (readonly, copy) NSURLResponse *response;
@property (readonly, copy) NSDate *responseEndDate;
@property (readonly, copy) NSDate *responseStartDate;
@property (readonly, getter=isReusedConnection) BOOL reusedConnection;
@property (readonly, copy) NSDate *secureConnectionEndDate;
@property (readonly, copy) NSDate *secureConnectionStartDate;


+(BOOL)supportsSecureCoding;
+(id)new;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif