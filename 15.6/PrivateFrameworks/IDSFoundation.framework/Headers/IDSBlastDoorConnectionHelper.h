// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IDSBLASTDOORCONNECTIONHELPER_H
#define IDSBLASTDOORCONNECTIONHELPER_H


#import <Foundation/Foundation.h>


@interface IDSBlastDoorConnectionHelper : NSObject

@property (retain, nonatomic) id *idsBlastDoor; // ivar: _idsBlastDoor


+(id)getBlastDoorSharedConnection;
-(BOOL)commandEnabledForBlastDoor:(id)arg0 topic:(id)arg1 ;
-(BOOL)removeAllowlistedKey:(id)arg0 fromPayload:(id)arg1 ;
-(id)init;
-(void)addAllowlistedKey:(id)arg0 toValidatedPayload:(id)arg1 fromOriginalPayload:(id)arg2 ;
-(void)auditMissingHeaderKeys:(id)arg0 target:(id)arg1 ;
-(void)diffuseAPSUserPayload:(id)arg0 topic:(id)arg1 withCompletionBlock:(id)arg2 ;


@end


#endif