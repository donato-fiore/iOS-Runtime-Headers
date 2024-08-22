// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AKMASTERTOKEN_H
#define AKMASTERTOKEN_H

@class NSMutableDictionary, NSData, NSString;


#import "AKToken.h"

@interface AKMasterToken : AKToken {
    NSMutableDictionary *_properties;
}


@property (readonly, nonatomic) NSData *encryptedSessionKey;
@property (readonly, nonatomic) NSData *externalizedVersion;
@property (readonly, nonatomic) NSString *externalizedVersionString;
@property (readonly, nonatomic) NSData *sessionKey;


+(id)tokenWithExternalizedVersion:(id)arg0 lifetime:(id)arg1 ;
+(id)tokenWithExternalizedVersionString:(id)arg0 ;
-(BOOL)updateWithHTTPURLResponse:(id)arg0 ;
-(id)init;
-(id)initWithAppleID:(id)arg0 altDSID:(id)arg1 ;
-(id)stringValue;
-(void)setStringValue:(id)arg0 ;


@end


#endif