// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDMUTABLEREMOTEMESSAGEPOLICY_H
#define HMDMUTABLEREMOTEMESSAGEPOLICY_H



#import "HMDRemoteMessagePolicy.h"

@interface HMDMutableRemoteMessagePolicy : HMDRemoteMessagePolicy

@property BOOL allowsAnonymousMessage;
@property BOOL requiresAccountMessage;
@property BOOL requiresSecureMessage;
@property NSUInteger roles;
@property NSUInteger transportRestriction;


+(id)remoteMessagePolicyWithRequiresSecureMessage:(BOOL)arg0 allowsAnonymousMessage:(BOOL)arg1 requiresAccountMessage:(BOOL)arg2 transportRestriction:(NSUInteger)arg3 roles:(NSUInteger)arg4 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif