// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UIPREVIEWINTERACTIONSIMULATINGTOUCHFORCEPROVIDER_H
#define _UIPREVIEWINTERACTIONSIMULATINGTOUCHFORCEPROVIDER_H

@class NSString;
@protocol _UIPreviewInteractionTouchForceProviding, UICoordinateSpace;

#import <Foundation/Foundation.h>


@interface _UIPreviewInteractionSimulatingTouchForceProvider : NSObject <_UIPreviewInteractionTouchForceProviding>

 {
    CGFloat _targetTouchForce;
    CGPoint _location;
    id<UICoordinateSpace> *_coordinateSpace;
}


@property (nonatomic, getter=isActive) BOOL active; // ivar: _active
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) CGFloat touchForce;


-(id)initWithTouchForce:(CGFloat)arg0 location:(struct CGPoint )arg1 coordinateSpace:(id)arg2 ;
-(struct CGPoint )locationInCoordinateSpace:(id)arg0 ;
-(void)cancelInteraction;


@end


#endif