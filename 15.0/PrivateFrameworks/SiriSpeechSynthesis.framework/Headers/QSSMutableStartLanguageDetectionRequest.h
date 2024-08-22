// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef QSSMUTABLESTARTLANGUAGEDETECTIONREQUEST_H
#define QSSMUTABLESTARTLANGUAGEDETECTIONREQUEST_H

@class NSArray, NSString;


#import "QSSStartLanguageDetectionRequest.h"

@interface QSSMutableStartLanguageDetectionRequest : QSSStartLanguageDetectionRequest

@property (nonatomic) NSInteger codec;
@property (copy, nonatomic) NSArray *locales;
@property (copy, nonatomic) NSString *session_id;
@property (copy, nonatomic) NSString *speech_id;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif