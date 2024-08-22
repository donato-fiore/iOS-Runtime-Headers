// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _EXHOSTVIEWCONTROLLER_H
#define _EXHOSTVIEWCONTROLLER_H

@class UIViewController, _EXExtensionProcess, UIView, UIViewController<_EXHostViewControllerDelegate>;
@protocol _EXHostViewControllerProtocol, _EXHostViewControllerDelegate;


#import "_EXHostViewControllerConfiguration.h"
#import "_EXHostSessionDriver.h"

@interface _EXHostViewController : UIViewController <_EXHostViewControllerProtocol>



@property (copy, nonatomic) _EXHostViewControllerConfiguration *configuration;
@property (weak, nonatomic) NSObject<_EXHostViewControllerDelegate> *delegate; // ivar: _delegate
@property (retain) UIViewController *embededViewController; // ivar: _embededViewController
@property (retain, nonatomic) _EXExtensionProcess *extensionProcess; // ivar: _extensionProcess
@property (retain, nonatomic) UIView *placeholderView; // ivar: _placeholderView
@property (retain, nonatomic) UIViewController<_EXHostViewControllerDelegate> *placeholderViewController; // ivar: _placeholderViewController
@property (retain) _EXHostSessionDriver *sessionDriver; // ivar: _sessionDriver
@property (readonly) UIView *view;


-(id)init;
-(id)initWithConfiguration:(id)arg0 ;
-(id)makeXPCConnectionWithError:(*id)arg0 ;
-(void)embedPlaceholder;
-(void)embedViewController:(id)arg0 ;
-(void)loadView;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif