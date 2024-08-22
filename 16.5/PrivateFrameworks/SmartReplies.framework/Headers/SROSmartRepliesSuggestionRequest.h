// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SROSMARTREPLIESSUGGESTIONREQUEST_H
#define SROSMARTREPLIESSUGGESTIONREQUEST_H

@class NSString, NSDate, NSArray;

#import <Foundation/Foundation.h>

#import "_TtC12SmartReplies31SRSmartRepliesSuggestionRequest.h"

@interface SROSmartRepliesSuggestionRequest : NSObject {
    _TtC12SmartReplies31SRSmartRepliesSuggestionRequest *_underlyingRequest;
}


@property (copy, nonatomic) NSString *context;
@property (nonatomic) BOOL includesDynamicSuggestions;
@property (copy, nonatomic) NSString *languageCode;
@property (retain, nonatomic) NSDate *languageLastChangedDate;
@property (readonly, copy, nonatomic) NSArray *receivedMessages;
@property (retain, nonatomic) NSDate *requestDate;
@property (copy, nonatomic) NSArray *senderMessages;
@property (readonly, nonatomic) NSUInteger type;


+(id)_unwrappedMessagesForWrappedMessages:(id)arg0 ;
+(id)_wrappedMessagesForUnwrappedMessages:(id)arg0 ;
-(id)initWithType:(NSUInteger)arg0 receivedMessages:(id)arg1 ;


@end


#endif