// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NLSEQUENCEMODELDATAINSTANCE_H
#define NLSEQUENCEMODELDATAINSTANCE_H

@class NSArray;


#import "NLDataInstance.h"

@interface NLSequenceModelDataInstance : NLDataInstance {
    NSArray *_tokens;
    NSArray *_labels;
}




+(id)readInstancesFromString:(id)arg0 tokenizer:(struct __CFStringTokenizer *)arg1 ;
-(id)formattedLineWithLabelMap:(id)arg0 vocabularyMap:(id)arg1 ;
-(id)initWithLine:(id)arg0 tokenizer:(struct __CFStringTokenizer *)arg1 ;
-(id)initWithTokens:(id)arg0 labels:(id)arg1 ;
-(id)label;
-(id)labels;
-(id)locatorsWithIndex:(NSUInteger)arg0 parameters:(struct _NLConstraintParameters )arg1 tagger:(id)arg2 tokenizer:(struct __CFStringTokenizer *)arg3 ;
-(id)string;
-(id)subInstanceWithLocator:(id)arg0 tokenizer:(struct __CFStringTokenizer *)arg1 ;
-(id)tokens;
-(struct __CFDictionary *)instanceDictionary;


@end


#endif