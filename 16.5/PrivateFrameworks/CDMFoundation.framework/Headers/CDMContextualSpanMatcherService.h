// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CDMCONTEXTUALSPANMATCHERSERVICE_H
#define CDMCONTEXTUALSPANMATCHERSERVICE_H

@class ContextualSpanMatcher, NSArray;


#import "CDMDAGBaseService.h"

@interface CDMContextualSpanMatcherService : CDMDAGBaseService

@property (retain, nonatomic) ContextualSpanMatcher *contextualSpanMatcher; // ivar: _contextualSpanMatcher
@property (readonly, nonatomic) NSArray *overrideSpansForReplay; // ivar: _overrideSpansForReplay


+(BOOL)isAssetRequired;
+(BOOL)isEnabled;
-(id)getContextualSpansInternal:(id)arg0 ;
-(id)getPredictor;
-(id)handle:(id)arg0 ;
-(id)handleRequestCommandTypeNames;
-(id)setup:(id)arg0 ;


@end


#endif