// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _PXTIMERTARGET_H
#define _PXTIMERTARGET_H


#import <Foundation/Foundation.h>


@interface _PXTimerTarget : NSObject

@property (nonatomic) SEL selector; // ivar: _selector
@property (weak, nonatomic) id *target; // ivar: _target


-(void)handleTimer:(id)arg0 ;


@end


#endif