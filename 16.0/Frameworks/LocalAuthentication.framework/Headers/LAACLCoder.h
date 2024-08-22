// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef LAACLCODER_H
#define LAACLCODER_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface LAACLCoder : NSObject {
    NSInteger _authType;
    NSInteger _fallbackAuthType;
    NSMutableDictionary *_constraints;
    NSMutableDictionary *_credentials;
}




-(id)encode;
-(id)init;
-(void)addConstraint:(id)arg0 ;
-(void)addCredential:(id)arg0 credentialType:(NSInteger)arg1 ;
-(void)setAuthenticationType:(NSInteger)arg0 ;
-(void)setFallbackAuthenticationType:(NSInteger)arg0 ;


@end


#endif