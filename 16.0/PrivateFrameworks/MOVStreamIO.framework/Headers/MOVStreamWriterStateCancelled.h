// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MOVSTREAMWRITERSTATECANCELLED_H
#define MOVSTREAMWRITERSTATECANCELLED_H



#import "MOVStreamWriterStateFinished.h"

@interface MOVStreamWriterStateCancelled : MOVStreamWriterStateFinished



-(NSInteger)writerStatus;
-(id)cancelRecording:(id)arg0 ;
-(id)criticalErrorOccurred:(id)arg0 context:(id)arg1 ;
-(id)name;
-(void)activateWithContext:(id)arg0 ;


@end


#endif