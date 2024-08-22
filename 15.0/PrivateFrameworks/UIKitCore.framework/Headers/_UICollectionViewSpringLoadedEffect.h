// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UICOLLECTIONVIEWSPRINGLOADEDEFFECT_H
#define _UICOLLECTIONVIEWSPRINGLOADEDEFFECT_H

@class NSString, NSTimer;
@protocol UISpringLoadedInteractionEffect;

#import <Foundation/Foundation.h>


@interface _UICollectionViewSpringLoadedEffect : NSObject <UISpringLoadedInteractionEffect>



@property (retain, nonatomic) NSObject<UISpringLoadedInteractionEffect> *blinkEffect; // ivar: _blinkEffect
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSTimer *stateBlinkTimer; // ivar: _stateBlinkTimer
@property (readonly) Class superclass;


-(id)init;
-(void)interaction:(id)arg0 didChangeWithContext:(id)arg1 ;


@end


#endif