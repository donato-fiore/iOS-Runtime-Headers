// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BWINTELLIGENTDISTORTIONCORRECTIONPROCESSORREQUEST_H
#define BWINTELLIGENTDISTORTIONCORRECTIONPROCESSORREQUEST_H

@protocol BWStillImageProcessorControllerDelegate;

#import <Foundation/Foundation.h>

#import "BWIntelligentDistortionCorrectionProcessorInput.h"

@interface BWIntelligentDistortionCorrectionProcessorRequest : NSObject

@property (readonly, nonatomic) NSObject<BWStillImageProcessorControllerDelegate> *delegate; // ivar: _delegate
@property (nonatomic) int err; // ivar: _err
@property (readonly, nonatomic) BWIntelligentDistortionCorrectionProcessorInput *input; // ivar: _input


-(id)description;
-(id)initWithInput:(id)arg0 delegate:(id)arg1 ;
-(void)dealloc;


@end


#endif