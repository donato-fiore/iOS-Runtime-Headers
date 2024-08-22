// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CRKASMCERTIFICATEPARSERRESULT_H
#define CRKASMCERTIFICATEPARSERRESULT_H

@class NSString, NSError;

#import <Foundation/Foundation.h>


@interface CRKASMCertificateParserResult : NSObject

@property (readonly, copy, nonatomic) NSString *userIdentifier; // ivar: _userIdentifier
@property (readonly, nonatomic) NSError *validationError; // ivar: _validationError


+(BOOL)certificate:(id)arg0 hasCommonNameWithPrefix:(id)arg1 ;
+(id)resultForCertificate:(id)arg0 expectedCommonNamePrefix:(id)arg1 expectedUserIdentifier:(id)arg2 ;
-(BOOL)isCertificateValidWithError:(*id)arg0 ;
-(id)initWithUserIdentifier:(id)arg0 validationError:(id)arg1 ;


@end


#endif