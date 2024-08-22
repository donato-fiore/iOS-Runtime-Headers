// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MFMAILCOMPOSETOFIELD_H
#define MFMAILCOMPOSETOFIELD_H

@protocol MFMailComposeToFieldDelegate;


#import "MFMailComposeRecipientTextView.h"
#import "MFComposeSMIMELockButton.h"

@interface MFMailComposeToField : MFMailComposeRecipientTextView {
    MFComposeSMIMELockButton *_smimeButton;
    BOOL _wantsEncryption;
    BOOL _canEncrypt;
}


@property (readonly, nonatomic) MFComposeSMIMELockButton *SMIMEButton;
@property (nonatomic) BOOL smimeButtonEnabled; // ivar: _smimeButtonEnabled
@property (nonatomic) BOOL smimeButtonVisible; // ivar: _smimeButtonVisible
@property (weak, nonatomic) NSObject<MFMailComposeToFieldDelegate> *toFieldDelegate; // ivar: _toFieldDelegate


-(id)_textContainerExclusionPathsWithAddButton:(BOOL)arg0 ;
-(void)_tappedSMIMEButton:(id)arg0 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)setExpanded:(BOOL)arg0 ;
-(void)setWantsEncryption:(BOOL)arg0 canEncrypt:(BOOL)arg1 animated:(BOOL)arg2 ;


@end


#endif