// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVASSETWRITERFAILEDTERMINALHELPER_H
#define AVASSETWRITERFAILEDTERMINALHELPER_H

@class NSError;


#import "AVAssetWriterTerminalHelper.h"

@interface AVAssetWriterFailedTerminalHelper : AVAssetWriterTerminalHelper {
    NSError *_terminalError;
}




-(NSInteger)status;
-(id)error;
-(id)initWithConfigurationState:(id)arg0 ;
-(id)initWithConfigurationState:(id)arg0 terminalError:(id)arg1 ;
-(void)dealloc;
-(void)endSessionAtSourceTime:(struct ? )arg0 ;
-(void)finishWriting;
-(void)finishWritingWithCompletionHandler:(id)arg0 ;
-(void)flush;
-(void)flushSegment;
-(void)setFinishWritingDelegate:(id)arg0 ;
-(void)startSessionAtSourceTime:(struct ? )arg0 ;


@end


#endif