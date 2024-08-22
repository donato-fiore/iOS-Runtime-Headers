// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FTMUTABLELANGUAGEDETECTED_H
#define FTMUTABLELANGUAGEDETECTED_H

@class NSString, NSArray;


#import "FTLanguageDetected.h"

@interface FTMutableLanguageDetected : FTLanguageDetected

@property (copy, nonatomic) NSString *detected_locale;
@property (copy, nonatomic) NSArray *predictions;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif