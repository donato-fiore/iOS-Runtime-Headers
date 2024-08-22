// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKPASSESXPCCONTAINER_H
#define PKPASSESXPCCONTAINER_H

@class NSDictionary, NSString, NSURL;
@protocol NSSecureCoding, PKInvalidatable;

#import <Foundation/Foundation.h>

#import "PKFileDescriptorXPCContainer.h"

@interface PKPassesXPCContainer : NSObject <NSSecureCoding, PKInvalidatable>

 {
    os_unfair_lock_s _lock;
    BOOL _invalidated;
    PKFileDescriptorXPCContainer *_fd;
    NSDictionary *_passFDs;
    NSInteger _status;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic, getter=isInvalidated) BOOL invalidated;
@property (readonly) Class superclass;
@property (retain, nonatomic) NSURL *temporaryOutputDirectory; // ivar: _temporaryOutputDirectory


+(BOOL)supportsSecureCoding;
-(id)_init;
-(id)_initWithFileDescriptorContainer:(id)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFileDescriptor:(int)arg0 ;
-(id)initWithFileURL:(id)arg0 ;
-(struct ? )unarchivePassesWithBlock:(id)arg0 ;
-(void)_unarchive;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)invalidate;


@end


#endif