// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CEKANIMATIONGENERATOR_H
#define CEKANIMATIONGENERATOR_H

@class NSMutableDictionary, CADisplayLink;

#import <Foundation/Foundation.h>


@interface CEKAnimationGenerator : NSObject

@property (retain, nonatomic) NSMutableDictionary *_animations; // ivar: __animations
@property (retain, nonatomic) CADisplayLink *_displayLink; // ivar: __displayLink


-(BOOL)isAnimatingForIdentifier:(id)arg0 ;
-(id)init;
-(void)_handleDisplayLinkFired:(id)arg0 ;
-(void)_stopAnimationForIdentifier:(id)arg0 didComplete:(BOOL)arg1 ;
-(void)_updateAnimationForIdentifer:(id)arg0 timestamp:(CGFloat)arg1 ;
-(void)dealloc;
// -(void)startAnimationForIdentifier:(id)arg0 duration:(CGFloat)arg1 updateHandler:(id)arg2 completionHandler:(unk)arg3  ;
-(void)stopAllAnimations;
-(void)stopAnimationForIdentifier:(id)arg0 ;


@end


#endif