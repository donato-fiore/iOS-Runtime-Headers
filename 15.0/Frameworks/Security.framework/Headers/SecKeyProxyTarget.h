// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SECKEYPROXYTARGET_H
#define SECKEYPROXYTARGET_H

@class NSData;
@protocol SecKeyProxyProtocol;

#import <Foundation/Foundation.h>

#import "SecKeyProxy.h"

@interface SecKeyProxyTarget : NSObject <SecKeyProxyProtocol>

 {
    id *_key;
    NSData *_certificate;
    SecKeyProxy *_publicKeyProxy;
}


@property (readonly, nonatomic) *__SecKey key;


-(id)initWithKey:(id)arg0 certificate:(id)arg1 ;
-(void)getAlgorithmIDWithReply:(id)arg0 ;
-(void)getAttributesWithReply:(id)arg0 ;
-(void)getBlockSizeWithReply:(id)arg0 ;
-(void)getDescriptionWithReply:(id)arg0 ;
-(void)getExternalRepresentationWithReply:(id)arg0 ;
-(void)getPublicKey:(id)arg0 ;
-(void)initializeWithReply:(id)arg0 ;
-(void)performOperation:(NSInteger)arg0 algorithm:(id)arg1 parameters:(id)arg2 reply:(id)arg3 ;


@end


#endif