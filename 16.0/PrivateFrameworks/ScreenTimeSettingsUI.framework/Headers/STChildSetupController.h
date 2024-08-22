// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef STCHILDSETUPCONTROLLER_H
#define STCHILDSETUPCONTROLLER_H

@class UIViewController;

#import <Foundation/Foundation.h>

#import "STRootViewModelCoordinator.h"
#import "STIntroductionController.h"

@interface STChildSetupController : NSObject

@property (copy) id *completionHandler; // ivar: _completionHandler
@property (copy) id *completionHandlerWithIntroductionModel; // ivar: _completionHandlerWithIntroductionModel
@property (retain, nonatomic) STRootViewModelCoordinator *coordinator; // ivar: _coordinator
@property (readonly, nonatomic) UIViewController *initialViewController; // ivar: _initialViewController
@property (retain, nonatomic) STIntroductionController *introductionController; // ivar: _introductionController


-(id)initOnChildDeviceWithDSID:(id)arg0 childAge:(id)arg1 ;
-(id)initOnChildDeviceWithDSID:(id)arg0 childAge:(id)arg1 childName:(id)arg2 ;
-(id)initWithDSID:(id)arg0 ;
-(id)initWithDSID:(id)arg0 isChildDevice:(BOOL)arg1 ;
-(id)initWithDSID:(id)arg0 isChildDevice:(BOOL)arg1 childAge:(id)arg2 childName:(id)arg3 updateExistingSettings:(BOOL)arg4 ;
-(id)initWithDSID:(id)arg0 isChildDevice:(BOOL)arg1 updateExistingSettings:(BOOL)arg2 ;
-(id)initWithDSID:(id)arg0 updateExistingSettings:(BOOL)arg1 ;
-(void)saveValuesForModel:(id)arg0 ;


@end


#endif