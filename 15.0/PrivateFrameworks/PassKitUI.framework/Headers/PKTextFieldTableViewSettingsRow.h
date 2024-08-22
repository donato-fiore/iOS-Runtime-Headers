// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKTEXTFIELDTABLEVIEWSETTINGSROW_H
#define PKTEXTFIELDTABLEVIEWSETTINGSROW_H

@class NSString;
@protocol UITextFieldDelegate, PKTableViewSettingsRow;

#import <Foundation/Foundation.h>

#import "PKTextFieldTableViewSettingsRowFormatter.h"

@interface PKTextFieldTableViewSettingsRow : NSObject <UITextFieldDelegate, PKTableViewSettingsRow>

 {
    PKTextFieldTableViewSettingsRowFormatter *_formatter;
}


@property (copy, nonatomic) id *changeHandler; // ivar: _changeHandler
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isEnabled) BOOL enabled; // ivar: _enabled
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger keyboardType; // ivar: _keyboardType
@property (copy, nonatomic) NSString *placeholder; // ivar: _placeholder
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *title; // ivar: _title
@property (copy, nonatomic) id *value; // ivar: _value


+(id)cellReuseIdentifier;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)shouldHighlight;
-(id)initWithTitle:(id)arg0 value:(id)arg1 formatter:(id)arg2 changeHandler:(id)arg3 ;
-(id)tableViewCellForTableView:(id)arg0 atIndexPath:(id)arg1 ;
-(void)_textFieldValueChanged:(id)arg0 ;
-(void)textFieldDidEndEditing:(id)arg0 reason:(NSInteger)arg1 ;


@end


#endif