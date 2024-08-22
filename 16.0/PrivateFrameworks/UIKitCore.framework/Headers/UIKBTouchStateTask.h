// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UIKBTOUCHSTATETASK_H
#define UIKBTOUCHSTATETASK_H

@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "UIKBTouchState.h"

@interface UIKBTouchStateTask : NSObject <NSCopying>



@property (nonatomic) BOOL isBusy; // ivar: _isBusy
@property (readonly, copy, nonatomic) id *task; // ivar: _task
@property (readonly, nonatomic) UIKBTouchState *touchState; // ivar: _touchState


+(id)touchStateTaskForTouchState:(id)arg0 andTask:(id)arg1 ;
-(NSInteger)compare:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithTouchState:(id)arg0 andTask:(id)arg1 ;


@end


#endif