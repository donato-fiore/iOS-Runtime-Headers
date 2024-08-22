// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKTEXTFIELDTABLEVIEWSETTINGSROW_H
#define PKTEXTFIELDTABLEVIEWSETTINGSROW_H

@class NSString;
@protocol UITextFieldDelegate, PKTableViewSettingsRow, NSCopying;

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
@property (readonly, nonatomic) NSObject<NSCopying> *identifier; // ivar: _identifier
@property (nonatomic) NSInteger keyboardType; // ivar: _keyboardType
@property (copy, nonatomic) NSString *placeholder; // ivar: _placeholder
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *title; // ivar: _title
@property (copy, nonatomic) id *value; // ivar: _value


+(id)cellReuseIdentifier;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)shouldHighlight;
-(id)initWithIdentifier:(id)arg0 title:(id)arg1 value:(id)arg2 formatter:(id)arg3 changeHandler:(id)arg4 ;
-(id)tableViewCellForTableView:(id)arg0 atIndexPath:(id)arg1 ;
-(void)_textFieldValueChanged:(id)arg0 ;
-(void)textFieldDidEndEditing:(id)arg0 reason:(NSInteger)arg1 ;


@end


#endif