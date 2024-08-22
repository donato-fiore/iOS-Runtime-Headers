// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef OSPREYCONNECTIONMETRICS_H
#define OSPREYCONNECTIONMETRICS_H

@class NSURLSessionTaskTransactionMetrics, NSString, NSURL;

#import <Foundation/Foundation.h>


@interface OspreyConnectionMetrics : NSObject {
    NSURLSessionTaskTransactionMetrics *_metrics;
}


@property (readonly, nonatomic) CGFloat connectionEstablishmentTime;
@property (readonly, nonatomic) NSString *connectionMethod;
@property (readonly, nonatomic) NSUInteger connectionState; // ivar: _connectionState
@property (readonly, nonatomic) CGFloat dnsResolutionTime;
@property (readonly, nonatomic) CGFloat fetchStartToDomainLookupStartTime;
@property (readonly, nonatomic) CGFloat fetchStartToFirstByteTime;
@property (readonly, nonatomic) NSURL *requestURL;
@property (readonly, nonatomic) CGFloat secureConnectionTime;
@property (readonly, nonatomic) CGFloat tcpConnectTime;


-(id)initWithMetrics:(id)arg0 ;


@end


#endif