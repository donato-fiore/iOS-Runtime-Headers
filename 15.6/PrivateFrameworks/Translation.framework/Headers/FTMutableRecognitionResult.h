// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FTMUTABLERECOGNITIONRESULT_H
#define FTMUTABLERECOGNITIONRESULT_H

@class NSArray;


#import "FTRecognitionResult.h"
#import "FTRecognitionSausage.h"

@interface FTMutableRecognitionResult : FTRecognitionResult

@property (copy, nonatomic) NSArray *choice_alignments;
@property (copy, nonatomic) FTRecognitionSausage *post_itn;
@property (copy, nonatomic) NSArray *post_itn_nbest_choices;
@property (copy, nonatomic) FTRecognitionSausage *pre_itn;
@property (copy, nonatomic) NSArray *pre_itn_nbest_choices;
@property (copy, nonatomic) NSArray *pre_itn_token_to_post_itn_char_alignment;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif