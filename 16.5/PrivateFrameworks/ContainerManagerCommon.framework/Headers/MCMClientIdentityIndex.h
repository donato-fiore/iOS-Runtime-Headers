// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MCMCLIENTIDENTITYINDEX_H
#define MCMCLIENTIDENTITYINDEX_H

@class NSData, NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface MCMClientIdentityIndex : NSObject <NSCopying>

 {
    NSData *_auditToken;
    NSString *_personaUniqueString;
}




-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToClientIdentityIndex:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithAuditToken:(struct ? )arg0 personaUniqueString:(id)arg1 ;


@end


#endif