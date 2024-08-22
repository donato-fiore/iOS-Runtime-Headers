// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef KEYCHAINSYNCSECURITYCODECELL_H
#define KEYCHAINSYNCSECURITYCODECELL_H

@class UILabel, NSString;


#import "PSEditableTableCell.h"

@interface KeychainSyncSecurityCodeCell : PSEditableTableCell {
    UILabel *_bulletTextLabel;
}


@property (retain, nonatomic) NSString *firstPasscodeEntry; // ivar: _firstPasscodeEntry
@property (nonatomic) int mode; // ivar: _mode
@property (nonatomic) int securityCodeType; // ivar: _securityCodeType


-(BOOL)textField:(id)arg0 shouldChangeCharactersInRange:(struct _NSRange )arg1 replacementString:(id)arg2 ;
-(BOOL)textFieldShouldBeginEditing:(id)arg0 ;
-(void)layoutSubviews;
-(void)setBulletText:(id)arg0 ;


@end


#endif