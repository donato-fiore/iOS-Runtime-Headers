// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CACCONTEXTCLUESVIEWCONTROLLER_H
#define CACCONTEXTCLUESVIEWCONTROLLER_H

@class UIViewController, NSArray, NSString, UINavigationController;
@protocol UIAdaptivePresentationControllerDelegate, UISheetPresentationControllerDelegate, UIPresentationControllerDelegatePrivate, CACContextCluesWelcomeControllerDelegate, CACViewController, CACContextCluesDelegate;


#import "CACContextCluesWelcomeController.h"

@interface CACContextCluesViewController : UIViewController <UIAdaptivePresentationControllerDelegate, UISheetPresentationControllerDelegate, UIPresentationControllerDelegatePrivate, CACContextCluesWelcomeControllerDelegate, CACViewController>



@property (retain, nonatomic) NSArray *commands; // ivar: _commands
@property (retain, nonatomic) CACContextCluesWelcomeController *contextCluesController; // ivar: _contextCluesController
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CACContextCluesDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isOverlay;
@property (retain, nonatomic) UINavigationController *presentingNavigationController; // ivar: _presentingNavigationController
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSInteger zOrder;


-(BOOL)_canShowWhileLocked;
-(id)initWithCommands:(id)arg0 ;
-(void)contextCluesDoneButtonPressed:(id)arg0 ;
-(void)doneButtonPressed;
-(void)presentationControllerDidDismiss:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;


@end


#endif