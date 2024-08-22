// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IMDMESSAGERECORDBATCHFETCHER_H
#define IMDMESSAGERECORDBATCHFETCHER_H

@class NSString;


#import "IMDRecordBatchFetcher.h"

@interface IMDMessageRecordBatchFetcher : IMDRecordBatchFetcher

@property (readonly, copy, nonatomic) NSString *associatedChatGUID; // ivar: _associatedChatGUID


-(id)initWithAssociatedChatGUID:(id)arg0 ;
-(id)nextBatchWithSize:(NSUInteger)arg0 ;


@end


#endif