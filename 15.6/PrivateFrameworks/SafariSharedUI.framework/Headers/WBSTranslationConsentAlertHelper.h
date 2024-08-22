// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WBSTRANSLATIONCONSENTALERTHELPER_H
#define WBSTRANSLATIONCONSENTALERTHELPER_H

@class UIViewController, NSString;
@protocol UIAdaptivePresentationControllerDelegate, WBSTranslationConsentAlertHelperDelegate;

#import <Foundation/Foundation.h>


@interface WBSTranslationConsentAlertHelper : NSObject <UIAdaptivePresentationControllerDelegate>

 {
    UIViewController *_currentlyPresentedViewController;
    id *_consentCompletionHandler;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<WBSTranslationConsentAlertHelperDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)consentAlertForType:(NSUInteger)arg0 withCompletionHandler:(id)arg1 ;
-(void)_callCompletionHandlerIfNeededWithConsent:(BOOL)arg0 ;
-(void)_enableTranslation:(id)arg0 ;
-(void)_notNow:(id)arg0 ;
-(void)presentationControllerDidDismiss:(id)arg0 ;


@end


#endif