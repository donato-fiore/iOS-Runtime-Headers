// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef QSSMUTABLESIRITRANSLATIONINFO_H
#define QSSMUTABLESIRITRANSLATIONINFO_H

@class NSArray, NSString;


#import "QSSSiriTranslationInfo.h"
#import "QSSRecognitionSausage.h"

@interface QSSMutableSiriTranslationInfo : QSSSiriTranslationInfo

@property (copy, nonatomic) NSArray *itn_alignments;
@property (copy, nonatomic) NSString *post_itn_recognition;
@property (copy, nonatomic) NSArray *post_itn_tokens;
@property (copy, nonatomic) NSArray *raw_nbest_choices;
@property (copy, nonatomic) QSSRecognitionSausage *raw_sausage;
@property (copy, nonatomic) NSArray *translation_phrase;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif