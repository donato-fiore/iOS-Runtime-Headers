// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NSXPCLISTENERENDPOINT_H
#define NSXPCLISTENERENDPOINT_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface NSXPCListenerEndpoint : NSObject <NSSecureCoding>

 {
    *void _internal;
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