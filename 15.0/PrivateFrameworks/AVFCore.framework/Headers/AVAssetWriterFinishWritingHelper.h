// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AVASSETWRITERFINISHWRITINGHELPER_H
#define AVASSETWRITERFINISHWRITINGHELPER_H

@class NSArray, NSOperation;


#import "AVAssetWriterHelper.h"

@interface AVAssetWriterFinishWritingHelper : AVAssetWriterHelper {
    NSArray *_finishWritingOperations;
}


@property (readonly, nonatomic) NSOperation *transitionToTerminalStatusOperation; // ivar: _transitionToTerminalStatusOperation


-(NSInteger)status;
-(id)initWithConfigurationState:(id)arg0 finishWritingOperations:(id)arg1 ;
-(void)_finishWritingOperationsDidFinish;
-(void)cancelWriting;
-(void)dealloc;


@end


#endif