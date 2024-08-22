// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BWDEFERREDPROCESSORCONTROLLERINPUT_H
#define BWDEFERREDPROCESSORCONTROLLERINPUT_H

@class NSString;


#import "BWStillImageProcessorInput.h"
#import "BWDeferredProcessingContainer.h"
#import "BWDeferredProcessorController.h"

@interface BWDeferredProcessorControllerInput : BWStillImageProcessorInput

@property (readonly, nonatomic) BWDeferredProcessingContainer *container; // ivar: _container
@property (readonly, nonatomic) NSString *photoIdentifier; // ivar: _photoIdentifier
@property (nonatomic) BWDeferredProcessorController *processorController; // ivar: _processorController


-(void)dealloc;


@end


#endif