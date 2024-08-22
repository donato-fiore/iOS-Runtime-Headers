// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef QSSMUTABLELANGUAGEDETECTIONRESPONSE_H
#define QSSMUTABLELANGUAGEDETECTIONRESPONSE_H

@class NSString, NSArray;


#import "QSSLanguageDetectionResponse.h"

@interface QSSMutableLanguageDetectionResponse : QSSLanguageDetectionResponse

@property (copy, nonatomic) NSString *detected_locale;
@property (copy, nonatomic) NSArray *predictions;
@property (nonatomic) int return_code;
@property (copy, nonatomic) NSString *return_string;
@property (copy, nonatomic) NSString *session_id;
@property (copy, nonatomic) NSString *speech_id;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif