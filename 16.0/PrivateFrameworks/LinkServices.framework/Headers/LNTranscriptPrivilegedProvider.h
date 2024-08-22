// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef LNTRANSCRIPTPRIVILEGEDPROVIDER_H
#define LNTRANSCRIPTPRIVILEGEDPROVIDER_H



#import "LNTranscriptProvider.h"

@interface LNTranscriptPrivilegedProvider : LNTranscriptProvider



+(id)xpcInterface;
-(id)transcriptPublisherWithStreamName:(id)arg0 fromDate:(id)arg1 error:(*id)arg2 ;


@end


#endif