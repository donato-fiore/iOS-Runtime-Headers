// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TRANSLATIONTOCHOSENLOCALEACTIVITY_H
#define TRANSLATIONTOCHOSENLOCALEACTIVITY_H

@class UIViewController, NSString;
@protocol _SFTranslationTargetLocaleAlertControllerDelegate;


#import "TranslationActivity.h"

@interface TranslationToChosenLocaleActivity : TranslationActivity <_SFTranslationTargetLocaleAlertControllerDelegate>

 {
    UIViewController *_activityViewController;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)canPerformWithTranslationContext:(id)arg0 ;
-(BOOL)translationAlertControllerShouldDismissAfterSelection:(id)arg0 ;
-(NSInteger)actionType;
-(id)activityTitle;
-(id)activityViewController;
-(void)prepareWithTranslationContext:(id)arg0 ;
-(void)translationAlertController:(id)arg0 didSelectLocale:(id)arg1 ;
-(void)translationAlertController:(id)arg0 validateTargetLocale:(id)arg1 completionHandler:(id)arg2 ;


@end


#endif