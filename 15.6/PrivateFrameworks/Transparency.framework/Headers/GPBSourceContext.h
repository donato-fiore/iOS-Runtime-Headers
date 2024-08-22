// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GPBSOURCECONTEXT_H
#define GPBSOURCECONTEXT_H

@class NSString;


#import "GPBMessage.h"

@interface GPBSourceContext : GPBMessage

@property (copy, nonatomic) NSString *fileName;


+(id)descriptor;


@end


#endif