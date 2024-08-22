// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HAP2ACCESSORYSERVERSECURETRANSPORTBASEDEFAULTENCRYPTEDSESSION_H
#define HAP2ACCESSORYSERVERSECURETRANSPORTBASEDEFAULTENCRYPTEDSESSION_H

@class NSString;
@protocol HAPEncryptedSession;

#import <Foundation/Foundation.h>


@interface HAP2AccessoryServerSecureTransportBaseDefaultEncryptedSession : NSObject <HAPEncryptedSession>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)decryptData:(id)arg0 additionalAuthenticatedData:(id)arg1 error:(*id)arg2 ;
-(id)encryptData:(id)arg0 additionalAuthenticatedData:(id)arg1 error:(*id)arg2 ;


@end


#endif