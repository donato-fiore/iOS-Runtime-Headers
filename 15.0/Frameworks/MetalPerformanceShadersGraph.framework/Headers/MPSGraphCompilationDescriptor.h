// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MPSGRAPHCOMPILATIONDESCRIPTOR_H
#define MPSGRAPHCOMPILATIONDESCRIPTOR_H


#import <Foundation/Foundation.h>


@interface MPSGraphCompilationDescriptor : NSObject

@property NSUInteger compilerOptions; // ivar: _compilerOptions


-(id)init;
-(void)disableTypeInference;
-(void)enableFileBackedConstants;


@end


#endif