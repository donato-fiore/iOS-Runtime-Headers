// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef QSSMUTABLELANGUAGEDETECTED_H
#define QSSMUTABLELANGUAGEDETECTED_H

@class NSString, NSArray;


#import "QSSLanguageDetected.h"

@interface QSSMutableLanguageDetected : QSSLanguageDetected

@property (copy, nonatomic) NSString *detected_locale;
@property (copy, nonatomic) NSArray *predictions;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif