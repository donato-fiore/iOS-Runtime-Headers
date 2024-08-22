// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UIPREVIEWINTERACTIONGESTURERECOGNIZERTOUCHFORCEPROVIDER_H
#define _UIPREVIEWINTERACTIONGESTURERECOGNIZERTOUCHFORCEPROVIDER_H

@class NSString;
@protocol UIGestureRecognizerDelegate, _UIPreviewInteractionTouchForceProviding;

#import <Foundation/Foundation.h>

#import "UITouchForceGestureRecognizer.h"

@interface _UIPreviewInteractionGestureRecognizerTouchForceProvider : NSObject <UIGestureRecognizerDelegate, _UIPreviewInteractionTouchForceProviding>



@property (nonatomic, getter=isActive) BOOL active; // ivar: _active
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UITouchForceGestureRecognizer *gestureRecognizer; // ivar: _gestureRecognizer
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) CGFloat touchForce;


-(BOOL)gestureRecognizerShouldBegin:(id)arg0 ;
-(id)initWithGestureRecognizer:(id)arg0 ;
-(id)initWithView:(id)arg0 configuration:(id)arg1 ;
-(struct CGPoint )locationInCoordinateSpace:(id)arg0 ;
-(void)_handleGestureRecognizer:(id)arg0 ;
-(void)cancelInteraction;
-(void)dealloc;


@end


#endif