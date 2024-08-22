// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef QSSMUTABLELANGUAGEPARAMETERS_H
#define QSSMUTABLELANGUAGEPARAMETERS_H

@class NSString;


#import "QSSLanguageParameters.h"

@interface QSSMutableLanguageParameters : QSSLanguageParameters

@property (copy, nonatomic) NSString *fork_id;
@property (copy, nonatomic) NSString *language;
@property (copy, nonatomic) NSString *request_locale;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif