// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef READINGLISTCOMPLETIONPROVIDER_H
#define READINGLISTCOMPLETIONPROVIDER_H

@class NSString;


#import "CompletionProvider.h"

@interface ReadingListCompletionProvider : CompletionProvider {
    unsigned int _maxResults;
    NSString *_stringToComplete;
}


@property (readonly, nonatomic) BOOL onlyIncludeAvailableOffline; // ivar: _onlyIncludeAvailableOffline


-(NSUInteger)maximumCachedCompletionCount;
-(id)initWithMaximumNumberOfCompletions:(unsigned int)arg0 onlyIncludeAvailableOffline:(BOOL)arg1 ;
-(void)setQueryToComplete:(id)arg0 ;


@end


#endif