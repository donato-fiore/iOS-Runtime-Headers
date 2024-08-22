// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UISEGMENTEDCONTROLSPRINGLOADEDEFFECT_H
#define UISEGMENTEDCONTROLSPRINGLOADEDEFFECT_H

@class NSString;
@protocol UISpringLoadedInteractionEffect;

#import <Foundation/Foundation.h>


@interface UISegmentedControlSpringLoadedEffect : NSObject <UISpringLoadedInteractionEffect>



@property (retain, nonatomic) NSObject<UISpringLoadedInteractionEffect> *blinkEffect; // ivar: _blinkEffect
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(void)interaction:(id)arg0 didChangeWithContext:(id)arg1 ;


@end


#endif