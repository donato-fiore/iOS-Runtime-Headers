// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef LNBASICDIALOG_H
#define LNBASICDIALOG_H

@protocol NSSecureCoding;


#import "LNDialog.h"
#import "LNDeferredLocalizedString.h"

@interface LNBasicDialog : LNDialog <NSSecureCoding>



@property (readonly, copy, nonatomic) LNDeferredLocalizedString *fullString; // ivar: _fullString
@property (readonly, copy, nonatomic) LNDeferredLocalizedString *printedString; // ivar: _printedString
@property (readonly, copy, nonatomic) LNDeferredLocalizedString *spokenString; // ivar: _spokenString
@property (readonly, copy, nonatomic) LNDeferredLocalizedString *supportingString; // ivar: _supportingString


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFullString:(id)arg0 supportingString:(id)arg1 localeIdentifier:(id)arg2 ;
-(id)initWithPrintedString:(id)arg0 spokenString:(id)arg1 localeIdentifier:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif