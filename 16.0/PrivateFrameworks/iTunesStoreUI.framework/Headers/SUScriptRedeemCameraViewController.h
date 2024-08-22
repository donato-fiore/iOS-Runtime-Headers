// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SUSCRIPTREDEEMCAMERAVIEWCONTROLLER_H
#define SUSCRIPTREDEEMCAMERAVIEWCONTROLLER_H

@class NSString, WebScriptObject;


#import "SUScriptObject.h"
#import "SURedeemCameraViewController.h"

@interface SUScriptRedeemCameraViewController : SUScriptObject

@property (retain, nonatomic) NSString *backButtonTitle; // ivar: _backButtonTitle
@property (retain, nonatomic) WebScriptObject *codeHandler; // ivar: _codeHandler
@property (weak, nonatomic) SURedeemCameraViewController *redeemCameraViewController; // ivar: _redeemCameraViewController


+(id)webScriptNameForKeyName:(id)arg0 ;
+(id)webScriptNameForSelector:(SEL)arg0 ;
+(void)initialize;
-(id)_className;
-(id)attributeKeys;
-(id)scriptAttributeKeys;
-(void)_performAction:(NSInteger)arg0 withObject:(id)arg1 ;
-(void)codeDetected:(id)arg0 ;
-(void)dismiss;
-(void)pauseCamera;
-(void)present;
-(void)recognitionError;
-(void)recognitionSuccess;
-(void)resumeCamera;


@end


#endif