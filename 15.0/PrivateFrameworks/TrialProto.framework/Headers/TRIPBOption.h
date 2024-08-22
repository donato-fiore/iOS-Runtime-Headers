// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TRIPBOPTION_H
#define TRIPBOPTION_H

@class NSString;


#import "TRIPBMessage.h"
#import "TRIPBAny.h"

@interface TRIPBOption : TRIPBMessage

@property (nonatomic) BOOL hasValue;
@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) TRIPBAny *value;


+(id)descriptor;


@end


#endif