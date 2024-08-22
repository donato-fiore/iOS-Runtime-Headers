// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BAADELEGATEIMPL_H
#define BAADELEGATEIMPL_H

@class NSString;
@protocol BAASupportDelegate;

#import <Foundation/Foundation.h>


@interface BAADelegateImpl : NSObject <BAASupportDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)isInternal;
+(int)confirmSigKey:(unsigned int)arg0 status:(int)arg1 ;
+(int)generateSigKey:(unsigned int)arg0 keyData:(*id)arg1 attestation:(*id)arg2 pubKey:(*id)arg3 ;
+(int)getBlessedUser:(*unsigned int)arg0 keybagUUID:(unsigned char)arg1 ;
+(int)getSigKeyCertificates:(unsigned int)arg0 certificates:(*id)arg1 ;
+(int)getSigKeyExpDate:(unsigned int)arg0 expirationDate:(*NSUInteger)arg1 ;
+(int)setSigKey:(unsigned int)arg0 expirationDate:(NSUInteger)arg1 keyData:(id)arg2 certificates:(id)arg3 ;


@end


#endif