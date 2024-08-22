// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TCRULEBASEDEDITOR_H
#define TCRULEBASEDEDITOR_H

@class AppleSpell;
@protocol TCPostEditing;

#import <Foundation/Foundation.h>


@interface TCRuleBasedEditor : NSObject <TCPostEditing>

 {
    AppleSpell *_checker;
}




-(id)initWithOptions:(id)arg0 ;
-(void)addGrammarDetailsForSentenceRange:(struct _NSRange )arg0 sentence:(id)arg1 result:(id)arg2 mutableDetails:(id)arg3 ;
-(void)checkString:(id)arg0 range:(struct _NSRange )arg1 tagger:(id)arg2 offset:(NSUInteger)arg3 options:(id)arg4 mutableResults:(id)arg5 ;


@end


#endif