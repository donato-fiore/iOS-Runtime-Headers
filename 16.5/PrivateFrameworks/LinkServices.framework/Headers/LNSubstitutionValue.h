// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef LNSUBSTITUTIONVALUE_H
#define LNSUBSTITUTIONVALUE_H

@class NSUUID, LNStaticDeferredLocalizedString, NSString, LNValue;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface LNSubstitutionValue : NSObject <NSSecureCoding>



@property (readonly, copy, nonatomic) NSUUID *parameterIdentifier; // ivar: _parameterIdentifier
@property (readonly, copy, nonatomic) LNStaticDeferredLocalizedString *title; // ivar: _title
@property (readonly, copy, nonatomic) NSString *titleKey; // ivar: _titleKey
@property (readonly, copy, nonatomic) LNValue *value; // ivar: _value


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithParameterIdentifier:(id)arg0 title:(id)arg1 titleKey:(id)arg2 value:(id)arg3 ;
-(id)initWithTitle:(id)arg0 titleKey:(id)arg1 value:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif