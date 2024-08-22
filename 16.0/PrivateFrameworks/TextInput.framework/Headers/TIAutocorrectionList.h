// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TIAUTOCORRECTIONLIST_H
#define TIAUTOCORRECTIONLIST_H

@class NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "TIKeyboardCandidate.h"

@interface TIAutocorrectionList : NSObject <NSSecureCoding>



@property (readonly, nonatomic) TIKeyboardCandidate *autocorrection; // ivar: _autocorrection
@property (readonly, nonatomic) TIKeyboardCandidate *autocorrectionIfSupplemental;
@property (readonly, nonatomic) NSArray *candidates;
@property (nonatomic) BOOL containsProactiveTriggers; // ivar: _containsProactiveTriggers
@property (readonly, nonatomic) NSArray *emojiList; // ivar: _emojiList
@property (readonly, nonatomic) BOOL empty;
@property (readonly, nonatomic) BOOL hasSupplementalCandidates;
@property (readonly, nonatomic) NSArray *predictions; // ivar: _predictions
@property (readonly, nonatomic) NSArray *predictionsIfSupplemental;
@property (nonatomic) BOOL proactiveSuggestionsEmpty; // ivar: _proactiveSuggestionsEmpty
@property (readonly, nonatomic) NSArray *proactiveTriggers; // ivar: _proactiveTriggers
@property (readonly, nonatomic) BOOL shouldAcceptTopCandidate;


+(BOOL)supportsSecureCoding;
+(id)autocorrectionListWithCandidates:(id)arg0 shouldAcceptTopCandidate:(BOOL)arg1 ;
+(id)listWithAutocorrection:(id)arg0 ;
+(id)listWithAutocorrection:(id)arg0 predictions:(id)arg1 ;
+(id)listWithAutocorrection:(id)arg0 predictions:(id)arg1 emojiList:(id)arg2 ;
+(id)listWithAutocorrection:(id)arg0 predictions:(id)arg1 emojiList:(id)arg2 proactiveTriggers:(id)arg3 ;
+(id)listWithPredictions:(id)arg0 emojiList:(id)arg1 proactiveTriggers:(id)arg2 ;
+(id)listWithPredictions:(id)arg0 proactiveTriggers:(id)arg1 ;
-(BOOL)hasSupplementalItems;
-(BOOL)isSupplementalCandidateInPredictions:(id)arg0 ;
-(id)description;
-(id)initWithAutocorrection:(id)arg0 predictions:(id)arg1 emojiList:(id)arg2 proactiveTriggers:(id)arg3 ;
-(id)initWithAutocorrectionAlternativeProactiveTrigger:(id)arg0 predictions:(id)arg1 emojiList:(id)arg2 proactiveTriggers:(id)arg3 ;
-(id)initWithCandidates:(id)arg0 ;
-(id)initWithCandidates:(id)arg0 shouldAcceptTopCandidate:(BOOL)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif