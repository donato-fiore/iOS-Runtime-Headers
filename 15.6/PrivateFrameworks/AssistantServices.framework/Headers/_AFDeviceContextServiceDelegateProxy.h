// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _AFDEVICECONTEXTSERVICEDELEGATEPROXY_H
#define _AFDEVICECONTEXTSERVICEDELEGATEPROXY_H

@class NSString;
@protocol AFDeviceContextServiceDelegate;

#import <Foundation/Foundation.h>

#import "AFDeviceContextConnection.h"

@interface _AFDeviceContextServiceDelegateProxy : NSObject <AFDeviceContextServiceDelegate>

 {
    AFDeviceContextConnection *_connection;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithConnection:(id)arg0 ;
-(void)updateLocalDeviceContext:(id)arg0 ;


@end


#endif