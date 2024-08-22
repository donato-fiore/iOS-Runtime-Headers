// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CPSBASETEMPLATEVIEWCONTROLLER_H
#define CPSBASETEMPLATEVIEWCONTROLLER_H

@class UIViewController, CPTemplate, UITapGestureRecognizer, NSString, NAFuture;
@protocol CPSButtonDelegate, UIGestureRecognizerDelegate, CPSTemplateEnvironmentDelegate, CPBaseTemplateProviding, CPSBaseTemplateViewController, BSInvalidatable, CPTemplateDelegate, CPSTemplateViewControllerDelegate;


#import "CPSTemplateEnvironment.h"

@interface CPSBaseTemplateViewController : UIViewController <CPSButtonDelegate, UIGestureRecognizerDelegate, CPSTemplateEnvironmentDelegate, CPBaseTemplateProviding, CPSBaseTemplateViewController, BSInvalidatable>



@property (retain, nonatomic) CPTemplate *associatedTemplate; // ivar: _associatedTemplate
@property (retain, nonatomic) UITapGestureRecognizer *backGestureRecognizer; // ivar: _backGestureRecognizer
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL didDisappear; // ivar: _didDisappear
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isNowPlayingApp; // ivar: _isNowPlayingApp
@property (nonatomic) BOOL isPopping; // ivar: _isPopping
@property (readonly) Class superclass;
@property (retain, nonatomic) NSObject<CPTemplateDelegate> *templateDelegate; // ivar: _templateDelegate
@property (readonly, nonatomic) CPSTemplateEnvironment *templateEnvironment; // ivar: _templateEnvironment
@property (readonly, nonatomic) NAFuture *templateProviderFuture; // ivar: _templateProviderFuture
@property (weak, nonatomic) NSObject<CPSTemplateViewControllerDelegate> *viewControllerDelegate; // ivar: _viewControllerDelegate


-(BOOL)_wantsNowPlayingButton;
-(BOOL)gestureRecognizer:(id)arg0 shouldReceivePress:(id)arg1 ;
-(id)_barButtonItemForBarButton:(id)arg0 ;
-(id)_barButtonItemForIdentifier:(id)arg0 ;
-(id)_nowPlayingBarButtonItem;
-(id)initWithTemplate:(id)arg0 templateDelegate:(id)arg1 templateEnvironment:(id)arg2 ;
-(void)_addGestureRecognizerIfNecessary;
-(void)_backGestureFired:(id)arg0 ;
-(void)_cleanup;
-(void)_cps_viewControllerWasPopped;
-(void)_dismissTemplateViewController;
-(void)_nowPlayingButtonTapped:(id)arg0 ;
-(void)_updateLeadingBarButtons;
-(void)_updateTemplate:(id)arg0 ;
-(void)_updateTrailingBarButtons;
-(void)_viewDidLoad;
-(void)applicationDidBecomeNowPlayingApp:(BOOL)arg0 ;
-(void)dealloc;
-(void)didSelectButton:(id)arg0 ;
-(void)invalidate;
-(void)setBarButton:(id)arg0 image:(id)arg1 ;
-(void)setBarButton:(id)arg0 title:(id)arg1 ;
-(void)setControl:(id)arg0 enabled:(BOOL)arg1 ;
-(void)setControl:(id)arg0 selected:(BOOL)arg1 ;
-(void)setHostBackButton:(id)arg0 ;
-(void)setLeadingNavigationBarButtons:(id)arg0 ;
-(void)setTrailingNavigationBarButtons:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif