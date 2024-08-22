// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NSERROR_H
#define NSERROR_H

@class NSDictionary, NSArray;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "NSString.h"

@interface NSError : NSObject <NSCopying, NSSecureCoding>

 {
    *void _reserved;
    NSInteger _code;
    NSString *_domain;
    NSDictionary *_userInfo;
}


@property (readonly) NSInteger code;
@property (readonly, copy) NSString *domain;
@property (readonly, copy) NSString *helpAnchor;
@property (readonly, copy) NSString *localizedDescription;
@property (readonly, copy) NSString *localizedFailureReason;
@property (readonly, copy) NSArray *localizedRecoveryOptions;
@property (readonly, copy) NSString *localizedRecoverySuggestion;
@property (readonly) id *recoveryAttempter;
@property (readonly, copy) NSArray *underlyingErrors;
@property (readonly, copy) NSDictionary *userInfo;


+(BOOL)supportsSecureCoding;
+(id)_readCorruptErrorWithFormat:(id)arg0 ;
+(id)_web_errorWithDomain:(id)arg0 code:(NSInteger)arg1 URL:(id)arg2 ;
+(id)_web_errorWithDomain:(id)arg0 code:(NSInteger)arg1 failingURL:(id)arg2 ;
+(id)errorWithDomain:(id)arg0 code:(NSInteger)arg1 userInfo:(id)arg2 ;
+(id)userInfoValueProviderForDomain:(SEL)arg0 ;
+(void)_registerBuiltInFormatters;
+(void)_registerFormatter:(*unk)arg0 forErrorKey:(id)arg1 parameters:(char *)arg2 ;
+(void)_setFileNameLocalizationEnabled:(BOOL)arg0 ;
+(void)_web_addErrorsWithCodesAndDescriptions:(id)arg0 inDomain:(id)arg1 ;
-(?)_collectApplicableUserInfoFormattersmax;
-(?)_formatCocoaErrorString:(?)arg0 parameters:(?)arg1 applicableFormatterscount;
-(BOOL)_web_errorIsInDomain:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)_cfTypeID;
-(NSUInteger)hash;
-(id)_cocoaErrorString:(id)arg0 ;
-(id)_cocoaErrorString:(id)arg0 fromBundle:(id)arg1 tableName:(id)arg2 ;
-(id)_cocoaErrorStringWithKind:(id)arg0 ;
-(id)_cocoaErrorStringWithKind:(id)arg0 variant:(id)arg1 ;
-(id)_web_failingURL;
-(id)_web_initWithDomain:(id)arg0 code:(NSInteger)arg1 failingURL:(id)arg2 ;
-(id)_web_initWithDomain_nowarn:(id)arg0 code:(NSInteger)arg1 URL:(id)arg2 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDomain:(id)arg0 code:(NSInteger)arg1 userInfo:(id)arg2 ;
-(id)redactedDescription;
-(id)replacementObjectForPortCoder:(id)arg0 ;
-(struct __CFString *)_retainedUserInfoCallBackForKey:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif