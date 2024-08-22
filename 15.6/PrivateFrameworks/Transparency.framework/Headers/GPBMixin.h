// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GPBMIXIN_H
#define GPBMIXIN_H

@class NSString;


#import "GPBMessage.h"

@interface GPBMixin : GPBMessage

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *root;


+(id)descriptor;


@end


#endif