// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef LNSUBSTITUTIONVALUE_H
#define LNSUBSTITUTIONVALUE_H

@class NSUUID, LNStaticDeferredLocalizedString, LNValue;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface LNSubstitutionValue : NSObject <NSSecureCoding>



@property (readonly, copy, nonatomic) NSUUID *parameterIdentifier; // ivar: _parameterIdentifier
@property (readonly, copy, nonatomic) LNStaticDeferredLocalizedString *title; // ivar: _title
@property (readonly, copy, nonatomic) LNValue *value; // ivar: _value


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithParameterIdentifier:(id)arg0 title:(id)arg1 value:(id)arg2 ;
-(id)initWithTitle:(id)arg0 value:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif