// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FACIRCLESTATECONTROLLER_H
#define FACIRCLESTATECONTROLLER_H

@class FARequestConfigurator, RUIStyle, NSString, UIViewController;
@protocol FARemoteViewControllerDelegate, FACirclePresenterDelegate;

#import <Foundation/Foundation.h>


@interface FACircleStateController : NSObject <FARemoteViewControllerDelegate, FACirclePresenterDelegate>

 {
    FARequestConfigurator *_requestConfigurator;
    id *_performOperationCompletion;
}


@property (retain, nonatomic) RUIStyle *customRUIStyle; // ivar: _customRUIStyle
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger modalPresentationStyle; // ivar: _modalPresentationStyle
@property (copy, nonatomic) id *presentationHandler; // ivar: _presentationHandler
@property (nonatomic) NSUInteger presentationType; // ivar: _presentationType
@property (weak, nonatomic) UIViewController *presenter; // ivar: _presenter
@property (readonly) Class superclass;


-(BOOL)_contextRequiresRemoteService:(id)arg0 ;
-(BOOL)_processRequiresSpringBoardServices;
-(id)_whitelistedInProcessClients;
-(id)init;
-(id)initWithPresenter:(id)arg0 ;
-(void)_ensurePresenterWithCompletion:(id)arg0 ;
-(void)_performOperationWithContext:(id)arg0 viewController:(id)arg1 completion:(id)arg2 ;
-(void)_presentFlowUsingSpringBoardWithContext:(id)arg0 completion:(id)arg1 ;
-(void)_presentPlatformUnsupportedAlertWithCompletion:(id)arg0 ;
-(void)_presentViewServiceWithContext:(id)arg0 viewController:(id)arg1 completion:(id)arg2 ;
-(void)circlePresenterDidPresent:(id)arg0 ;
-(void)dealloc;
-(void)performOperationWithContext:(id)arg0 completion:(id)arg1 ;
-(void)performWithContext:(id)arg0 completion:(id)arg1 ;
-(void)remoteViewControllerDidStartFlow:(id)arg0 ;


@end


#endif