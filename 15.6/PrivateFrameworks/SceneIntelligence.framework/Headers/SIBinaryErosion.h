// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SIBINARYEROSION_H
#define SIBINARYEROSION_H

@class MPSImageAreaMin;

#import <Foundation/Foundation.h>


@interface SIBinaryErosion : NSObject {
    MPSImageAreaMin *_erosionOperator;
}




-(id)initWithFactory:(id)arg0 kernelRadius:(NSUInteger)arg1 ;
-(void)encodeToCommandBuffer:(id)arg0 sourceTexture:(id)arg1 destinationTexture:(id)arg2 ;


@end


#endif