// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _EXHOSTVIEWCONTROLLER_H
#define _EXHOSTVIEWCONTROLLER_H

@class UIViewController, _UIRemoteViewController, NSString, UIViewController<_EXHostViewControllerDelegate>;
@protocol _UIRemoteViewControllerContaining, _EXHostSessionDelegate, _EXConnectionCreating, _EXHostViewControllerDelegate;


#import "_EXHostViewControllerConfiguration.h"
#import "_EXHostSession.h"

@interface _EXHostViewController : UIViewController <_UIRemoteViewControllerContaining, _EXHostSessionDelegate, _EXConnectionCreating>



@property (readonly, nonatomic) _UIRemoteViewController *_containedRemoteViewController;
@property (copy, nonatomic) _EXHostViewControllerConfiguration *configuration;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<_EXHostViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (retain) UIViewController *embededViewController; // ivar: _embededViewController
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIViewController<_EXHostViewControllerDelegate> *placeholderViewController; // ivar: _placeholderViewController
@property (retain) _EXHostSession *session; // ivar: _session
@property (readonly) Class superclass;
@property (readonly) Class superclass;


-(id)init;
-(id)initWithConfiguration:(id)arg0 ;
-(id)makeXPCConnectionWithError:(*id)arg0 ;
-(void)dealloc;
-(void)embedViewController:(id)arg0 ;
-(void)hostSessionDidInvalidate:(id)arg0 ;
-(void)hostSessionDidPrepareForHosting:(id)arg0 ;
-(void)hostSessionViewControllerReady:(id)arg0 ;
-(void)loadView;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif