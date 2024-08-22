// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WBSCERTIFICATEWARNINGPAGECONTEXT_H
#define WBSCERTIFICATEWARNINGPAGECONTEXT_H

@class NSString, NSURL;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface WBSCertificateWarningPageContext : NSObject <NSSecureCoding>

 {
    NSString *_expiredCertificateDescription;
}


@property (readonly, nonatomic) BOOL canGoBack; // ivar: _canGoBack
@property (readonly, nonatomic) CGFloat clockSkew; // ivar: _clockSkew
@property (readonly, nonatomic) NSString *expiredCerticateDescription;
@property (readonly, nonatomic) NSURL *failingURL; // ivar: _failingURL
@property (readonly, nonatomic) NSInteger numberOfDaysInvalid; // ivar: _numberOfDaysInvalid
@property (readonly, nonatomic) NSInteger warningCategory; // ivar: _warningCategory


+(BOOL)certificateWarningCannotBeBypassedForTrust:(struct __SecTrust *)arg0 ;
+(BOOL)supportsSecureCoding;
+(NSInteger)certificateWarningCategoryForError:(id)arg0 trustIncludesRevokedCertificate:(BOOL)arg1 clockSkew:(CGFloat)arg2 ;
+(NSInteger)numberOfDaysBetweenCertificateValidityRangeAndNow:(id)arg0 ;
+(id)permanentAcceptanceConfirmationButtonTitle;
+(id)permanentAcceptanceConfirmationTitle;
-(id)init;
-(id)initLegacyTLSWarningWithFailingURL:(id)arg0 canGoBack:(BOOL)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithWarningCategory:(NSInteger)arg0 failingURL:(id)arg1 numberOfDaysInvalid:(NSInteger)arg2 canGoBack:(BOOL)arg3 clockSkew:(CGFloat)arg4 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif