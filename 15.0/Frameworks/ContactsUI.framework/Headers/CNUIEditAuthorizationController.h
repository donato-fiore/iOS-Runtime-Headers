// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CNUIEDITAUTHORIZATIONCONTROLLER_H
#define CNUIEDITAUTHORIZATIONCONTROLLER_H

@class UIViewController;
@protocol CNUIEditAuthorizationControllerDelegate;

#import <Foundation/Foundation.h>


@interface CNUIEditAuthorizationController : NSObject

@property (nonatomic) BOOL animated; // ivar: _animated
@property (weak, nonatomic) NSObject<CNUIEditAuthorizationControllerDelegate> *delegate; // ivar: _delegate
@property (weak, nonatomic) UIViewController *guardedViewController; // ivar: _guardedViewController
@property (weak, nonatomic) id *sender; // ivar: _sender


-(void)dealloc;
-(void)didAutorize;
-(void)didNotAuthorize;
-(void)lockoutRestrictionsPINControllerDidFinish:(id)arg0 ;
-(void)presentAuthorizationUI;
-(void)userDidEnterPasswordCorrectly:(BOOL)arg0 ;


@end


#endif