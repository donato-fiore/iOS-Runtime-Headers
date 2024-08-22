// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VOICEVERIFICATIONENDPOINTER_H
#define VOICEVERIFICATIONENDPOINTER_H

@class NSString;
@protocol Endpointer;

#import <Foundation/Foundation.h>


@interface VoiceVerificationEndpointer : NSObject <Endpointer>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property CGFloat endWaitTime;
@property int endpointMode;
@property (readonly) NSUInteger hash;
@property CGFloat interspeechWaitTime;
@property CGFloat startWaitTime;
@property (readonly) Class superclass;


-(BOOL)configureWithASBD:(struct AudioStreamBasicDescription *)arg0 andFrameRate:(unsigned int)arg1 ;
-(BOOL)configureWithSampleRate:(CGFloat)arg0 andFrameRate:(unsigned int)arg1 ;
-(id)init;
-(int)getStatus:(struct AudioQueueBuffer *)arg0 ;
-(void)dealloc;
-(void)reset;


@end


#endif