// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MCPROFILEDETAILSCELL_H
#define MCPROFILEDETAILSCELL_H

@class UITableViewCell;



@interface MCProfileDetailsCell : UITableViewCell



-(id)_attributedSubtitleComboWithSubtitle1:(id)arg0 subtitle2:(id)arg1 nearExpiration:(BOOL)arg2 ;
-(id)_attributes:(id)arg0 modifiedWithAttributes:(id)arg1 ;
-(id)_expirationSubtitleForExpiry:(id)arg0 outNearExpiration:(*BOOL)arg1 ;
-(id)_imageForApplicationIdentifier:(id)arg0 ;
-(id)_textForLabel:(id)arg0 value:(id)arg1 ;
-(id)_titleFromCertificate:(struct __SecCertificate *)arg0 outSubtitle1:(*id)arg1 outSubtitle2:(*id)arg2 outNearExpiration:(*BOOL)arg3 ;
-(id)_titleFromPayloadInfo:(id)arg0 outSubtitle1:(*id)arg1 outSubtitle2:(*id)arg2 outNearExpiration:(*BOOL)arg3 ;
-(void)setDetails:(id)arg0 ;


@end


#endif