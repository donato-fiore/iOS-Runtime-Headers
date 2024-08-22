// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MONTREALNNMODELNETWORK_H
#define MONTREALNNMODELNETWORK_H

@class NSString, NSArray;
@protocol MontrealNNDescriptionProtocol;


#import "MontrealNNDescription.h"
#import "MontrealNNModelOptimizerParam.h"
#import "MontrealNNModelQuantization.h"

@interface MontrealNNModelNetwork : MontrealNNDescription <MontrealNNDescriptionProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain) NSArray *inputs; // ivar: _inputs
@property (readonly) NSString *jsonDir; // ivar: _jsonDir
@property (retain) NSArray *nodes; // ivar: _nodes
@property (readonly) MontrealNNModelOptimizerParam *optimizerParams; // ivar: _optimizerParams
@property (retain) NSArray *outputs; // ivar: _outputs
@property (readonly) MontrealNNModelQuantization *quantization; // ivar: _quantization
@property (readonly) Class superclass;


-(*void)generateModelContainer;
-(id)checkForValidity;
-(id)createDataContainer;
-(id)init;
-(id)initWithDictionary:(id)arg0 tensors:(id)arg1 quantization:(id)arg2 optimizerParams:(id)arg3 jsonDir:(id)arg4 optimization:(NSUInteger)arg5 ;
-(id)initWithJSONDir:(id)arg0 ;
-(id)initWithModelContainer:(*void)arg0 tensors:(id)arg1 ;
-(id)jsonDescription;
-(void)collapseNodes;
-(void)collapsePackUnpack:(id)arg0 nodesToRemove:(id)arg1 ;
-(void)description:(id)arg0 indent:(id)arg1 ;
-(void)generateJSONAtPath:(id)arg0 ;
-(void)removeView:(id)arg0 nodesToRemove:(id)arg1 ;
-(void)validateNetworkTensors:(id)arg0 ;
-(void)validateNodeTensors;


@end


#endif