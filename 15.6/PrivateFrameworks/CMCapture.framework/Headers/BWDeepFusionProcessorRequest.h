// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BWDEEPFUSIONPROCESSORREQUEST_H
#define BWDEEPFUSIONPROCESSORREQUEST_H

@protocol BWDeepFusionProcessorControllerDelegate, IBPDeepFusionOutput;

#import <Foundation/Foundation.h>

#import "BWDeepFusionProcessorInput.h"

@interface BWDeepFusionProcessorRequest : NSObject

@property (readonly, nonatomic) NSObject<BWDeepFusionProcessorControllerDelegate> *delegate; // ivar: _delegate
@property (nonatomic) int demosaicedRawErr; // ivar: _demosaicedRawErr
@property (nonatomic) int err; // ivar: _err
@property (readonly, nonatomic) BWDeepFusionProcessorInput *input; // ivar: _input
@property (readonly, nonatomic) NSObject<IBPDeepFusionOutput> *output; // ivar: _output


-(BOOL)receivedAllBuffers;
-(BOOL)receivedAllInferences;
-(id)description;
-(id)initWithInput:(id)arg0 output:(id)arg1 delegate:(id)arg2 ;
-(void)dealloc;


@end


#endif