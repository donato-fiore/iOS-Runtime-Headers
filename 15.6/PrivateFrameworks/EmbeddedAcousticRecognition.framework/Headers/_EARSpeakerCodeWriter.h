// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _EARSPEAKERCODEWRITER_H
#define _EARSPEAKERCODEWRITER_H

@class NSString;
@protocol _EARSpeakerCodeWriterInterface;

#import <Foundation/Foundation.h>


@interface _EARSpeakerCodeWriter : NSObject <_EARSpeakerCodeWriterInterface>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)setTrainingSpeakerCode:(id)arg0 inferenceSpeakerCode:(id)arg1 accumulatedGradient:(id)arg2 nnetVersion:(NSUInteger)arg3 numFrames:(NSUInteger)arg4 trainingOffset:(NSUInteger)arg5 recognitionOffset:(NSUInteger)arg6 language:(id)arg7 ;


@end


#endif