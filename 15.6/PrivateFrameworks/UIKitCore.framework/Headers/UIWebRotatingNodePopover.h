// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UIWEBROTATINGNODEPOPOVER_H
#define UIWEBROTATINGNODEPOPOVER_H

@class NSString, DOMNode;
@protocol UIPopoverControllerDelegate, UIWebRotatingNodePopoverDelegate;

#import <Foundation/Foundation.h>

#import "UIPopoverController.h"

@interface UIWebRotatingNodePopover : NSObject <UIPopoverControllerDelegate>

 {
    BOOL _isRotating;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) NSObject<UIWebRotatingNodePopoverDelegate> *dismissDelegate; // ivar: _dismissDelegate
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) DOMNode *node; // ivar: _node
@property (retain, nonatomic) UIPopoverController *popoverController; // ivar: _popoverController
@property (nonatomic) CGPoint presentationPoint; // ivar: _presentationPoint
@property (readonly) Class superclass;


-(NSUInteger)popoverArrowDirections;
-(id)initWithDOMNode:(id)arg0 ;
-(void)dealloc;
-(void)didRotate:(id)arg0 ;
-(void)dismissPopoverAnimated:(BOOL)arg0 ;
-(void)popoverControllerDidDismissPopover:(id)arg0 ;
-(void)presentPopoverAnimated:(BOOL)arg0 ;
-(void)willRotate:(id)arg0 ;


@end


#endif