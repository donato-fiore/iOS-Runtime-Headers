// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef QSSMUTABLETRANSLATIONRESPONSE_TRANSLATIONTOKEN_H
#define QSSMUTABLETRANSLATIONRESPONSE_TRANSLATIONTOKEN_H

@class TranslationToken, NSString;


#import "QSSAlignment.h"

@interface QSSMutableTranslationResponse_TranslationToken : TranslationToken

@property (nonatomic) BOOL add_space_after;
@property (nonatomic) float confidence;
@property (copy, nonatomic) QSSAlignment *mt_alignment;
@property (copy, nonatomic) NSString *token;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif