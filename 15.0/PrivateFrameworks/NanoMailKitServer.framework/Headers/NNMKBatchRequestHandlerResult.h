// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NNMKBATCHREQUESTHANDLERRESULT_H
#define NNMKBATCHREQUESTHANDLERRESULT_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface NNMKBatchRequestHandlerResult : NSObject

@property (retain, nonatomic) NSArray *fetchResults; // ivar: _fetchResults
@property (retain, nonatomic) NSArray *mailboxesToTriggerFullSync; // ivar: _mailboxesToTriggerFullSync
@property (retain, nonatomic) NSArray *messageIdsForRequestingContentDownload; // ivar: _messageIdsForRequestingContentDownload
@property (retain, nonatomic) NSArray *missingMessageHeaderIds; // ivar: _missingMessageHeaderIds




@end


#endif