// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NPTUNNELTUSCANYENDPOINT_H
#define NPTUNNELTUSCANYENDPOINT_H

@class NWEndpoint, NSArray, NSData;



@interface NPTunnelTuscanyEndpoint : NWEndpoint

@property (readonly) NSArray *hosts; // ivar: _hosts
@property (readonly) NSData *hostsData; // ivar: _hostsData


+(BOOL)supportsResolverCallback;
+(BOOL)supportsSecureCoding;
+(id)encodeHosts:(id)arg0 ;
+(unsigned int)endpointType;
-(id)copyHostsWithPort:(id)arg0 ;
-(id)description;
-(id)encodedData;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithEncodedData:(id)arg0 ;
-(id)initWithHosts:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)resolveEndpointWithCompletionHandler:(id)arg0 ;


@end


#endif