// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CERTUITRUSTMANAGER_H
#define CERTUITRUSTMANAGER_H

@class NSString;

#import <Foundation/Foundation.h>


@interface CertUITrustManager : NSObject {
    NSString *_access;
}




+(id)defaultTrustManager;
+(void)_migrateVersionZeroFromAccessGroup:(id)arg0 toGroup:(id)arg1 ;
+(void)migrateFromVersionOne;
+(void)migrateFromVersionZero;
-(BOOL)_hasExceptionsForSMIMETrust:(struct __SecTrust *)arg0 sender:(id)arg1 ;
-(id)_getExceptionsForSSLTrust:(struct __SecTrust *)arg0 hostname:(id)arg1 service:(id)arg2 ;
-(id)init;
-(id)initWithAccessGroup:(id)arg0 ;
-(int)_actionForTrust:(struct __SecTrust *)arg0 exceptions:(id)arg1 ;
-(int)actionForSMIMETrust:(struct __SecTrust *)arg0 sender:(id)arg1 ;
-(int)actionForSSLTrust:(struct __SecTrust *)arg0 hostname:(id)arg1 service:(id)arg2 ;
-(int)actionForTrust:(struct __SecTrust *)arg0 forHost:(id)arg1 andService:(id)arg2 ;
-(unsigned int)_rawTrustResultForTrust:(struct __SecTrust *)arg0 exceptions:(id)arg1 ;
-(unsigned int)rawTrustResultForSSLTrust:(struct __SecTrust *)arg0 hostname:(id)arg1 service:(id)arg2 ;
-(void)addSMIMETrust:(struct __SecTrust *)arg0 sender:(id)arg1 ;
-(void)addSSLTrust:(struct __SecTrust *)arg0 hostname:(id)arg1 service:(id)arg2 ;
-(void)allowTrust:(struct __SecTrust *)arg0 forHost:(id)arg1 service:(id)arg2 ;
-(void)clearSavedTrustSettingsForTrust:(struct __SecTrust *)arg0 host:(id)arg1 service:(id)arg2 ;
-(void)removeAllTrusts;
-(void)removeSMIMETrust:(struct __SecTrust *)arg0 sender:(id)arg1 ;
-(void)removeSSLTrust:(struct __SecTrust *)arg0 hostname:(id)arg1 service:(id)arg2 ;


@end


#endif