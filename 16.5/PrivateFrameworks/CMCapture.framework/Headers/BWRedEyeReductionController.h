// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BWREDEYEREDUCTIONCONTROLLER_H
#define BWREDEYEREDUCTIONCONTROLLER_H

@class NSDictionary, CIDualRedEyeRepairSession, NSMutableArray, NSString;
@protocol BWRedEyeReductionControllerInputDelegate;


#import "BWStillImageProcessorController.h"

@interface BWRedEyeReductionController : BWStillImageProcessorController <BWRedEyeReductionControllerInputDelegate>

 {
    NSDictionary *_redEyeReductionParametersByPortType;
    CIDualRedEyeRepairSession *_redEyeRepairSession;
    *opaqueCMFormatDescription _outputFormatDescription;
    NSMutableArray *_requestQueue;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(void)initialize;
+(void)prewarm;
-(NSUInteger)type;
-(id)initWithConfiguration:(id)arg0 ;
-(int)enqueueInputForProcessing:(id)arg0 delegate:(id)arg1 ;
-(void)cancelProcessing;
-(void)dealloc;
-(void)didReceiveAllFramesForInput:(id)arg0 ;
-(void)didReceiveFrameForInput:(id)arg0 ;


@end


#endif