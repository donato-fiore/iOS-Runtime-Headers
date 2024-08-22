// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BWDEEPFUSIONPROCESSORREQUEST_H
#define BWDEEPFUSIONPROCESSORREQUEST_H

@protocol BWDeepFusionProcessorControllerDelegate, IBPDeepFusionOutput;

#import <Foundation/Foundation.h>

#import "BWDeepFusionProcessorInput.h"

@interface BWDeepFusionProcessorRequest : NSObject

@property (nonatomic) BOOL cacheBuffers; // ivar: _cacheBuffers
@property (readonly, nonatomic) NSObject<BWDeepFusionProcessorControllerDelegate> *delegate; // ivar: _delegate
@property (nonatomic) int demosaicedRawErr; // ivar: _demosaicedRawErr
@property (nonatomic) int err; // ivar: _err
@property (readonly, nonatomic) BWDeepFusionProcessorInput *input; // ivar: _input
@property (retain, nonatomic) NSObject<IBPDeepFusionOutput> *output; // ivar: _output


-(id)description;
-(void)dealloc;


@end


#endif