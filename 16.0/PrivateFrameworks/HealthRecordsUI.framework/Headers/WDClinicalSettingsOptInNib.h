// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WDCLINICALSETTINGSOPTINNIB_H
#define WDCLINICALSETTINGSOPTINNIB_H

@class UINib;
@protocol UITextViewDelegate;



@interface WDClinicalSettingsOptInNib : UINib

@property (weak, nonatomic) NSObject<UITextViewDelegate> *textViewDelegate; // ivar: _textViewDelegate


-(id)_footerTextViewString;
-(id)instantiateWithOwner:(id)arg0 options:(id)arg1 ;


@end


#endif