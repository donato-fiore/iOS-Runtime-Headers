// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CERTUIPROMPT_H
#define CERTUIPROMPT_H

@class NSString;

#import <Foundation/Foundation.h>


@interface CertUIPrompt : NSObject {
    *__SecTrust _trust;
    id *_responseBlock;
}


@property (copy, nonatomic) NSString *connectionDisplayName; // ivar: _connectionDisplayName
@property (retain, nonatomic) NSString *host; // ivar: _host
@property (retain, nonatomic) NSString *service; // ivar: _service


+(id)promptQueue;
+(id)stringForResponse:(int)arg0 ;
-(BOOL)_isRootCertificateFromTrust:(struct __SecTrust *)arg0 ;
-(id)_copyPropertiesFromTrust:(struct __SecTrust *)arg0 ;
-(id)_digestFromTrust:(struct __SecTrust *)arg0 ;
-(id)_expirationFromTrust:(struct __SecTrust *)arg0 ;
-(id)_issuerFromTrust:(struct __SecTrust *)arg0 ;
-(id)_messagingCenter;
-(id)_newUserInfoWithHostname:(id)arg0 trust:(struct __SecTrust *)arg1 options:(id)arg2 ;
-(id)_propertyNamed:(id)arg0 ofType:(id)arg1 inProperties:(id)arg2 ;
-(id)_purposeFromTrustProperties:(id)arg0 ;
-(id)_sendablePropertiesFromProperties:(id)arg0 ;
-(id)_sendablePropertiesFromTrust:(struct __SecTrust *)arg0 ;
-(id)_sendablePropertyFromProperty:(id)arg0 ;
-(id)_subtitleFromTrust:(struct __SecTrust *)arg0 ;
-(id)_titleFromTrust:(struct __SecTrust *)arg0 ;
-(id)description;
-(id)init;
-(int)_responseFromReplyDict:(id)arg0 ;
-(int)_sendRemoteMessage;
-(int)_sendRemoteMessageWithPromptOptions:(id)arg0 ;
-(int)showAndWaitForResponse;
-(struct __SecTrust *)trust;
-(void)_informConsumerOfResponse:(int)arg0 ;
-(void)dealloc;
-(void)setTrust:(struct __SecTrust *)arg0 ;
-(void)showPromptWithOptions:(id)arg0 responseBlock:(id)arg1 ;
-(void)showPromptWithResponseBlock:(id)arg0 ;


@end


#endif