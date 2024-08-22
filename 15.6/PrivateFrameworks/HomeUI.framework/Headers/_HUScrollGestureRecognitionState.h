// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _HUSCROLLGESTURERECOGNITIONSTATE_H
#define _HUSCROLLGESTURERECOGNITIONSTATE_H

@class UIGestureRecognizer;
@protocol NACancelable;

#import <Foundation/Foundation.h>


@interface _HUScrollGestureRecognitionState : NSObject

@property (retain, nonatomic) NSObject<NACancelable> *activationTimer; // ivar: _activationTimer
@property (readonly, nonatomic) UIGestureRecognizer *gestureRecognizer; // ivar: _gestureRecognizer


-(id)initWithGestureRecognizer:(id)arg0 ;


@end


#endif