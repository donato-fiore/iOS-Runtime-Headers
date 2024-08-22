// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDREMOTEMESSAGEPOLICY_H
#define HMDREMOTEMESSAGEPOLICY_H

@class HMFMessagePolicy;
@protocol NSMutableCopying;



@interface HMDRemoteMessagePolicy : HMFMessagePolicy <NSMutableCopying>



@property (readonly) BOOL allowsAnonymousMessage; // ivar: _allowsAnonymousMessage
@property (readonly) BOOL requiresAccountMessage; // ivar: _requiresAccountMessage
@property (readonly) BOOL requiresSecureMessage; // ivar: _requiresSecureMessage
@property (readonly) NSUInteger roles; // ivar: _roles
@property (readonly) NSUInteger transportRestriction; // ivar: _transportRestriction


+(id)defaultPolicy;
+(id)defaultSecurePolicy;
+(id)remoteMessagePolicyWithRequiresSecureMessage:(BOOL)arg0 allowsAnonymousMessage:(BOOL)arg1 requiresAccountMessage:(BOOL)arg2 transportRestriction:(NSUInteger)arg3 roles:(NSUInteger)arg4 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)__initWithRequiresSecureMessage:(BOOL)arg0 allowsAnonymousMessage:(BOOL)arg1 requiresAccountMessage:(BOOL)arg2 transportRestriction:(NSUInteger)arg3 roles:(NSUInteger)arg4 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;


@end


#endif