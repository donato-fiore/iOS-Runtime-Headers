// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _FBSDISPLAYLAYOUTENDPOINTSERVICES_H
#define _FBSDISPLAYLAYOUTENDPOINTSERVICES_H


#import <Foundation/Foundation.h>


@interface _FBSDisplayLayoutEndpointServices : NSObject {
    _FBSDisplayLayoutService" _sharedLock_services;
    NSUInteger _sharedLock_servicesRefCnt;
}




+(id)_checkoutServiceWithEndpoint:(id)arg0 qos:(char)arg1 ;
+(void)_checkinService:(id)arg0 ;


@end


#endif