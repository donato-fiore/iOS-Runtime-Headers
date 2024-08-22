// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SROSMARTREPLIESACTIONSUGGESTION_H
#define SROSMARTREPLIESACTIONSUGGESTION_H



#import "SROSmartRepliesSuggestion.h"
#import "_TtC12SmartReplies30SRSmartRepliesActionSuggestion.h"

@interface SROSmartRepliesActionSuggestion : SROSmartRepliesSuggestion {
    _TtC12SmartReplies30SRSmartRepliesActionSuggestion *_underlyingSuggestion;
}


@property (readonly, nonatomic) BOOL isRichSuggestion;
@property (readonly, nonatomic) NSUInteger type;


-(BOOL)isDynamicSuggestion;
-(id)initWithTitle:(id)arg0 isDynamicSuggestion:(BOOL)arg1 ;
-(id)initWithType:(NSUInteger)arg0 title:(id)arg1 isRichSuggestion:(BOOL)arg2 ;
-(id)title;


@end


#endif