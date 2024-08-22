// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _WKAUTHENTICATORSELECTIONCRITERIA_H
#define _WKAUTHENTICATORSELECTIONCRITERIA_H


#import <Foundation/Foundation.h>


@interface _WKAuthenticatorSelectionCriteria : NSObject

@property (nonatomic) NSInteger authenticatorAttachment; // ivar: _authenticatorAttachment
@property (nonatomic) BOOL requireResidentKey; // ivar: _requireResidentKey
@property (nonatomic) NSInteger userVerification; // ivar: _userVerification


-(id)init;


@end


#endif