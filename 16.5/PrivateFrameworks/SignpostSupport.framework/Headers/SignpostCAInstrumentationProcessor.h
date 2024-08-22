// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SIGNPOSTCAINSTRUMENTATIONPROCESSOR_H
#define SIGNPOSTCAINSTRUMENTATIONPROCESSOR_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>

#import "SignpostEvent.h"

@interface SignpostCAInstrumentationProcessor : NSObject

@property (copy, nonatomic) id *clientDrawableIntervalBlock; // ivar: _clientDrawableIntervalBlock
@property (copy, nonatomic) id *commitIntervalBlock; // ivar: _commitIntervalBlock
@property (copy, nonatomic) id *contextInfoBlock; // ivar: _contextInfoBlock
@property (retain, nonatomic) SignpostEvent *curFrameLifetimeBegin; // ivar: _curFrameLifetimeBegin
@property (nonatomic) unsigned int curFrameSeed; // ivar: _curFrameSeed
@property (retain, nonatomic) SignpostEvent *curLongFrameLifetimeBegin; // ivar: _curLongFrameLifetimeBegin
@property (copy, nonatomic) id *frameLatencyBlock; // ivar: _frameLatencyBlock
@property (copy, nonatomic) id *frameLifetimeBlock; // ivar: _frameLifetimeBlock
@property (readonly, nonatomic) NSMutableDictionary *frameSeedToAccumulatedRenderStateDict; // ivar: _frameSeedToAccumulatedRenderStateDict
@property (readonly, nonatomic) NSMutableDictionary *frameSeedToAccumulatedStateDict; // ivar: _frameSeedToAccumulatedStateDict
@property (copy, nonatomic) id *hidLatencyBlock; // ivar: _hidLatencyBlock
@property (copy, nonatomic) id *imageQueueSampleEventBlock; // ivar: _imageQueueSampleEventBlock
@property (nonatomic) BOOL isConciseFormat; // ivar: _isConciseFormat
@property (readonly, nonatomic) NSMutableDictionary *queueIDToSurfaceIDToClientDrawableIntervalDict; // ivar: _queueIDToSurfaceIDToClientDrawableIntervalDict
@property (copy, nonatomic) id *renderBlock; // ivar: _renderBlock
@property (copy, nonatomic) id *transactionLifetimeBlock; // ivar: _transactionLifetimeBlock


+(BOOL)filterPassesRequiredSCForCAInstrumentation:(id)arg0 ;
+(BOOL)filterPassesRequiredSCForCAMetalInstrumentation:(id)arg0 ;
+(void)addNeededMetalSCToAllowlist:(id)arg0 ;
+(void)addNeededSCToAllowlist:(id)arg0 ;
+(void)addNeededSCToWhitelist:(id)arg0 ;
-(BOOL)handleSignpostEvent:(id)arg0 ;
-(BOOL)handleSignpostInterval:(id)arg0 ;
-(id)_renderStateForFrameSeed:(unsigned int)arg0 ;
-(id)_stateForFrameSeed:(unsigned int)arg0 ;
-(id)init;
-(id)newConfiguredExtractor;
-(void)_cleanupStateWithSeed:(unsigned int)arg0 ;
-(void)_handleClientDrawableInterval:(id)arg0 ;
-(void)_handleContextInfo:(id)arg0 ;
-(void)_handleFrameLatencyInterval:(id)arg0 ;
-(void)_handleFrameLifetimeBegin:(id)arg0 ;
-(void)_handleFrameLifetimeInterval:(id)arg0 isLong:(BOOL)arg1 ;
-(void)_handleHIDInterval:(id)arg0 ;
-(void)_handleImageQueueSampleEvent:(id)arg0 ;
-(void)_handleLongFrameLifetimeBegin:(id)arg0 ;
-(void)_handleRenderInterval:(id)arg0 ;
-(void)handleDeviceReboot;
-(void)handleSignpostIntervalBegin:(id)arg0 ;


@end


#endif