// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PATHCODEC_H
#define PATHCODEC_H


#import <Foundation/Foundation.h>


@interface PathCodec : NSObject



+(id)dataForRoutingPathLeg:(*void)arg0 ;
+(struct RoutingPathLeg )compress:(*void)arg0 ;
+(struct RoutingPathLeg )decompress:(*void)arg0 ;
+(struct RoutingPathLeg )routingPathLegForData:(id)arg0 ;
+(void)compressInPlace:(*void)arg0 ;
+(void)decompressInPlace:(*void)arg0 ;


@end


#endif