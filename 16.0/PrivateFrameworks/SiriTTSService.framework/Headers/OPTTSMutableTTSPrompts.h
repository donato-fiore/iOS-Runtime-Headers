// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef OPTTSMUTABLETTSPROMPTS_H
#define OPTTSMUTABLETTSPROMPTS_H

@class NSArray, NSData;


#import "OPTTSTTSPrompts.h"

@interface OPTTSMutableTTSPrompts : OPTTSTTSPrompts

@property (copy, nonatomic) NSArray *prompts;
@property (copy, nonatomic) NSData *prompts_v2;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(void)prompts_v2:(id)arg0 ;


@end


#endif