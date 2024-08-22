// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FTMUTABLEFINALBLAZARRESPONSE_H
#define FTMUTABLEFINALBLAZARRESPONSE_H

@class NSString;


#import "FTFinalBlazarResponse.h"

@interface FTMutableFinalBlazarResponse : FTFinalBlazarResponse

@property (nonatomic) int return_code;
@property (copy, nonatomic) NSString *return_str;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif