// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NPTMETRICRESULT_H
#define NPTMETRICRESULT_H

@class NSNumber, NSString, NSDictionary, NSError;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface NPTMetricResult : NSObject <NSCopying, NSSecureCoding>



@property (retain, nonatomic) NSNumber *appleClientASN; // ivar: _appleClientASN
@property (retain, nonatomic) NSString *appleClientASNCompany; // ivar: _appleClientASNCompany
@property (readonly, nonatomic) NSDictionary *asDictionary;
@property (retain, nonatomic) NSString *cdnpop; // ivar: _cdnpop
@property (retain, nonatomic) NSString *cdnuuid; // ivar: _cdnuuid
@property (retain, nonatomic) NSNumber *concurrentStreams; // ivar: _concurrentStreams
@property (nonatomic) CGFloat connectionTime; // ivar: _connectionTime
@property (nonatomic) CGFloat domainLookupTime; // ivar: _domainLookupTime
@property (retain, nonatomic) NSError *error; // ivar: _error
@property (retain, nonatomic) NSString *fetchDate; // ivar: _fetchDate
@property (nonatomic) NSUInteger fileSize; // ivar: _fileSize
@property (retain, nonatomic) NSString *interfaceName; // ivar: _interfaceName
@property (retain, nonatomic) NSString *interfaceServiceName; // ivar: _interfaceServiceName
@property (retain, nonatomic) NSString *isCellular; // ivar: _isCellular
@property (retain, nonatomic) NSString *isConstrained; // ivar: _isConstrained
@property (retain, nonatomic) NSString *isExpensive; // ivar: _isExpensive
@property (retain, nonatomic) NSString *isMultipath; // ivar: _isMultipath
@property (retain, nonatomic) NSString *isProxyConnection; // ivar: _isProxyConnection
@property (retain, nonatomic) NSString *isReusedConnection; // ivar: _isReusedConnection
@property (retain, nonatomic) NSString *localAddress; // ivar: _localAddress
@property (retain, nonatomic) NSNumber *localPort; // ivar: _localPort
@property (nonatomic) CGFloat maxSpeedObserved; // ivar: _maxSpeedObserved
@property (retain, nonatomic) NSNumber *negotiatedTLSCipherSuite; // ivar: _negotiatedTLSCipherSuite
@property (retain, nonatomic) NSNumber *negotiatedTLSProtocolVersion; // ivar: _negotiatedTLSProtocolVersion
@property (retain, nonatomic) NSString *protocolName; // ivar: _protocolName
@property (retain, nonatomic) NSString *remoteAddress; // ivar: _remoteAddress
@property (retain, nonatomic) NSNumber *remotePort; // ivar: _remotePort
@property (nonatomic) CGFloat requestTime; // ivar: _requestTime
@property (nonatomic) CGFloat requestToResponseTime; // ivar: _requestToResponseTime
@property (nonatomic) CGFloat responseTime; // ivar: _responseTime
@property (retain, nonatomic) NSNumber *responsiveness; // ivar: _responsiveness
@property (retain, nonatomic) NSNumber *responsivenessConfidence; // ivar: _responsivenessConfidence
@property (retain, nonatomic) NSNumber *responsivenessRating; // ivar: _responsivenessRating
@property (nonatomic) CGFloat secureConnectionTime; // ivar: _secureConnectionTime
@property (retain, nonatomic) NSString *server; // ivar: _server
@property (nonatomic) CGFloat speed; // ivar: _speed
@property (retain, nonatomic) NSNumber *speedConfidence; // ivar: _speedConfidence
@property (retain, nonatomic) NSNumber *speedRating; // ivar: _speedRating
@property (nonatomic) CGFloat stableSpeed; // ivar: _stableSpeed


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToMetricResult:(id)arg0 ;
-(CGFloat)timeIntervalSinceDateWithLogging:(id)arg0 startDate:(id)arg1 nameToLog:(id)arg2 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)populateWithMetrics:(id)arg0 ;
-(void)populateWithURLResponse:(id)arg0 ;


@end


#endif