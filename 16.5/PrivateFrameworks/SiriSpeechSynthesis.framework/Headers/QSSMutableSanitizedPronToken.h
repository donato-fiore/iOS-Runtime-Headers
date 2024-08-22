// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef QSSMUTABLESANITIZEDPRONTOKEN_H
#define QSSMUTABLESANITIZEDPRONTOKEN_H

@class NSString;


#import "QSSSanitizedPronToken.h"

@interface QSSMutableSanitizedPronToken : QSSSanitizedPronToken

@property (copy, nonatomic) NSString *pron_source;
@property (copy, nonatomic) NSString *token;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif