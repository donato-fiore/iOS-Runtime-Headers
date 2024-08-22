// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SGMESSAGEPAIRITERATOR_H
#define SGMESSAGEPAIRITERATOR_H

@class NSArray, NSString, NSMutableDictionary, NSDate;

#import <Foundation/Foundation.h>


@interface SGMessagePairIterator : NSObject {
    NSArray *_messageEvents;
    NSUInteger _messageEventCount;
    NSUInteger _messageEventIndex;
    CGFloat _maxReplyGap;
    NSUInteger _maxReplyLength;
    BOOL _done;
    NSString *_attachmentCharacterString;
    NSString *_breadcrumbCharacterString;
    NSMutableDictionary *_latestPromptForHandle;
}


@property (readonly, nonatomic) NSDate *latestProcessedDate; // ivar: _latestProcessedDate


-(BOOL)isDoneIterating;
-(id)handleFromConversationId:(id)arg0 ;
-(id)initWithStartDate:(id)arg0 maxBatchSize:(NSUInteger)arg1 maxReplyLength:(NSUInteger)arg2 maxReplyGap:(CGFloat)arg3 ;
-(id)nextMessagePair;
-(id)removeBreadcrumbsFromMessage:(id)arg0 ;


@end


#endif