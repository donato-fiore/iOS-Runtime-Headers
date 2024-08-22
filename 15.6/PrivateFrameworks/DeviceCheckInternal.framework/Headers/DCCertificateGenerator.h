// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DCCERTIFICATEGENERATOR_H
#define DCCERTIFICATEGENERATOR_H

@class NSData, DCContext;

#import <Foundation/Foundation.h>


@interface DCCertificateGenerator : NSObject {
    NSData *_publicKey;
    DCContext *_context;
}




-(BOOL)_isNSDate:(id)arg0 ;
-(id)_encryptData:(id)arg0 serverSyncedDate:(id)arg1 error:(*id)arg2 ;
-(id)initWithContext:(id)arg0 publicKey:(id)arg1 ;
-(int)keybagHandle;
-(void)_generateCertificateChainWithCompletion:(id)arg0 ;
-(void)dealloc;
-(void)generateEncryptedCertificateChainWithCompletion:(id)arg0 ;


@end


#endif