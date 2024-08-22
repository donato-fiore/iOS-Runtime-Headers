// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GPBOPTION_H
#define GPBOPTION_H

@class NSString;


#import "GPBMessage.h"
#import "GPBAny.h"

@interface GPBOption : GPBMessage

@property (nonatomic) BOOL hasValue;
@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) GPBAny *value;


+(id)descriptor;


@end


#endif