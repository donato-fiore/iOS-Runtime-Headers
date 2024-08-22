// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EXHOSTVIEWCONTROLLER_H
#define EXHOSTVIEWCONTROLLER_H

@class UIViewController, UIView;
@protocol _EXHostViewControllerProtocol, EXHostViewControllerDelegate;


#import "_EXHostViewControllerConfiguration.h"
#import "_EXHostSessionDriver.h"

@interface EXHostViewController : UIViewController <_EXHostViewControllerProtocol>



@property (copy, nonatomic) _EXHostViewControllerConfiguration *configuration;
@property (weak, nonatomic) NSObject<EXHostViewControllerDelegate> *delegate; // ivar: _delegate
@property (retain) UIViewController *embededViewController; // ivar: _embededViewController
@property (retain, nonatomic) UIView *placeholderView; // ivar: _placeholderView
@property (retain) _EXHostSessionDriver *sessionDriver; // ivar: _sessionDriver
@property (readonly) UIView *view;


-(id)init;
-(id)initWithConfiguration:(id)arg0 ;
-(id)makeXPCConnectionWithError:(*id)arg0 ;
-(void)embedViewController:(id)arg0 ;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif