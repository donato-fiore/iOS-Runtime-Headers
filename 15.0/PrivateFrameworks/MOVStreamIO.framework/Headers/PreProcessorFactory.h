// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PREPROCESSORFACTORY_H
#define PREPROCESSORFACTORY_H


#import <Foundation/Foundation.h>


@interface PreProcessorFactory : NSObject



+(id)defaultFactory;
-(id)preProcessorForFormat:(struct opaqueCMFormatDescription *)arg0 recordingConfiguration:(id)arg1 ;


@end


#endif