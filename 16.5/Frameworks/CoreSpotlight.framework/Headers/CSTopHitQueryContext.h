// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CSTOPHITQUERYCONTEXT_H
#define CSTOPHITQUERYCONTEXT_H



#import "CSUserQueryContext.h"

@interface CSTopHitQueryContext : CSUserQueryContext

@property (nonatomic) NSInteger maxItemCount; // ivar: _maxItemCount


+(id)topHitQueryContext;
+(id)topHitQueryContextWithCurrentSuggestion:(id)arg0 ;


@end


#endif