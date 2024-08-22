// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _HKXPCAUDITTOKEN_H
#define _HKXPCAUDITTOKEN_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface _HKXPCAuditToken : NSObject <NSCopying>



@property (readonly, nonatomic) ? auditToken; // ivar: _auditToken
@property (readonly, nonatomic) int processIdentifier;
@property (readonly, copy, nonatomic) NSString *signingIdentifier;


+(id)signingIdentifierFromAuditToken:(struct ? )arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithAuditToken:(struct ? )arg0 ;


@end


#endif