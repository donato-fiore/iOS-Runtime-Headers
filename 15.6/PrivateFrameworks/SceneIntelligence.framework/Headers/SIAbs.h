// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SIABS_H
#define SIABS_H

@protocol MTLComputePipelineState;

#import <Foundation/Foundation.h>


@interface SIAbs : NSObject {
    id<MTLComputePipelineState> *_computeAbs;
    ? _threadGroupSize;
}




-(id)initWithFactory:(id)arg0 ;
-(void)encodeInPlaceToCommandBuffer:(id)arg0 texture:(id)arg1 ;
-(void)encodeToCommandBuffer:(id)arg0 sourceTexture:(id)arg1 destinationTexture:(id)arg2 ;


@end


#endif