// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NLCLASSIFIERMODELDATAINSTANCE_H
#define NLCLASSIFIERMODELDATAINSTANCE_H

@class NSString, NSArray;


#import "NLDataInstance.h"

@interface NLClassifierModelDataInstance : NLDataInstance {
    NSString *_string;
    NSString *_label;
    NSArray *_tokens;
}




+(id)readInstancesFromString:(id)arg0 tokenizer:(struct __CFStringTokenizer *)arg1 ;
-(id)formattedLineWithLabelMap:(id)arg0 vocabularyMap:(id)arg1 ;
-(id)initWithLine:(id)arg0 tokenizer:(struct __CFStringTokenizer *)arg1 ;
-(id)initWithString:(id)arg0 label:(id)arg1 ;
-(id)initWithString:(id)arg0 label:(id)arg1 tokenizer:(struct __CFStringTokenizer *)arg2 ;
-(id)label;
-(id)labels;
-(id)locatorsWithIndex:(NSUInteger)arg0 parameters:(struct _NLConstraintParameters )arg1 tagger:(id)arg2 tokenizer:(struct __CFStringTokenizer *)arg3 ;
-(id)string;
-(id)subInstanceWithLocator:(id)arg0 tokenizer:(struct __CFStringTokenizer *)arg1 ;
-(id)tokens;
-(struct __CFDictionary *)instanceDictionary;


@end


#endif