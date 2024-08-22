// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MOVSTREAMWRITERSTATEFAILED_H
#define MOVSTREAMWRITERSTATEFAILED_H



#import "MOVStreamWriterStateFinished.h"

@interface MOVStreamWriterStateFailed : MOVStreamWriterStateFinished



-(NSInteger)writerStatus;
-(id)criticalErrorOccurred:(id)arg0 context:(id)arg1 ;
-(id)name;
-(void)activateWithContext:(id)arg0 ;


@end


#endif