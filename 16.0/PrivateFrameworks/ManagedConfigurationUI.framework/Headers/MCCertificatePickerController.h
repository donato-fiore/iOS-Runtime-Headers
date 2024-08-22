// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MCCERTIFICATEPICKERCONTROLLER_H
#define MCCERTIFICATEPICKERCONTROLLER_H

@class PSListItemsController;



@interface MCCertificatePickerController : PSListItemsController



-(id)navigationTitle;
-(id)specifiers;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(void)_setCellPropertiesOnSpecifier:(id)arg0 forCertificate:(struct __SecCertificate *)arg1 ;
-(void)setRowToSelect;
-(void)tableView:(id)arg0 accessoryButtonTappedForRowWithIndexPath:(id)arg1 ;


@end


#endif