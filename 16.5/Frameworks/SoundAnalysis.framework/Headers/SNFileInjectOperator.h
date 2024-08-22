// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SNFILEINJECTOPERATOR_H
#define SNFILEINJECTOPERATOR_H

@class AVAudioFormat, AVAudioFile;
@protocol SNOperator;

#import <Foundation/Foundation.h>


@interface SNFileInjectOperator : NSObject <SNOperator>

 {
    AVAudioFormat *_format;
    AVAudioFile *_inputFile;
    ? _offsetInInputFile;
}




-(id)init;
-(void)dealloc;
-(void)processInput:(id)arg0 portID:(id)arg1 downstreamHandler:(id)arg2 ;
-(void)processTerminationWithOptionalError:(id)arg0 portID:(id)arg1 downstreamHandler:(id)arg2 ;


@end


#endif