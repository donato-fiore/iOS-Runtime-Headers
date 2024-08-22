// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MOVSTREAMWRITERSTATEFORCEFINISH_H
#define MOVSTREAMWRITERSTATEFORCEFINISH_H

@class NSString;
@protocol MOVStreamWriterState;

#import <Foundation/Foundation.h>


@interface MOVStreamWriterStateForceFinish : NSObject <MOVStreamWriterState>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSString *name;
@property (readonly) Class superclass;
@property (readonly) NSInteger writerStatus;


-(BOOL)canAppendData:(id)arg0 ;
-(BOOL)canConfigure:(id)arg0 ;
-(BOOL)canFinishRecording:(id)arg0 ;
-(BOOL)canWriteData:(id)arg0 ;
-(BOOL)stopWriterWhenFifosAreEmpty:(id)arg0 ;
-(id)cancelRecording:(id)arg0 ;
-(id)criticalErrorOccurred:(id)arg0 context:(id)arg1 ;
-(id)finishRecording:(id)arg0 ;
-(id)finishedCancelRecording:(id)arg0 ;
-(id)forceFinishRecording:(id)arg0 ;
-(id)nextFinishStep:(id)arg0 ;
-(id)prepareFinished:(id)arg0 ;
-(id)prepareRecording:(id)arg0 ;
-(void)activateWithContext:(id)arg0 ;


@end


#endif