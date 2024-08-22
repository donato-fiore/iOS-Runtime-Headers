// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VUIIMAGEPROXYANIMATOR_H
#define VUIIMAGEPROXYANIMATOR_H

@class NSArray, _TVImageView, NSTimer;

#import <Foundation/Foundation.h>


@interface VUIImageProxyAnimator : NSObject

@property (nonatomic, getter=isAnimating) BOOL animating; // ivar: _animating
@property (nonatomic) CGFloat animationDuration; // ivar: _animationDuration
@property (nonatomic) NSUInteger animationOptions; // ivar: _animationOptions
@property (nonatomic, getter=isCachingEnabled) BOOL cachingEnabled; // ivar: _cachingEnabled
@property (nonatomic) NSUInteger displayImageIndex; // ivar: _displayImageIndex
@property (copy, nonatomic) NSArray *imageProxies; // ivar: _imageProxies
@property (retain, nonatomic) _TVImageView *imageView; // ivar: _imageView
@property (nonatomic) NSUInteger indexOfFetchedImage; // ivar: _indexOfFetchedImage
@property (nonatomic) CGFloat transitionInterval; // ivar: _transitionInterval
@property (weak, nonatomic) NSTimer *transitionTimer; // ivar: _transitionTimer


-(id)init;
-(id)initWithImageView:(id)arg0 andProxies:(id)arg1 ;
-(void)_displayIntervalTimerFired:(id)arg0 ;
-(void)_fetchNext;
-(void)_setImage:(id)arg0 animated:(BOOL)arg1 ;
-(void)_updateImageWithIndex:(NSUInteger)arg0 ;
-(void)loadImageProxy:(id)arg0 withWeakObject:(id)arg1 completionHandler:(id)arg2 ;
-(void)startAnimation;
-(void)stopAnimation;


@end


#endif