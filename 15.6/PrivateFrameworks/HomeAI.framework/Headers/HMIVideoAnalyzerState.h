// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMIVIDEOANALYZERSTATE_H
#define HMIVIDEOANALYZERSTATE_H

@class HMFObject, NSDictionary, NSString, NSUUID, NSArray;
@protocol HMFLogging;


#import "HMIVideoAnalyzerConfiguration.h"
#import "HMIVideoAnalyzerDynamicConfiguration.h"

@interface HMIVideoAnalyzerState : HMFObject <HMFLogging>



@property (readonly) NSDictionary *JSONObject;
@property (readonly) CGFloat analysisFPS; // ivar: _analysisFPS
@property (readonly) CGFloat averageAnalysisTime; // ivar: _averageAnalysisTime
@property (readonly) CGFloat bufferFillRatio; // ivar: _bufferFillRatio
@property (readonly) NSUInteger bufferSize; // ivar: _bufferSize
@property (readonly) HMIVideoAnalyzerConfiguration *configuration; // ivar: _configuration
@property (readonly) ? currentPTS; // ivar: _currentPTS
@property (readonly, copy) NSString *debugDescription;
@property (readonly) CGFloat delay; // ivar: _delay
@property (readonly, copy) NSString *description;
@property (readonly) HMIVideoAnalyzerDynamicConfiguration *dynamicConfiguration; // ivar: _dynamicConfiguration
@property (readonly) BOOL encode; // ivar: _encode
@property (readonly) BOOL encoder; // ivar: _encoder
@property (readonly) NSUInteger hash;
@property (readonly) NSUUID *identifier; // ivar: _identifier
@property (readonly) BOOL monitored; // ivar: _monitored
@property (readonly) NSUInteger numDecodedSamples; // ivar: _numDecodedSamples
@property (readonly) NSUInteger numDidAnalyzeFragments; // ivar: _numDidAnalyzeFragments
@property (readonly) NSUInteger numDidAnalyzeFrames; // ivar: _numDidAnalyzeFrames
@property (readonly) NSUInteger numDidAnalyzePackages; // ivar: _numDidAnalyzePackages
@property (readonly) NSUInteger numDidCreateTimelapseFragments; // ivar: _numDidCreateTimelapseFragments
@property (readonly) Class superclass;
@property (readonly) NSArray *tableColumns;
@property (readonly) NSArray *tableValues;
@property (readonly) CGFloat timeSinceAnalyzerStarted; // ivar: _timeSinceAnalyzerStarted
@property (readonly) CGFloat timeSinceLastFragmentWasReceived; // ivar: _timeSinceLastFragmentWasReceived


+(id)logCategory;
-(id)initWithConfiguration:(id)arg0 dynamicConfiguration:(id)arg1 identifier:(id)arg2 monitored:(BOOL)arg3 analysisFPS:(CGFloat)arg4 timeSinceAnalyzerStarted:(CGFloat)arg5 timeSinceLastFragmentWasReceived:(CGFloat)arg6 bufferFillRatio:(CGFloat)arg7 bufferSize:(NSUInteger)arg8 delay:(CGFloat)arg9 currentPTS:(struct ? )arg10 numDecodedSamples:(NSUInteger)arg11 numDidAnalyzeFrames:(NSUInteger)arg12 numDidAnalyzeFragments:(NSUInteger)arg13 numDidAnalyzePackages:(NSUInteger)arg14 numDidCreateTimelapseFragments:(NSUInteger)arg15 averageAnalysisTime:(CGFloat)arg16 encode:(BOOL)arg17 encoder:(BOOL)arg18 ;
-(void)check;


@end


#endif