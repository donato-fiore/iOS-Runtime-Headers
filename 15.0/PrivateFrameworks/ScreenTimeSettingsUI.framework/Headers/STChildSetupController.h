// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef STCHILDSETUPCONTROLLER_H
#define STCHILDSETUPCONTROLLER_H

@class UIViewController;

#import <Foundation/Foundation.h>

#import "STRootViewModelCoordinator.h"
#import "STIntroductionController.h"

@interface STChildSetupController : NSObject

@property (copy) id *completionHandler; // ivar: _completionHandler
@property (retain, nonatomic) STRootViewModelCoordinator *coordinator; // ivar: _coordinator
@property (readonly, nonatomic) UIViewController *initialViewController; // ivar: _initialViewController
@property (retain, nonatomic) STIntroductionController *introductionController; // ivar: _introductionController


-(id)initWithDSID:(id)arg0 ;
-(void)saveValuesForModel:(id)arg0 ;


@end


#endif