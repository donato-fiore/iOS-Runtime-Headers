// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SNRECORDOPERATOR_H
#define SNRECORDOPERATOR_H

@class AVAudioFormat, AVAudioFile;
@protocol SNOperator;

#import <Foundation/Foundation.h>


@interface SNRecordOperator : NSObject <SNOperator>

 {
    AVAudioFormat *_format;
    AVAudioFile *_outputFile;
}




-(id)init;
-(void)dealloc;
-(void)processInput:(id)arg0 portID:(id)arg1 downstreamHandler:(id)arg2 ;
-(void)processTerminationWithOptionalError:(id)arg0 portID:(id)arg1 downstreamHandler:(id)arg2 ;


@end


#endif