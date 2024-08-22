// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ISTRANSITIONAPPLIER_H
#define ISTRANSITIONAPPLIER_H

@class NSString;
@protocol CAAnimationDelegate;

#import <Foundation/Foundation.h>


@interface ISTransitionApplier : NSObject <CAAnimationDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)defaultApplier;
-(void)_applyAlpha:(CGFloat)arg0 blurRadius:(CGFloat)arg1 toLayer:(id)arg2 withTransitionOptions:(id)arg3 completion:(id)arg4 ;
-(void)_applyScale:(CGFloat)arg0 toLayer:(id)arg1 withTransitionOptions:(id)arg2 completion:(id)arg3 ;
-(void)animationDidStop:(id)arg0 finished:(BOOL)arg1 ;
-(void)applyOutputInfo:(id)arg0 withTransitionOptions:(id)arg1 toPhotoLayer:(id)arg2 videoLayer:(id)arg3 completion:(id)arg4 ;
-(void)applyScale:(CGFloat)arg0 withTransitionOptions:(id)arg1 toPhotoLayer:(id)arg2 videoLayer:(id)arg3 completion:(id)arg4 ;
-(void)setValue:(id)arg0 forKeyPath:(id)arg1 ofLayer:(id)arg2 withTransitionOptions:(id)arg3 completion:(id)arg4 ;


@end


#endif