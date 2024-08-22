// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NSXPCLISTENERENDPOINT_H
#define NSXPCLISTENERENDPOINT_H

@protocol NSSecureCoding, OS_xpc_object;

#import <Foundation/Foundation.h>


@interface NSXPCListenerEndpoint : NSObject <NSSecureCoding>

 {
    NSObject<OS_xpc_object> *_endpoint;
}




+(BOOL)supportsSecureCoding;
-(id)_endpoint;
-(id)_initWithConnection:(id)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)_setEndpoint:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif