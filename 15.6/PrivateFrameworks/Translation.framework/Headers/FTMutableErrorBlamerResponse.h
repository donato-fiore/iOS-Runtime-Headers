// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FTMUTABLEERRORBLAMERRESPONSE_H
#define FTMUTABLEERRORBLAMERRESPONSE_H

@class NSString;


#import "FTErrorBlamerResponse.h"

@interface FTMutableErrorBlamerResponse : FTErrorBlamerResponse

@property (copy, nonatomic) NSString *blamer_report;
@property (nonatomic) int return_code;
@property (copy, nonatomic) NSString *return_str;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif