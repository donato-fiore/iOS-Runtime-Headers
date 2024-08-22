// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef QSSMUTABLESPEECHTRANSLATIONINFO_H
#define QSSMUTABLESPEECHTRANSLATIONINFO_H

@class NSArray;


#import "QSSSpeechTranslationInfo.h"
#import "QSSRecognitionSausage.h"

@interface QSSMutableSpeechTranslationInfo : QSSSpeechTranslationInfo

@property (copy, nonatomic) NSArray *raw_nbest_choices;
@property (copy, nonatomic) QSSRecognitionSausage *raw_sausage;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif