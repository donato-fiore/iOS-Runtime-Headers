// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef OKACTIONBINDINGSWIPE_H
#define OKACTIONBINDINGSWIPE_H

@class UISwipeGestureRecognizer, NSString;
@protocol UIGestureRecognizerDelegate;


#import "OKActionBinding.h"

@interface OKActionBindingSwipe : OKActionBinding <UIGestureRecognizerDelegate>

 {
    UISwipeGestureRecognizer *_swipeGestureRecognizer;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) NSUInteger direction; // ivar: _direction
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger numberOfTouchesRequired; // ivar: _numberOfTouchesRequired
@property (readonly) Class superclass;


+(id)supportedSettings;
-(BOOL)ownsGestureRecognizer:(id)arg0 ;
-(BOOL)respondsToAction:(id)arg0 isTouchCountAgnostic:(BOOL)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithSettings:(id)arg0 ;
-(id)settingObjectForKey:(id)arg0 ;
-(void)dealloc;
-(void)handleSwipe:(id)arg0 ;
-(void)loadForResponder:(id)arg0 scope:(NSUInteger)arg1 ;
-(void)unload;


@end


#endif