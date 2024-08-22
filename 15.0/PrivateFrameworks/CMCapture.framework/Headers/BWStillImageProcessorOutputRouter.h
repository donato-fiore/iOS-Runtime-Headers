// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BWSTILLIMAGEPROCESSOROUTPUTROUTER_H
#define BWSTILLIMAGEPROCESSOROUTPUTROUTER_H

@class NSMutableArray, NSArray;

#import <Foundation/Foundation.h>


@interface BWStillImageProcessorOutputRouter : NSObject {
    NSMutableArray *_bypassedProcessorTypes;
}


@property (readonly, nonatomic) NSArray *bypassedProcessorsTypes;
@property (readonly, nonatomic) id *outputSampleBufferRouter; // ivar: _outputSampleBufferRouter


-(id)initByRetainingOutputSampleBufferRouter:(id)arg0 ;
-(id)initWithOutputSampleBufferRouter:(id)arg0 ;
-(void)addBypassedProcessorType:(NSUInteger)arg0 ;
-(void)dealloc;


@end


#endif