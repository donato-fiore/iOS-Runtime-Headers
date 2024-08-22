// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NLDATAINSTANCE_H
#define NLDATAINSTANCE_H

@class NSString, NSArray;

#import <Foundation/Foundation.h>


@interface NLDataInstance : NSObject

@property (readonly, copy) NSString *label;
@property (readonly, copy) NSArray *labels;
@property (readonly, copy) NSString *string;
@property (readonly, copy) NSArray *tokens;


-(id)formattedLineWithLabelMap:(id)arg0 vocabularyMap:(id)arg1 ;
-(id)initWithLine:(id)arg0 tokenizer:(struct __CFStringTokenizer *)arg1 ;
-(id)initWithString:(id)arg0 label:(id)arg1 ;
-(id)locatorsWithIndex:(NSUInteger)arg0 parameters:(struct _NLConstraintParameters )arg1 tagger:(id)arg2 tokenizer:(struct __CFStringTokenizer *)arg3 ;
-(id)subInstanceWithLocator:(id)arg0 tokenizer:(struct __CFStringTokenizer *)arg1 ;
-(struct __CFDictionary *)instanceDictionary;


@end


#endif