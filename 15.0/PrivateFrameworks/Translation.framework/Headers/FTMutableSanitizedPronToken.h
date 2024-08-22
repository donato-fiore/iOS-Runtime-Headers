// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FTMUTABLESANITIZEDPRONTOKEN_H
#define FTMUTABLESANITIZEDPRONTOKEN_H

@class NSString;


#import "FTSanitizedPronToken.h"

@interface FTMutableSanitizedPronToken : FTSanitizedPronToken

@property (copy, nonatomic) NSString *pron_source;
@property (copy, nonatomic) NSString *token;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif