// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef QSSMUTABLESIRIPAYLOADTRANSLATIONINFO_H
#define QSSMUTABLESIRIPAYLOADTRANSLATIONINFO_H

@class NSString;


#import "QSSSiriPayloadTranslationInfo.h"
#import "QSSRecognitionSausage.h"

@interface QSSMutableSiriPayloadTranslationInfo : QSSSiriPayloadTranslationInfo

@property (copy, nonatomic) NSString *post_itn_payload;
@property (copy, nonatomic) NSString *pre_itn_payload;
@property (copy, nonatomic) QSSRecognitionSausage *pre_sausage_payload;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif