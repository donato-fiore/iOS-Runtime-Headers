// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MPSGRAPHEXECUTABLEDESCRIPTOR_H
#define MPSGRAPHEXECUTABLEDESCRIPTOR_H


#import <Foundation/Foundation.h>

#import "MPSGraphCompilationDescriptor.h"

@interface MPSGraphExecutableDescriptor : NSObject

@property (retain) MPSGraphCompilationDescriptor *compilationDescriptor; // ivar: _compilationDescriptor
@property NSUInteger compilerOptions;
@property (copy) id *variableFetchHandler; // ivar: _variableFetchHandler


-(id)init;


@end


#endif