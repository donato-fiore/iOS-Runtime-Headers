// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKHOVERINTERACTION_H
#define PKHOVERINTERACTION_H

@class NSString, UIView;
@protocol PKHoverControllerDelegate, UIInteraction, PKHoverInteractionDelegate;

#import <Foundation/Foundation.h>

#import "PKHoverController.h"

@interface PKHoverInteraction : NSObject <PKHoverControllerDelegate, UIInteraction>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak, nonatomic) NSObject<PKHoverInteractionDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) PKHoverController *hoverController; // ivar: _hoverController
@property (readonly) Class superclass;
@property (weak, nonatomic) UIView *view; // ivar: _view


-(id)initWithDelegate:(id)arg0 ;
-(void)didMoveToView:(id)arg0 ;
-(void)hoverController:(id)arg0 holdGestureMeanInputPoint:(struct ? )arg1 latestInputPoint:(struct ? )arg2 ;
-(void)hoverControllerHoldGestureEnded:(id)arg0 ;
-(void)willMoveToView:(id)arg0 ;


@end


#endif