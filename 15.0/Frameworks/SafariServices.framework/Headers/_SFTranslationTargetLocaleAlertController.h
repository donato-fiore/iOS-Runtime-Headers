// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _SFTRANSLATIONTARGETLOCALEALERTCONTROLLER_H
#define _SFTRANSLATIONTARGETLOCALEALERTCONTROLLER_H

@class UIAlertController, WBSTranslationContext, NSString, NSMutableDictionary;
@protocol _SFTranslationTargetLocaleAlertControllerDelegate;



@interface _SFTranslationTargetLocaleAlertController : UIAlertController <_SFTranslationTargetLocaleAlertControllerDelegate>

 {
    WBSTranslationContext *_translationContext;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<_SFTranslationTargetLocaleAlertControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSMutableDictionary *localeIdentifierToAlertActionMap; // ivar: _localeIdentifierToAlertActionMap
@property (readonly) Class superclass;


+(id)translationAlertControllerWithDelegate:(id)arg0 localeIdentifiers:(id)arg1 ;
-(id)initWithTranslationContext:(id)arg0 ;
-(void)_setUpWithLocaleIdentifiers:(id)arg0 ;
-(void)_translationAvailabilityDidChange:(id)arg0 ;
-(void)configurePopoverWithSourceInfo:(id)arg0 ;
-(void)translationAlertController:(id)arg0 didSelectLocale:(id)arg1 ;
-(void)translationAlertController:(id)arg0 validateTargetLocale:(id)arg1 completionHandler:(id)arg2 ;
-(void)translationAvailabilityDidChange;


@end


#endif