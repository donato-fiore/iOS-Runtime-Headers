// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _NSURLSESSIONCONNECTIONESTABLISHPROPERTIES_H
#define _NSURLSESSIONCONNECTIONESTABLISHPROPERTIES_H

@class NSString, NSNumber;
@protocol NSSecureCoding, OS_nw_establishment_report, OS_nw_endpoint;

#import <Foundation/Foundation.h>

#import "__CFN_ConnectionMetrics.h"

@interface _NSURLSessionConnectionEstablishProperties : NSObject <NSSecureCoding>

 {
    __CFN_ConnectionMetrics *__metrics;
}


@property (readonly, nonatomic, getter=isCellular) BOOL cellular;
@property (readonly, nonatomic, getter=isConstrained) BOOL constrained;
@property (readonly, retain, nonatomic) NSObject<OS_nw_establishment_report> *establishmentReport;
@property (readonly, nonatomic, getter=isExpensive) BOOL expensive;
@property (readonly, copy, nonatomic) NSString *interfaceName;
@property (readonly, nonatomic) NSObject<OS_nw_endpoint> *localEndpoint;
@property (readonly, nonatomic, getter=isMultipath) BOOL multipath;
@property (readonly, copy, nonatomic) NSNumber *negotiatedTLSCipherSuite;
@property (readonly, copy, nonatomic) NSNumber *negotiatedTLSProtocolVersion;
@property (readonly, copy, nonatomic) NSString *networkProtocolName;
@property (readonly, nonatomic) NSObject<OS_nw_endpoint> *remoteEndpoint;
@property (readonly, nonatomic) BOOL usedTFO;


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif