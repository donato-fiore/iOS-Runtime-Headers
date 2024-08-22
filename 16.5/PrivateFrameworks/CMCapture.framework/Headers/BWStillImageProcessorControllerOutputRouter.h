// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BWSTILLIMAGEPROCESSORCONTROLLEROUTPUTROUTER_H
#define BWSTILLIMAGEPROCESSORCONTROLLEROUTPUTROUTER_H

@class NSMutableArray, NSArray;

#import <Foundation/Foundation.h>


@interface BWStillImageProcessorControllerOutputRouter : NSObject {
    NSMutableArray *_bypassedProcessorTypes;
}


@property (readonly, nonatomic) NSArray *bypassedProcessorsTypes;
@property (readonly, nonatomic) id *outputSampleBufferRouter; // ivar: _outputSampleBufferRouter


-(id)initWithOutputSampleBufferRouter:(id)arg0 ;
-(void)addBypassedProcessorType:(NSUInteger)arg0 ;
-(void)dealloc;


@end


#endif