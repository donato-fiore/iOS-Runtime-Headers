// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BWMRCNODE_H
#define BWMRCNODE_H

@class NSArray, NSDictionary;
@protocol BWMetadataDetectedResultsObserver;


#import "BWNode.h"

@interface BWMRCNode : BWNode {
    *unk _createSampleBufferProcessorFunction;
    *OpaqueFigSampleBufferProcessor _sampleBufferProcessor;
    NSArray *_symbologiesArray;
    NSArray *_mrcIdentifiers;
    NSInteger _lastDetectedMRCCount;
    CGRect _rectOfInterest;
    os_unfair_lock_s _rectOfInterestLock;
    BOOL _hasPendingRectOfInterestUpdate;
    BOOL _lowPowerModeEnabled;
    NSDictionary *_metadataIdentifierToSymbologyDictionary;
}


@property (nonatomic) NSObject<BWMetadataDetectedResultsObserver> *detectedResultsObserver; // ivar: _detectedResultsObserver


+(void)initialize;
-(BOOL)_shouldEmitSBufForBarcodeCount:(NSInteger)arg0 originalPTS:(struct ? )arg1 ;
-(BOOL)lowPowerModeEnabled;
-(id)_newSymbologiesArrayFromIdentifiers:(id)arg0 ;
-(id)_pixelFormatsSupportedByBarcodeScanner;
-(id)init;
-(id)mrcIdentifiers;
-(id)nodeSubType;
-(id)nodeType;
-(int)_setupSampleBufferProcessor;
-(struct CGRect )rectOfInterest;
-(void)_teardownSampleBufferProcessor;
-(void)_updateInputRequirements;
-(void)dealloc;
-(void)didReachEndOfDataForInput:(id)arg0 ;
-(void)prepareForCurrentConfigurationToBecomeLive;
-(void)renderSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 forInput:(id)arg1 ;
-(void)setLowPowerModeEnabled:(BOOL)arg0 ;
-(void)setMrcIdentifiers:(id)arg0 ;
-(void)setRectOfInterest:(struct CGRect )arg0 ;


@end


#endif