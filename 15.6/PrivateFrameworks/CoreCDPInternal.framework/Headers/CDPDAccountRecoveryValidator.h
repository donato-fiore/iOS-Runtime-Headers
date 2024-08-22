// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CDPDACCOUNTRECOVERYVALIDATOR_H
#define CDPDACCOUNTRECOVERYVALIDATOR_H

@class CDPContext, NSString, NSDictionary;
@protocol CDPRecoveryKeyValidatorInternal, CDPAuthProviderInternal;

#import <Foundation/Foundation.h>


@interface CDPDAccountRecoveryValidator : NSObject <CDPRecoveryKeyValidatorInternal>

 {
    id<CDPAuthProviderInternal> *_authProvider;
    CDPContext *_context;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSDictionary *recoveredInfo; // ivar: _recoveredInfo
@property (copy, nonatomic) NSString *recoveryKey; // ivar: _recoveryKey
@property (readonly) Class superclass;


-(id)_cdpErrorFromAuthKitError:(id)arg0 ;
-(id)initWithContext:(id)arg0 authProvider:(id)arg1 ;
-(void)confirmRecoveryKey:(id)arg0 completion:(id)arg1 ;
-(void)generateRecoveryKey:(id)arg0 ;


@end


#endif