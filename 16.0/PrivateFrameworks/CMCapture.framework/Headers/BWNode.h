// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BWNODE_H
#define BWNODE_H

@class NSMutableArray, NSArray, NSString;
@protocol BWNodeRenderDelegate;

#import <Foundation/Foundation.h>

#import "BWNodeInput.h"
#import "BWNodeOutput.h"
#import "BWGraph.h"

@interface BWNode : NSObject {
    NSMutableArray *_inputs;
    NSMutableArray *_outputs;
    BOOL _singleInput;
    BOOL _singleOutput;
    NSInteger _configurationID;
    BWNodeInput *_input;
    BWNodeOutput *_output;
}


@property (nonatomic) int deferredPreparePriority; // ivar: _deferredPreparePriority
@property (nonatomic) BWGraph *graph; // ivar: _graph
@property (readonly, nonatomic) BOOL hasNonLiveConfigurationChanges;
@property (readonly) BWNodeInput *input;
@property (readonly) NSArray *inputs;
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (readonly) NSString *nodeSubType;
@property (readonly) NSString *nodeType;
@property (readonly) BWNodeOutput *output;
@property (readonly) NSArray *outputs;
@property (nonatomic) NSObject<BWNodeRenderDelegate> *renderDelegate; // ivar: _renderDelegate
@property (copy, nonatomic) NSString *subgraphName; // ivar: _subgraphName
@property (nonatomic) BOOL supportsConcurrentLiveInputCallbacks; // ivar: _supportsConcurrentLiveInputCallbacks
@property (nonatomic) BOOL supportsLiveReconfiguration; // ivar: _supportsLiveReconfiguration


+(void)initialize;
-(BOOL)allInputsHaveReachedState:(int)arg0 ;
-(NSInteger)configurationID;
-(id)description;
-(id)init;
-(void)_handleMessage:(id)arg0 fromInput:(id)arg1 ;
-(void)addInput:(id)arg0 ;
-(void)addOutput:(id)arg0 ;
-(void)configurationWithID:(NSInteger)arg0 updatedFormat:(id)arg1 didBecomeLiveForInput:(id)arg2 ;
-(void)dealloc;
-(void)didReachEndOfDataForInput:(id)arg0 ;
-(void)didSelectFormat:(id)arg0 forInput:(id)arg1 ;
-(void)didSelectFormat:(id)arg0 forInput:(id)arg1 forAttachedMediaKey:(id)arg2 ;
-(void)didSelectFormat:(id)arg0 forOutput:(id)arg1 ;
-(void)didSelectFormat:(id)arg0 forOutput:(id)arg1 forAttachedMediaKey:(id)arg2 ;
-(void)handleDroppedSample:(id)arg0 forInput:(id)arg1 ;
-(void)handleNodeError:(id)arg0 forInput:(id)arg1 ;
-(void)handleStillImagePrewarmWithSettings:(id)arg0 forInput:(id)arg1 ;
-(void)handleStillImageReferenceFrameBracketedCaptureSequenceNumber:(int)arg0 forInput:(id)arg1 ;
-(void)makeCurrentConfigurationLive;
-(void)prepareForCurrentConfigurationToBecomeLive;
-(void)renderSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 forInput:(id)arg1 ;
-(void)setConfigurationID:(NSInteger)arg0 ;
-(void)suspendResources;


@end


#endif