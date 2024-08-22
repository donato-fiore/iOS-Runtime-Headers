// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFCONCRETEUIKITUSERINTERFACE_H
#define WFCONCRETEUIKITUSERINTERFACE_H

@class NSString, WFAlert, UIView, UIViewController;
@protocol WFUIKitUserInterface, WFActionRemoteUserInterface;

#import <Foundation/Foundation.h>


@interface WFConcreteUIKitUserInterface : NSObject <WFUIKitUserInterface>



@property (retain, nonatomic) NSObject<WFActionRemoteUserInterface> *actionUserInterface; // ivar: _actionUserInterface
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) WFAlert *presentedAlert; // ivar: _presentedAlert
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *userInterfaceType;
@property (readonly, weak, nonatomic) UIView *view; // ivar: _view
@property (readonly, weak, nonatomic) UIViewController *viewController; // ivar: _viewController


-(id)initWithView:(id)arg0 viewController:(id)arg1 ;
-(id)presentationAnchor;
-(void)dismissPresentedContentWithCompletionHandler:(id)arg0 ;
-(void)presentAlert:(id)arg0 ;
-(void)requestAuthorizationWithConfiguration:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif