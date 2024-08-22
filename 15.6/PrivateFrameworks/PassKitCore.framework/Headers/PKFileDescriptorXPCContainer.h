// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKFILEDESCRIPTORXPCCONTAINER_H
#define PKFILEDESCRIPTORXPCCONTAINER_H

@class NSString;
@protocol NSSecureCoding, PKInvalidatable, OS_xpc_object;

#import <Foundation/Foundation.h>


@interface PKFileDescriptorXPCContainer : NSObject <NSSecureCoding, PKInvalidatable>

 {
    BOOL _invalidated;
    os_unfair_lock_s _readLock;
    os_unfair_lock_s _writeLock;
    NSObject<OS_xpc_object> *_fd;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic, getter=isInvalidated) BOOL invalidated;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(id)_init;
-(id)_initWithXPCFileDescriptor:(id)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFileDescriptor:(int)arg0 ;
-(id)initWithFileURL:(id)arg0 ;
-(void)accessFileDescriptorWithBlock:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)invalidate;


@end


#endif