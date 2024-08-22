// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef QSSMUTABLETTSPROMPTS_H
#define QSSMUTABLETTSPROMPTS_H

@class NSArray, NSData;


#import "QSSTTSPrompts.h"

@interface QSSMutableTTSPrompts : QSSTTSPrompts

@property (copy, nonatomic) NSArray *prompts;
@property (copy, nonatomic) NSData *prompts_v2;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(void)prompts_v2:(id)arg0 ;


@end


#endif