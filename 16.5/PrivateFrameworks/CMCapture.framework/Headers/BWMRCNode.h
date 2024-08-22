// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


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
-(BOOL)lowPowerModeEnabled;
-(id)init;
-(id)mrcIdentifiers;
-(id)nodeSubType;
-(id)nodeType;
-(struct CGRect )rectOfInterest;
-(void)dealloc;
-(void)didReachEndOfDataForInput:(id)arg0 ;
-(void)prepareForCurrentConfigurationToBecomeLive;
-(void)renderSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 forInput:(id)arg1 ;
-(void)setLowPowerModeEnabled:(BOOL)arg0 ;
-(void)setMrcIdentifiers:(id)arg0 ;
-(void)setRectOfInterest:(struct CGRect )arg0 ;


@end


#endif