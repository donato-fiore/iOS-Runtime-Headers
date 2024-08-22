// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SGMAILCLIENTUTIL_H
#define SGMAILCLIENTUTIL_H

@class ECDKIMVerifier, EMDaemonInterface;

#import <Foundation/Foundation.h>


@interface SGMailClientUtil : NSObject

@property (readonly, nonatomic) ECDKIMVerifier *dkimVerifier; // ivar: _dkimVerifier
@property (readonly, nonatomic) EMDaemonInterface *emailDaemon; // ivar: _emailDaemon


+(id)convertLineEndingsToNetwork:(id)arg0 ;
+(id)sharedInstance;
-(BOOL)isMessageAvailable:(id)arg0 ;
-(NSInteger)verifyDKIMSignatureForMailWithData:(id)arg0 error:(*id)arg1 ;
-(NSInteger)verifyDKIMSignatureForMailWithData:(id)arg0 options:(NSInteger)arg1 error:(*id)arg2 ;
-(NSInteger)verifyDKIMSignatureForMailWithIdentifier:(id)arg0 error:(*id)arg1 ;
-(NSInteger)verifyDKIMSignatureForPipelineEntity:(id)arg0 error:(*id)arg1 ;
-(NSInteger)verifyDKIMSignatureForStorageEvent:(id)arg0 error:(*id)arg1 ;
-(id)_init;
-(id)allVIPEmailAddresses;
-(id)dataForMessageWithIdentifier:(id)arg0 error:(*id)arg1 ;
-(id)messageWithIdentifier:(id)arg0 error:(*id)arg1 ;
-(id)signaturesToRemoveForDKIMVerificationContext:(id)arg0 withFromHeaderDomain:(id)arg1 ;


@end


#endif