// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef QSSMUTABLEFINALBLAZARRESPONSE_H
#define QSSMUTABLEFINALBLAZARRESPONSE_H

@class NSString;


#import "QSSFinalBlazarResponse.h"

@interface QSSMutableFinalBlazarResponse : QSSFinalBlazarResponse

@property (nonatomic) int return_code;
@property (copy, nonatomic) NSString *return_str;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif