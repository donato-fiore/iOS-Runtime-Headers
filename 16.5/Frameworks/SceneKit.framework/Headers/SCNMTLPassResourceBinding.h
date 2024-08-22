// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SCNMTLPASSRESOURCEBINDING_H
#define SCNMTLPASSRESOURCEBINDING_H



#import "SCNMTLResourceBinding.h"

@interface SCNMTLPassResourceBinding : SCNMTLResourceBinding {
    *? _inputs;
    *__C3DFXPassInput _samplerInput;
}


@property (nonatomic) NSInteger bufferSize; // ivar: bufferSize
@property (nonatomic) NSInteger inputsCount; // ivar: inputsCount


-(id)init;
-(void)dealloc;


@end


#endif