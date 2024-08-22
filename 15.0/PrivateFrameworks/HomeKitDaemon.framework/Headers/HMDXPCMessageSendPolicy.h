// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDXPCMESSAGESENDPOLICY_H
#define HMDXPCMESSAGESENDPOLICY_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface HMDXPCMessageSendPolicy : NSObject <NSCopying>





-(BOOL)canSendWithPolicyParameters:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)_init;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif