// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKFADEOUTSTROKEANIMATION_H
#define PKFADEOUTSTROKEANIMATION_H

@class UIColor;

#import <Foundation/Foundation.h>

#import "PKStroke.h"

@interface PKFadeOutStrokeAnimation : NSObject {
    UIColor *_startColor;
}


@property (readonly, nonatomic) CGFloat duration; // ivar: _duration
@property (readonly, nonatomic) CGFloat startTime; // ivar: _startTime
@property (readonly, nonatomic) PKStroke *stroke; // ivar: _stroke


-(BOOL)isDoneAtTime:(CGFloat)arg0 ;
-(id)initWithStroke:(id)arg0 startTime:(CGFloat)arg1 duration:(CGFloat)arg2 ;
-(id)newStrokeAtTime:(CGFloat)arg0 ;


@end


#endif