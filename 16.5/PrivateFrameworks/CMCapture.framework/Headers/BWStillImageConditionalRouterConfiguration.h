// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BWSTILLIMAGECONDITIONALROUTERCONFIGURATION_H
#define BWSTILLIMAGECONDITIONALROUTERCONFIGURATION_H


#import <Foundation/Foundation.h>


@interface BWStillImageConditionalRouterConfiguration : NSObject

@property (readonly, nonatomic) unsigned int numberOfInputs; // ivar: _numberOfInputs
@property (readonly, nonatomic) unsigned int numberOfOutputs; // ivar: _numberOfOutputs
@property (copy, nonatomic) id *shouldEmitSampleBufferDecisionProvider; // ivar: _shouldEmitSampleBufferDecisionProvider


-(id)initWithNumberOfOutputs:(unsigned int)arg0 ;
-(void)dealloc;


@end


#endif