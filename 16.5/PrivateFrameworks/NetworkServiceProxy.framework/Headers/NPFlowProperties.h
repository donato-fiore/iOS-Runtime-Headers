// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NPFLOWPROPERTIES_H
#define NPFLOWPROPERTIES_H

@class NWEndpoint, NSDictionary, NSData;

#import <Foundation/Foundation.h>

#import "NPTunnelTuscanyEndpoint.h"

@interface NPFlowProperties : NSObject

@property (nonatomic) int dataMode; // ivar: _dataMode
@property (retain, nonatomic) NWEndpoint *directEndpoint; // ivar: _directEndpoint
@property (nonatomic) BOOL disableIdleTimeout;
@property (nonatomic) BOOL enableNSP;
@property (nonatomic) CGFloat fallbackTimeout; // ivar: _fallbackTimeout
@property (nonatomic) unsigned int flags; // ivar: _flags
@property (nonatomic) unsigned int flowIdentifier; // ivar: _flowIdentifier
@property (nonatomic) BOOL isLoopback;
@property (retain, nonatomic) NSDictionary *replacementAddressMap; // ivar: _replacementAddressMap
@property (retain, nonatomic) NPTunnelTuscanyEndpoint *replacementEndpoint; // ivar: _replacementEndpoint
@property (retain, nonatomic) NSData *requestData; // ivar: _requestData
@property (nonatomic) NSUInteger serviceID; // ivar: _serviceID
@property (nonatomic) *NSUInteger timestamps; // ivar: _timestamps


-(id)copyTLVData;
-(id)initWithTLVData:(id)arg0 ;
-(void)dealloc;


@end


#endif