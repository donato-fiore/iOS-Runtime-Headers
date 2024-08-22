// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _SFTRANSLATIONTARGETLOCALEALERTACTIONCONTENTVIEWCONTROLLER_H
#define _SFTRANSLATIONTARGETLOCALEALERTACTIONCONTENTVIEWCONTROLLER_H

@class UIViewController, NSString, NSLayoutConstraint;



@interface _SFTranslationTargetLocaleAlertActionContentViewController : UIViewController {
    NSString *_localeIdentifier;
    NSLayoutConstraint *_topTextPaddingConstraint;
    NSLayoutConstraint *_bottomTextPaddingConstraint;
}




-(id)initWithLocaleIdentifier:(id)arg0 ;
-(void)_updateVerticalPadding;
-(void)loadView;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)viewDidLoad;


@end


#endif