// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WKROTATINGPOPOVER_H
#define WKROTATINGPOPOVER_H

@class NSString, UIPopoverController;
@protocol UIPopoverControllerDelegate, WKRotatingPopoverDelegate;

#import <Foundation/Foundation.h>

#import "WKContentView.h"

@interface WKRotatingPopover : NSObject <UIPopoverControllerDelegate>

 {
    BOOL _isRotating;
    BOOL _isPreservingFocus;
    RetainPtr<UIPopoverController> _popoverController;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) NSObject<WKRotatingPopoverDelegate> *dismissionDelegate; // ivar: _dismissionDelegate
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIPopoverController *popoverController;
@property (nonatomic) CGPoint presentationPoint; // ivar: _presentationPoint
@property (readonly) Class superclass;
@property (readonly, nonatomic) WKContentView *view; // ivar: _view


-(NSUInteger)popoverArrowDirections;
-(id)initWithView:(id)arg0 ;
-(void)dealloc;
-(void)didRotate:(id)arg0 ;
-(void)dismissPopoverAnimated:(BOOL)arg0 ;
-(void)popoverControllerDidDismissPopover:(id)arg0 ;
-(void)presentPopoverAnimated:(BOOL)arg0 ;
-(void)willRotate:(id)arg0 ;


@end


#endif