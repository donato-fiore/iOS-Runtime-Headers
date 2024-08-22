// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _PUTIMERTARGET_H
#define _PUTIMERTARGET_H


#import <Foundation/Foundation.h>


@interface _PUTimerTarget : NSObject

@property (nonatomic) SEL selector; // ivar: _selector
@property (weak, nonatomic) id *target; // ivar: _target


-(void)handleTimer:(id)arg0 ;


@end


#endif