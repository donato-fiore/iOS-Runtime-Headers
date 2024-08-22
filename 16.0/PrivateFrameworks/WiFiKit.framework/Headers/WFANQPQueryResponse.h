// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFANQPQUERYRESPONSE_H
#define WFANQPQUERYRESPONSE_H

@class NSString, NSArray, CWFScanResult;

#import <Foundation/Foundation.h>


@interface WFANQPQueryResponse : NSObject

@property (copy, nonatomic) NSString *bssid; // ivar: _bssid
@property (copy, nonatomic) NSArray *cellNetworkInfo; // ivar: _cellNetworkInfo
@property NSInteger channel; // ivar: _channel
@property (retain, nonatomic) NSArray *domains; // ivar: _domains
@property (copy, nonatomic) NSString *operatorName; // ivar: _operatorName
@property (retain, nonatomic) NSArray *roamingConsortium; // ivar: _roamingConsortium
@property (copy, nonatomic) CWFScanResult *scanResult; // ivar: _scanResult
@property (copy, nonatomic) NSString *ssid; // ivar: _ssid


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToWFANQPResponse:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithScanResult:(id)arg0 ANQPResponse:(id)arg1 ;


@end


#endif