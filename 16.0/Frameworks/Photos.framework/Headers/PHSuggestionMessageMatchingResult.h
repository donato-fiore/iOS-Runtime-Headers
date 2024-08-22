// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PHSUGGESTIONMESSAGEMATCHINGRESULT_H
#define PHSUGGESTIONMESSAGEMATCHINGRESULT_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>

#import "PHSuggestionMessageContext.h"
#import "PHSuggestion.h"

@interface PHSuggestionMessageMatchingResult : NSObject

@property (retain, nonatomic) PHSuggestionMessageContext *messageContext; // ivar: _messageContext
@property (retain, nonatomic) NSMutableDictionary *scoreByCMMSuggestionMatchingType; // ivar: _scoreByCMMSuggestionMatchingType
@property (retain, nonatomic) PHSuggestion *suggestion; // ivar: _suggestion


-(CGFloat)scoreForSuggestionMatchingType:(NSInteger)arg0 ;
-(id)initWithSuggestion:(id)arg0 messageContext:(id)arg1 ;
-(void)registerMatchingType:(NSInteger)arg0 weight:(CGFloat)arg1 ;


@end


#endif