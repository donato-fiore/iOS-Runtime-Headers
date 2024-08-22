// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CDPUISTATUSCHANGECONTROLLER_H
#define CDPUISTATUSCHANGECONTROLLER_H

@protocol CDPUIStatusChangeModel;

#import <Foundation/Foundation.h>


@interface CDPUIStatusChangeController : NSObject

@property (copy, nonatomic) id *completionCallback; // ivar: _completionCallback
@property (readonly, nonatomic) NSObject<CDPUIStatusChangeModel> *model; // ivar: _model
@property (copy, nonatomic) id *userActionCallback; // ivar: _userActionCallback


+(id)controllerWithTargetWalrusStatus:(NSUInteger)arg0 ;
+(id)controllerWithTargetWebAccessStatus:(NSUInteger)arg0 ;
-(id)_configureAlertController;
-(id)_configurePasscodeVerificationControllerWithViewController:(id)arg0 presentationType:(NSUInteger)arg1 ;
-(id)initWithModel:(id)arg0 ;
-(void)_alertWithViewController:(id)arg0 ;
-(void)_handleUserChoice:(NSUInteger)arg0 ;
-(void)_handleUserChoice:(NSUInteger)arg0 error:(id)arg1 ;
-(void)_passcodeVerificationflowWithViewController:(id)arg0 presentationType:(NSUInteger)arg1 ;
-(void)presentWithViewController:(id)arg0 presentationType:(NSUInteger)arg1 ;


@end


#endif