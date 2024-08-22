// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NPEDGELATENCY_H
#define NPEDGELATENCY_H

@class NSString, NSNumber, NSDate, NWTCPConnection, NWEndpoint;
@protocol NSSecureCoding, OS_dispatch_source;

#import <Foundation/Foundation.h>

#import "NPAverage.h"

@interface NPEdgeLatency : NSObject <NSSecureCoding>



@property NSInteger TFOStatus; // ivar: _TFOStatus
@property (readonly) NSString *TFOStatusString;
@property (retain) NSNumber *addressFamily; // ivar: _addressFamily
@property (readonly) NSString *addressFamilyString;
@property (readonly) NSString *connectionParametersString;
@property (retain) NSDate *creationDate; // ivar: _creationDate
@property (retain) NSNumber *currentTimeout; // ivar: _currentTimeout
@property NSUInteger edgeIndex; // ivar: _edgeIndex
@property NSInteger interfaceType; // ivar: _interfaceType
@property BOOL isObserving; // ivar: _isObserving
@property (readonly) BOOL isTFOEnabled;
@property BOOL needReprobe; // ivar: _needReprobe
@property BOOL passedReprobeThreshold; // ivar: _passedReprobeThreshold
@property (copy) id *probeCompletionHandler; // ivar: _probeCompletionHandler
@property (retain) NWTCPConnection *probeConnection; // ivar: _probeConnection
@property NSInteger probeCount; // ivar: _probeCount
@property (retain) NWEndpoint *probeEndpoint; // ivar: _probeEndpoint
@property BOOL probeNoTFOCookie; // ivar: _probeNoTFOCookie
@property BOOL probeTFO; // ivar: _probeTFO
@property (retain) NSObject<OS_dispatch_source> *probeTimer; // ivar: _probeTimer
@property NSInteger reprobeCount; // ivar: _reprobeCount
@property (retain) NPAverage *roundTripAverage; // ivar: _roundTripAverage
@property (retain) NPAverage *roundTripAverageObserved; // ivar: _roundTripAverageObserved
@property NSUInteger roundTripTime; // ivar: _roundTripTime


+(BOOL)supportsSecureCoding;
-(BOOL)fillTestLatency;
-(BOOL)isComplete:(BOOL)arg0 ;
-(BOOL)isMatched:(id)arg0 ;
-(BOOL)isMatched:(id)arg0 parameters:(struct networkParameters *)arg1 ;
-(NSUInteger)getRoundTripSample:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithProbeEndpoint:(id)arg0 probeTFO:(BOOL)arg1 ;
-(void)addRoundTripSample:(NSUInteger)arg0 ;
-(void)addRoundTripSampleObserved:(NSUInteger)arg0 ;
-(void)addRoundTripSamples:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)measureLatencyWithTimeout:(id)arg0 completionHandler:(id)arg1 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)pingPong;


@end


#endif