// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HUEFFECTIVEPROGRESSOBSERVER_H
#define HUEFFECTIVEPROGRESSOBSERVER_H

@protocol NACancelable;

#import <Foundation/Foundation.h>


@interface HUEffectiveProgressObserver : NSObject

@property (readonly, copy, nonatomic) id *observerBlock; // ivar: _observerBlock
@property (readonly, nonatomic) CGFloat targetEffectiveProgress; // ivar: _targetEffectiveProgress
@property (retain, nonatomic) NSObject<NACancelable> *timerCancellationToken; // ivar: _timerCancellationToken


-(id)initWithTargetEffectiveProgress:(CGFloat)arg0 observerBlock:(id)arg1 ;


@end


#endif