// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SFTEXTSEARCHMATCHESCOUNTER_H
#define SFTEXTSEARCHMATCHESCOUNTER_H

@class NSMutableOrderedSet, NSString, NSOrderedSet;
@protocol UITextSearchAggregator;

#import <Foundation/Foundation.h>


@interface SFTextSearchMatchesCounter : NSObject <UITextSearchAggregator>

 {
    NSMutableOrderedSet *_allFoundRanges;
    id *_completionHandler;
    NSString *_queryString;
    BOOL _valid;
}


@property (readonly, nonatomic) NSOrderedSet *allFoundRanges;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)canSkipCountingMatchesForQueryString:(id)arg0 wordMatchMethod:(NSInteger)arg1 ;
-(id)initWithQueryString:(id)arg0 completionHandler:(id)arg1 ;
-(void)finishedSearching;
-(void)foundRange:(id)arg0 forSearchString:(id)arg1 inDocument:(id)arg2 ;
-(void)invalidate;
-(void)invalidateFoundRange:(id)arg0 inDocument:(id)arg1 ;


@end


#endif