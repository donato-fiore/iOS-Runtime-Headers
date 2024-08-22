// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef STACTIVITYATTRIBUTION_H
#define STACTIVITYATTRIBUTION_H

@class BSAuditToken, NSString;
@protocol NSSecureCoding, BSDescriptionProviding;

#import <Foundation/Foundation.h>


@interface STActivityAttribution : NSObject <NSSecureCoding, BSDescriptionProviding>



@property (readonly, nonatomic) ? auditToken;
@property (readonly, copy, nonatomic) BSAuditToken *bsAuditToken; // ivar: _bsAuditToken
@property (readonly, nonatomic) int clientProvidedPID; // ivar: _clientProvidedPID
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) int pid;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)attributionWithAuditToken:(struct ? )arg0 ;
+(id)attributionWithPID:(int)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)init;
-(id)initWithAuditToken:(struct ? )arg0 ;
-(id)initWithBSAuditToken:(id)arg0 clientProvidedPID:(int)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPID:(int)arg0 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif