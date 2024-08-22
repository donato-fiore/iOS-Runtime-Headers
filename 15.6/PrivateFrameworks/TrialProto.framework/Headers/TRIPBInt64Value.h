// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TRIPBINT64VALUE_H
#define TRIPBINT64VALUE_H



#import "TRIPBMessage.h"

@interface TRIPBInt64Value : TRIPBMessage

@property (nonatomic) NSInteger value;


+(id)descriptor;


@end


#endif