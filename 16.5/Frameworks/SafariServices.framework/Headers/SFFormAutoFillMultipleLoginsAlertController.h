// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SFFORMAUTOFILLMULTIPLELOGINSALERTCONTROLLER_H
#define SFFORMAUTOFILLMULTIPLELOGINSALERTCONTROLLER_H

@class UIAlertController, UIAlertAction;



@interface SFFormAutoFillMultipleLoginsAlertController : UIAlertController {
    UIAlertAction *_cancelAction;
}


@property (nonatomic) BOOL cancelsWhenAppEntersBackground; // ivar: _cancelsWhenAppEntersBackground


+(id)alertControllerWithMatchesFromFormProtectionSpace:(id)arg0 matchesFromOtherProtectionSpaces:(id)arg1 externalCredentials:(id)arg2 preferredStyle:(NSInteger)arg3 formURL:(id)arg4 completionHandler:(id)arg5 ;
-(void)_sceneDidEnterBackground:(id)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif