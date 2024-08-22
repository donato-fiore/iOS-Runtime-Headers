// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ADESPRESSORUNNER_H
#define ADESPRESSORUNNER_H

@protocol ADEspressoRunnerProtocol;

#import <Foundation/Foundation.h>


@interface ADEspressoRunner : NSObject <ADEspressoRunnerProtocol>

 {
    NSObject<ADEspressoRunnerProtocol> *_espressoRunner;
}




-(?)updateFeedbackLoopInputBuffer:(?)arg0 inputDescriptor:(?)arg1 outputBufferoutputDescriptor;
-(NSInteger)execute;
-(NSInteger)registerIOSurface:(struct __IOSurface *)arg0 forDescriptor:(id)arg1 ;
-(NSInteger)registerPixelBuffer:(struct __CVBuffer *)arg0 forDescriptor:(id)arg1 ;
-(id)initWithPath:(id)arg0 forEngine:(NSUInteger)arg1 configurationName:(id)arg2 ;
-(id)networkVersionString;
-(id)registerDescriptor:(id)arg0 ;
-(struct __CVBuffer *)createAndRegisterPixelBufferForDescriptor:(id)arg0 ;


@end


#endif