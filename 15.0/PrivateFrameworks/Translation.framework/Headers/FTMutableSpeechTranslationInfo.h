// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FTMUTABLESPEECHTRANSLATIONINFO_H
#define FTMUTABLESPEECHTRANSLATIONINFO_H

@class NSArray;


#import "FTSpeechTranslationInfo.h"
#import "FTRecognitionSausage.h"

@interface FTMutableSpeechTranslationInfo : FTSpeechTranslationInfo

@property (copy, nonatomic) NSArray *raw_nbest_choices;
@property (copy, nonatomic) FTRecognitionSausage *raw_sausage;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif