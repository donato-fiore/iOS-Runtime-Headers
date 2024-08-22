// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _EXUISCENESESSION_H
#define _EXUISCENESESSION_H

@class EXSceneSession, NSString, _EXPromise, UIViewController;
@protocol NSXPCListenerDelegate;


#import "_EXExtensionRootViewController.h"

@interface _EXUISceneSession : EXSceneSession <NSXPCListenerDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain) _EXPromise *initializationPromise; // ivar: _initializationPromise
@property (retain, nonatomic) _EXExtensionRootViewController *rootViewController; // ivar: _rootViewController
@property (readonly) Class superclass;
@property (retain, nonatomic) UIViewController *viewController; // ivar: _viewController


-(id)initWithExtension:(id)arg0 ;
-(id)makeConfigurationWithParameters:(id)arg0 ;
-(id)makeConnectionResponse;
-(id)makeSceneWithError:(*id)arg0 ;
-(void)connectToScene:(id)arg0 ;


@end


#endif