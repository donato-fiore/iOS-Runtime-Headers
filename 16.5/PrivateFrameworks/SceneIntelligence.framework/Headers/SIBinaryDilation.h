// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SIBINARYDILATION_H
#define SIBINARYDILATION_H

@class MPSImageAreaMax;

#import <Foundation/Foundation.h>


@interface SIBinaryDilation : NSObject {
    MPSImageAreaMax *_dilationOperator;
}




-(id)initWithFactory:(id)arg0 kernelRadius:(NSUInteger)arg1 ;
-(void)encodeToCommandBuffer:(id)arg0 sourceTexture:(id)arg1 destinationTexture:(id)arg2 ;


@end


#endif