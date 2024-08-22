// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BWSWFRPROCESSORCONTROLLERREQUEST_H
#define BWSWFRPROCESSORCONTROLLERREQUEST_H



#import "BWStillImageProcessorControllerRequest.h"

@interface BWSWFRProcessorControllerRequest : BWStillImageProcessorControllerRequest

@property (nonatomic) int demosaicedRawErr; // ivar: _demosaicedRawErr


-(BOOL)readyForProcessing;


@end


#endif