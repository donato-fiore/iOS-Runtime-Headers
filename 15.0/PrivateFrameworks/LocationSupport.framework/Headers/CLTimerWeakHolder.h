// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CLTIMERWEAKHOLDER_H
#define CLTIMERWEAKHOLDER_H


#import <Foundation/Foundation.h>

#import "CLTimer.h"

@interface CLTimerWeakHolder : NSObject

@property (readonly, weak, nonatomic) CLTimer *timer; // ivar: _timer


+(id)holderWithTimer:(id)arg0 ;
-(id)initWithTimer:(id)arg0 ;


@end


#endif