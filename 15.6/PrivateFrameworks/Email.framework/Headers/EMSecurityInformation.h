// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EMSECURITYINFORMATION_H
#define EMSECURITYINFORMATION_H

@class NSString, NSArray, NSError;
@protocol NSSecureCoding, EFPubliclyDescribable;

#import <Foundation/Foundation.h>


@interface EMSecurityInformation : NSObject <NSSecureCoding, EFPubliclyDescribable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSString *ef_publicDescription;
@property (readonly, nonatomic) BOOL hasEncryptedDescendantPart; // ivar: _hasEncryptedDescendantPart
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isEncrypted; // ivar: _isEncrypted
@property (readonly, nonatomic) BOOL isSigned;
@property (readonly, nonatomic) NSArray *signers; // ivar: _signers
@property (readonly, nonatomic) NSError *smimeError; // ivar: _smimeError
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSigners:(id)arg0 isEncrypted:(BOOL)arg1 hasEncryptedDescendantPart:(BOOL)arg2 smimeError:(id)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)reevaluateTrustWithNetworkAccessAllowed;


@end


#endif