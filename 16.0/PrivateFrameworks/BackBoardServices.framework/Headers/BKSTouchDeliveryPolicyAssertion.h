// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BKSTOUCHDELIVERYPOLICYASSERTION_H
#define BKSTOUCHDELIVERYPOLICYASSERTION_H

@protocol OS_xpc_object;

#import <Foundation/Foundation.h>


@interface BKSTouchDeliveryPolicyAssertion : NSObject {
    NSObject<OS_xpc_object> *_listener;
}




-(id)endpoint;
-(id)init;
-(void)dealloc;
-(void)invalidate;


@end


#endif