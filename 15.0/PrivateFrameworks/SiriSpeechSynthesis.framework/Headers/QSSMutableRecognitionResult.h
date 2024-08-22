// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef QSSMUTABLERECOGNITIONRESULT_H
#define QSSMUTABLERECOGNITIONRESULT_H

@class NSArray;


#import "QSSRecognitionResult.h"
#import "QSSRecognitionSausage.h"

@interface QSSMutableRecognitionResult : QSSRecognitionResult

@property (copy, nonatomic) NSArray *choice_alignments;
@property (copy, nonatomic) QSSRecognitionSausage *post_itn;
@property (copy, nonatomic) NSArray *post_itn_nbest_choices;
@property (copy, nonatomic) QSSRecognitionSausage *pre_itn;
@property (copy, nonatomic) NSArray *pre_itn_nbest_choices;
@property (copy, nonatomic) NSArray *pre_itn_token_to_post_itn_char_alignment;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif