// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SGQUICKRESPONSESREPLIES_H
#define SGQUICKRESPONSESREPLIES_H


#import <Foundation/Foundation.h>


@interface SGQuickResponsesReplies : NSObject



+(id)normalizeReplyText:(id)arg0 ;
+(id)normalizeReplyTextInternal:(id)arg0 ;
+(id)repliesWithArray:(id)arg0 ;
-(NSUInteger)maxDistinctReplies;
-(NSUInteger)modelCount;
-(NSUInteger)replyClassCount;
-(NSUInteger)replyCountForIndex:(NSUInteger)arg0 ;
-(NSUInteger)replyTextCount;
-(id)initWithArray:(id)arg0 ;
-(id)normalizedReplyTextsSet;
-(id)replyTextForIndex:(NSUInteger)arg0 position:(NSUInteger)arg1 ;
-(id)replyTextForIndexAndPosition:(id)arg0 ;
-(id)replyTextsForIndex:(NSUInteger)arg0 ;


@end


#endif