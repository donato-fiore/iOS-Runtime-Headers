// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UIPREVIEWINTERACTIONDECAYTOUCHFORCEPROVIDER_H
#define _UIPREVIEWINTERACTIONDECAYTOUCHFORCEPROVIDER_H

@class NSString;
@protocol _UIPreviewInteractionTouchForceProviding, UICoordinateSpace;

#import <Foundation/Foundation.h>


@interface _UIPreviewInteractionDecayTouchForceProvider : NSObject <_UIPreviewInteractionTouchForceProviding>

 {
    id<_UIPreviewInteractionTouchForceProviding> *_touchForceProvider;
    CGFloat _initialTouchForce;
    CGPoint _location;
    id<UICoordinateSpace> *_coordinateSpace;
}


@property (nonatomic, getter=isActive) BOOL active; // ivar: _active
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) CGFloat touchForce;


-(id)initWithTouchForceProvider:(id)arg0 ;
-(struct CGPoint )locationInCoordinateSpace:(id)arg0 ;
-(void)cancelInteraction;


@end


#endif