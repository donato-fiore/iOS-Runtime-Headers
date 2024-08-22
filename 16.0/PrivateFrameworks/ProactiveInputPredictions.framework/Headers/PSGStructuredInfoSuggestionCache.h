// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PSGSTRUCTUREDINFOSUGGESTIONCACHE_H
#define PSGSTRUCTUREDINFOSUGGESTIONCACHE_H

@class _PASTuple2, NSString, NSDate;

#import <Foundation/Foundation.h>


@interface PSGStructuredInfoSuggestionCache : NSObject {
    _PASTuple2 *_cachedSuggestions;
    NSString *_localeIdentifier;
    NSDate *_startTime;
    CGFloat _ttlSeconds;
}




+(BOOL)_matchesPredictedValue:(id)arg0 prefixValue:(id)arg1 ;
+(id)emptySuggestionsPlaceholder;
+(id)sharedInstance;
-(BOOL)_isCacheEmpty;
-(BOOL)_maybeClearCache;
-(id)initWithTTLSeconds:(CGFloat)arg0 ;
-(id)searchWithContext:(id)arg0 localeIdentifier:(id)arg1 maxSuggestions:(NSUInteger)arg2 ;
-(id)searchWithTrigger:(id)arg0 localeIdentifier:(id)arg1 maxSuggestions:(NSUInteger)arg2 ;
-(void)addEmptyPlaceholderForTrigger:(id)arg0 localeIdentifier:(id)arg1 ;
-(void)addStructuredInfoSuggestions:(id)arg0 localeIdentifier:(id)arg1 ;
-(void)invalidate;


@end


#endif