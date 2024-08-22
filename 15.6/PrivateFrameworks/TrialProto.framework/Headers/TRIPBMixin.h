// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TRIPBMIXIN_H
#define TRIPBMIXIN_H

@class NSString;


#import "TRIPBMessage.h"

@interface TRIPBMixin : TRIPBMessage

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *root;


+(id)descriptor;


@end


#endif