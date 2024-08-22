// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MUILINKSUGGESTION_H
#define MUILINKSUGGESTION_H

@class NSString, NSURL;


#import "MUIResultSuggestion.h"

@interface MUILinkSuggestion : MUIResultSuggestion

@property (readonly, nonatomic) NSString *messageID; // ivar: _messageID
@property (readonly, nonatomic) NSString *richLinkID; // ivar: _richLinkID
@property (readonly, nonatomic) NSString *title; // ivar: _title
@property (readonly, nonatomic) NSURL *url; // ivar: _url


+(id)suggestionWithURL:(id)arg0 title:(id)arg1 richLinkID:(id)arg2 authors:(id)arg3 authorEmailAddresses:(id)arg4 objectID:(id)arg5 messageID:(id)arg6 messageList:(id)arg7 ;
-(id)category;
-(id)description;
-(id)initWithURL:(id)arg0 title:(id)arg1 richLinkID:(id)arg2 authors:(id)arg3 authorEmailAddresses:(id)arg4 objectID:(id)arg5 messageID:(id)arg6 messageList:(id)arg7 ;


@end


#endif