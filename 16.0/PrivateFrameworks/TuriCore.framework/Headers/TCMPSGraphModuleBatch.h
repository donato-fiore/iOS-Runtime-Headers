// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TCMPSGRAPHMODULEBATCH_H
#define TCMPSGRAPHMODULEBATCH_H

@class NSArray;
@protocol MTLCommandBuffer;

#import <Foundation/Foundation.h>


@interface TCMPSGraphModuleBatch : NSObject

@property (readonly, nonatomic) NSObject<MTLCommandBuffer> *commandBuffer; // ivar: _commandBuffer
@property (retain, nonatomic) NSArray *grad; // ivar: _grad
@property (retain, nonatomic) NSArray *input; // ivar: _input
@property (retain, nonatomic) NSArray *lossState; // ivar: _lossState
@property (retain, nonatomic) NSArray *output; // ivar: _output


-(id)initWithCommandBuffer:(id)arg0 ;


@end


#endif