// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBWINDOWDRAGINTERACTION_H
#define SBWINDOWDRAGINTERACTION_H

@class UIDragInteraction, NSString, UIGestureRecognizer;
@protocol SBAppPlatterDragSourceViewProviding;



@interface SBWindowDragInteraction : UIDragInteraction

@property (retain, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (readonly, weak, nonatomic) UIGestureRecognizer *gestureRecognizer; // ivar: _gestureRecognizer
@property (retain, nonatomic) NSString *sceneIdentifier; // ivar: _sceneIdentifier
@property (weak, nonatomic) NSObject<SBAppPlatterDragSourceViewProviding> *sourceViewProvider; // ivar: _sourceViewProvider


-(id)initWithDelegate:(id)arg0 gestureRecognizer:(id)arg1 ;
-(struct CGPoint )_locationInView:(id)arg0 ;


@end


#endif