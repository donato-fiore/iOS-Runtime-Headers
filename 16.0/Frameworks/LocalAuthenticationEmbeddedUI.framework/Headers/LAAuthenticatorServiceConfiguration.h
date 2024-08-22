// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef LAAUTHENTICATORSERVICECONFIGURATION_H
#define LAAUTHENTICATORSERVICECONFIGURATION_H

@class UIImage, NSString, LAContext;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface LAAuthenticatorServiceConfiguration : NSObject <NSSecureCoding>



@property (retain, nonatomic) UIImage *appIcon; // ivar: _appIcon
@property (retain, nonatomic) NSString *cancelButtonTitle; // ivar: _cancelButtonTitle
@property (readonly, nonatomic) LAContext *context; // ivar: _context
@property (retain, nonatomic) NSString *fallbackButtonTitle; // ivar: _fallbackButtonTitle
@property (nonatomic) BOOL headerHidden; // ivar: _headerHidden
@property (nonatomic) NSUInteger mode; // ivar: _mode
@property (nonatomic) NSInteger passcodeLength; // ivar: _passcodeLength
@property (retain, nonatomic) NSString *passwordFieldPlaceholder; // ivar: _passwordFieldPlaceholder
@property (retain, nonatomic) NSString *prompt; // ivar: _prompt
@property (readonly, nonatomic) NSUInteger requirement; // ivar: _requirement
@property (nonatomic) BOOL requiresIntent; // ivar: _requiresIntent
@property (nonatomic) NSUInteger style; // ivar: _style
@property (retain, nonatomic) NSString *subtitle; // ivar: _subtitle
@property (retain, nonatomic) NSString *title; // ivar: _title
@property (retain, nonatomic) NSString *verifyPrompt; // ivar: _verifyPrompt


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithContext:(id)arg0 ;
-(id)initWithContext:(id)arg0 requirement:(NSUInteger)arg1 ;
-(id)initWithContext:(id)arg0 requirement:(NSUInteger)arg1 options:(id)arg2 ;
-(id)initWithCustomPasswordConfiguration:(id)arg0 context:(id)arg1 ;
-(id)validateConfiguration;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif