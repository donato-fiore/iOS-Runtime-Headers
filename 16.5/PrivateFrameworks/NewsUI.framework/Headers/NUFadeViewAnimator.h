// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NUFADEVIEWANIMATOR_H
#define NUFADEVIEWANIMATOR_H


#import <Foundation/Foundation.h>


@interface NUFadeViewAnimator : NSObject

@property (nonatomic) CGFloat fadeInDelay; // ivar: _fadeInDelay
@property (nonatomic) CGFloat fadeInDuration; // ivar: _fadeInDuration
@property (nonatomic) CGFloat fadeOutDuration; // ivar: _fadeOutDuration


-(id)init;
-(void)fadeFromView:(id)arg0 toView:(id)arg1 completion:(id)arg2 ;


@end


#endif