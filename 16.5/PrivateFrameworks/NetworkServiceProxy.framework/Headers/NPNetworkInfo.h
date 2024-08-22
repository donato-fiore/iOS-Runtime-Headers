// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NPNETWORKINFO_H
#define NPNETWORKINFO_H

@class NSArray, NSDate, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "NPEdgeSelection.h"

@interface NPNetworkInfo : NSObject <NSSecureCoding>



@property (retain) NSArray *currentLatencyMap; // ivar: _currentLatencyMap
@property (retain) NSArray *edgeLatencies; // ivar: _edgeLatencies
@property (retain) NPEdgeSelection *edgeSelection; // ivar: _edgeSelection
@property BOOL hasIPv6; // ivar: _hasIPv6
@property BOOL isProbeInProgress; // ivar: _isProbeInProgress
@property NSInteger lastFallbackReason; // ivar: _lastFallbackReason
@property (retain, nonatomic) NSDate *lastUsed; // ivar: _lastUsed
@property (readonly, nonatomic) NSString *lastUsedDesc;
@property (retain, nonatomic) NSDate *lastVisited; // ivar: _lastVisited
@property (readonly, nonatomic) NSString *lastVisitedDesc;
@property (retain) NSDate *probeRateLimit; // ivar: _probeRateLimit


+(BOOL)supportsSecureCoding;
+(NSInteger)failureReasonToFallbackReason:(unsigned int)arg0 ;
-(BOOL)isLatency:(id)arg0 qualifiedForLatencyMap:(id)arg1 parameters:(struct networkParameters *)arg2 requireUniqueEdges:(BOOL)arg3 ;
-(NSInteger)compareLastVisited:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)handleTFOFailedForAddressFamily:(unsigned char)arg0 ;
-(void)mergeNewLatencies:(id)arg0 usingComparator:(id)arg1 ;
-(void)rebuildLatencyMapWithViewSize:(id)arg0 edgeCount:(NSUInteger)arg1 parameters:(struct networkParameters *)arg2 ;
-(void)resortEdgeLatenciesUsingComparator:(id)arg0 ;


@end


#endif