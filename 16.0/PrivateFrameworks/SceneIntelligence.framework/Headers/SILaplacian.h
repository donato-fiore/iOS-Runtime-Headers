// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SILAPLACIAN_H
#define SILAPLACIAN_H

@class MPSImageLaplacian;

#import <Foundation/Foundation.h>


@interface SILaplacian : NSObject {
    MPSImageLaplacian *_laplacianOperator;
}




-(id)init;
-(void)encodeToCommandBuffer:(id)arg0 sourceTexture:(id)arg1 destinationTexture:(id)arg2 ;


@end


#endif