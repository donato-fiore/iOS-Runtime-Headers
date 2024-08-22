// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDCONFIGURATIONMESSAGEPOLICY_H
#define HMDCONFIGURATIONMESSAGEPOLICY_H

@class HMFMessagePolicy;



@interface HMDConfigurationMessagePolicy : HMFMessagePolicy

@property (readonly) NSUInteger operationTypes; // ivar: _operationTypes


+(id)policyWithOperationTypes:(NSUInteger)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)__initWithOperationTypes:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif