// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AXPREDICTIVETYPINGMODEL_H
#define AXPREDICTIVETYPINGMODEL_H


#import <Foundation/Foundation.h>


@interface AXPredictiveTypingModel : NSObject {
    *void _wordModel;
}




-(*unsigned int)_newContextForText:(id)arg0 includeLastToken:(BOOL)arg1 length:(*NSInteger)arg2 ;
-(id)_completionPredictionsForPrefix:(id)arg0 entireText:(id)arg1 desiredNumber:(NSUInteger)arg2 ;
-(id)_lastPartialWordForText:(id)arg0 orEndOfSentence:(*BOOL)arg1 ;
-(id)_nextWordPredictionsForText:(id)arg0 desiredNumber:(NSUInteger)arg1 ;
-(id)init;
-(id)predictionsForText:(id)arg0 ;
-(id)predictionsForText:(id)arg0 desiredNumber:(NSUInteger)arg1 ;
-(void)dealloc;
-(void)enumerateTokensForText:(id)arg0 usingBlock:(id)arg1 ;


@end


#endif