// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PTCINEMATOGRAPHYNETWORK_H
#define PTCINEMATOGRAPHYNETWORK_H

@class NSArray, NSMutableArray, NSMutableIndexSet, NSString;

#import <Foundation/Foundation.h>

#import "PTCinematographyDetection.h"
#import "PTCinematographyNetworkParameters.h"

@interface PTCinematographyNetwork : NSObject {
    NSInteger _step_i;
    *void _context;
    *void _plan;
    ? _network;
    ? _x_in;
    ? _hx_in;
    ? _cx_in;
    ? _mask_in;
    ? _hx_out;
    ? _cx_out;
    ? _pred_out;
}


@property (readonly) float expectedFPS;
@property (readonly) NSArray *inputSignals; // ivar: _inputSignals
@property (retain) PTCinematographyDetection *lastFocusDetection; // ivar: _lastFocusDetection
@property NSUInteger lastNetworkPredictionIndex; // ivar: _lastNetworkPredictionIndex
@property NSInteger lastNetworkPredictionTrackID; // ivar: _lastNetworkPredictionTrackID
@property (readonly) NSMutableArray *networkDetections; // ivar: _networkDetections
@property (readonly) PTCinematographyNetworkParameters *params; // ivar: _params
@property (readonly) NSMutableIndexSet *unusedIndexes; // ivar: _unusedIndexes
@property (readonly) NSString *versionString; // ivar: _versionString
@property (readonly) PTCinematographyDetection *zeroDisparityDetection; // ivar: _zeroDisparityDetection


+(BOOL)existsVersionString:(id)arg0 ;
+(id)defaultVersionString;
+(id)defaultVersionStringForDetectionModel:(NSUInteger)arg0 ;
+(id)earliestVersionString;
+(id)firstExistingVersion:(id)arg0 ;
+(id)latestVersionString;
-(BOOL)_allNetworkDetectionsAreStaleAtTime:(struct ? )arg0 ;
-(BOOL)_isNetworkCompatibleDetectionType:(NSUInteger)arg0 ;
-(BOOL)_loadEspressoNetwork:(id)arg0 ;
-(BOOL)_shouldIgnoreNetworkPredictionIndex:(NSUInteger)arg0 time:(struct ? )arg1 ;
-(BOOL)_shouldResetDetectionFromType:(NSUInteger)arg0 toType:(NSUInteger)arg1 ;
-(NSUInteger)_allocateNetworkDetectionIndex;
-(NSUInteger)_getLeastRecentNetworkDetectionIndex;
-(NSUInteger)_networkPredictionIndex;
-(id)_asCinematographyDictionary;
-(id)_detectionAtNetworkIndex:(NSUInteger)arg0 frameDetections:(id)arg1 ;
-(id)_initWithCinematographyDictionary:(id)arg0 ;
-(id)_initWithNetwork:(id)arg0 parameters:(id)arg1 ;
-(id)init;
-(id)initWithVersionString:(id)arg0 ;
-(id)stepWithFrameDetections:(id)arg0 ;
-(void)_debugLogAllNetworkInputs;
-(void)_debugLogNetworkInputs;
-(void)_debugLogNetworkOutputs;
-(void)_forgetNetworkDetectionAtIndex:(NSUInteger)arg0 ;
-(void)_forgetNetworkDetectionsOlderThan:(struct ? )arg0 ;
-(void)_setDetection:(id)arg0 asInputRow:(NSUInteger)arg1 time:(struct ? )arg2 missing:(BOOL)arg3 ;
-(void)_setMissingDetectionAtIndex:(NSUInteger)arg0 time:(struct ? )arg1 ;
-(void)_setNetworkDetection:(id)arg0 atIndex:(NSUInteger)arg1 time:(struct ? )arg2 ;
-(void)_setNetworkInputsFromNetworkDetections;
-(void)_updateLastNetworkPredictionIndex:(NSUInteger)arg0 time:(struct ? )arg1 ;
-(void)dealloc;


@end


#endif