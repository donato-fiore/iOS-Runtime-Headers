// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef LNLOCALIZEDSTRINGRESOURCEDIALOG_H
#define LNLOCALIZEDSTRINGRESOURCEDIALOG_H

@protocol NSSecureCoding;


#import "LNDialog.h"
#import "LNStaticDeferredLocalizedString.h"

@interface LNLocalizedStringResourceDialog : LNDialog <NSSecureCoding>



@property (readonly, copy, nonatomic) LNStaticDeferredLocalizedString *fullString; // ivar: _fullString
@property (readonly, copy, nonatomic) LNStaticDeferredLocalizedString *supportingString; // ivar: _supportingString


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFullString:(id)arg0 supportingString:(id)arg1 localeIdentifier:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif