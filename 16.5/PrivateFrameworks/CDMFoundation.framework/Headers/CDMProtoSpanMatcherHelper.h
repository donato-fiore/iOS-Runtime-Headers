// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CDMPROTOSPANMATCHERHELPER_H
#define CDMPROTOSPANMATCHERHELPER_H


#import <Foundation/Foundation.h>


@interface CDMProtoSpanMatcherHelper : NSObject



+(BOOL)isTrailingSpanAdjacent:(id)arg0 secondSpan:(id)arg1 tokenChain:(id)arg2 ;
+(id)ascendingStartIndexComparator:(SEL)arg0 ;
+(id)buildMatchingSpanProtoWithLabel:(id)arg0 inputStringForDebug:(id)arg1 startTokenIndex:(unsigned int)arg2 endTokenIndex:(unsigned int)arg3 spanMatcherName:(int)arg4 ;
+(id)buildMatchingSpanProtoWithLabel:(id)arg0 inputStringForDebug:(id)arg1 startTokenIndex:(unsigned int)arg2 endTokenIndex:(unsigned int)arg3 startCharIndex:(unsigned int)arg4 endCharIndex:(unsigned int)arg5 spanMatcherName:(int)arg6 ;
+(id)buildUsoIdentifier:(id)arg0 semantic:(id)arg1 nodeIndex:(int)arg2 ;
+(id)buildUtteranceAlignments:(unsigned int)arg0 endCharIndex:(unsigned int)arg1 nodeIndex:(int)arg2 ;
+(id)descendingLengthComparator:(SEL)arg0 ;
+(id)voiceCommandSpanComparator:(SEL)arg0 ;
+(void)enumerateTokenChain:(id)arg0 useNormalizedValues:(BOOL)arg1 withCallback:(id)arg2 ;


@end


#endif