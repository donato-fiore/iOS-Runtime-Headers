// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFCONCRETEUIKITUSERINTERFACE_H
#define WFCONCRETEUIKITUSERINTERFACE_H

@class NSArray, NSString, WFAlert, UIViewController, UIView;
@protocol WFActionUserInterfaceDelegate, WFUIKitUserInterface;

#import <Foundation/Foundation.h>

#import "WFActionUserInterfaceListener.h"

@interface WFConcreteUIKitUserInterface : NSObject <WFActionUserInterfaceDelegate, WFUIKitUserInterface>



@property (retain, nonatomic) WFActionUserInterfaceListener *actionUserInterfaceListener; // ivar: _actionUserInterfaceListener
@property (readonly, copy, nonatomic) NSArray *airPlayRouteIDs;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSInteger executionContext;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) WFAlert *presentedAlert; // ivar: _presentedAlert
@property (retain, nonatomic) UIViewController *presentedViewController; // ivar: _presentedViewController
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *userInterfaceType;
@property (readonly, weak, nonatomic) UIView *view; // ivar: _view
@property (readonly, weak, nonatomic) UIViewController *viewController; // ivar: _viewController


-(BOOL)isRunningInSiri;
-(id)initWithView:(id)arg0 viewController:(id)arg1 ;
-(id)presentationAnchorForActionUserInterface:(id)arg0 ;
-(id)viewControllerForPresentingActionUserInterface:(id)arg0 ;
-(void)actionUserInterface:(id)arg0 setSupportedInterfaceOrientations:(NSUInteger)arg1 ;
-(void)actionUserInterface:(id)arg0 showViewControllerInPlatter:(id)arg1 ;
-(void)dismissPlatterForActionUserInterface:(id)arg0 completionHandler:(id)arg1 ;
-(void)dismissPresentedContentWithCompletionHandler:(id)arg0 ;
-(void)presentAlert:(id)arg0 ;
-(void)requestActionInterfacePresentationForActionClassName:(id)arg0 classNamesByType:(id)arg1 completionHandler:(id)arg2 ;
-(void)requestAuthorizationWithConfiguration:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif