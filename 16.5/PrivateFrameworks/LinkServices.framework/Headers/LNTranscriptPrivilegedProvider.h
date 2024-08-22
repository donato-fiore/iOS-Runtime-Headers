// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef LNTRANSCRIPTPRIVILEGEDPROVIDER_H
#define LNTRANSCRIPTPRIVILEGEDPROVIDER_H



#import "LNTranscriptProvider.h"

@interface LNTranscriptPrivilegedProvider : LNTranscriptProvider



+(id)xpcInterface;
-(id)transcriptPublisherWithStreamName:(id)arg0 fromDate:(id)arg1 error:(*id)arg2 ;
-(id)transcriptPublisherWithStreamName:(id)arg0 fromDate:(id)arg1 toDate:(id)arg2 maxEvents:(id)arg3 reversed:(BOOL)arg4 error:(*id)arg5 ;
-(void)donateActionRecordData:(id)arg0 bundleIdentifier:(id)arg1 timestamp:(CGFloat)arg2 writeImmediately:(BOOL)arg3 reply:(id)arg4 ;


@end


#endif