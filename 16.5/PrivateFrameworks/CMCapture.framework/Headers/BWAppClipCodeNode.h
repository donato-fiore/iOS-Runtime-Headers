// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BWAPPCLIPCODENODE_H
#define BWAPPCLIPCODENODE_H

@protocol OS_dispatch_queue, BWMetadataDetectedResultsObserver;


#import "BWNode.h"
#import "FigWeakReference.h"

@interface BWAppClipCodeNode : BWNode {
    *AppC3DSession _appClipCodeSession;
    BOOL _appC3DAvailable;
    NSObject<OS_dispatch_queue> *_processingQueue;
    FigWeakReference *_weakSelf;
    BOOL _haveInputTransform;
    int _rotationDegrees;
    BOOL _mirroringHorizontal;
    BOOL _mirroringVertical;
    NSInteger _lastAppClipCodeCount;
}


@property (nonatomic) NSObject<BWMetadataDetectedResultsObserver> *detectedResultsObserver; // ivar: _detectedResultsObserver


+(void)initialize;
-(id)initWithProcessingQueuePriority:(unsigned int)arg0 ;
-(id)nodeSubType;
-(id)nodeType;
-(void)dealloc;
-(void)didReachEndOfDataForInput:(id)arg0 ;
-(void)prepareForCurrentConfigurationToBecomeLive;
-(void)renderSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 forInput:(id)arg1 ;


@end


#endif