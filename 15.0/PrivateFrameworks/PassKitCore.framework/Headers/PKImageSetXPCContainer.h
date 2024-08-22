// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKIMAGESETXPCCONTAINER_H
#define PKIMAGESETXPCCONTAINER_H

@class NSString, NSData;
@protocol NSSecureCoding, PKInvalidatable, OS_xpc_object;

#import <Foundation/Foundation.h>


@interface PKImageSetXPCContainer : NSObject <NSSecureCoding, PKInvalidatable>

 {
    BOOL _invalidated;
    NSUInteger _length;
    BOOL _isShmem;
    NSUInteger _offset;
    NSObject<OS_xpc_object> *_data;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSData *imageSetHash; // ivar: _imageSetHash
@property (readonly, nonatomic, getter=isInvalidated) BOOL invalidated;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(id)containedImageSet;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithWithXPCObject:(id)arg0 hash:(id)arg1 ;
-(id)initWithWithXPCObject:(id)arg0 length:(NSUInteger)arg1 isSharedMemory:(BOOL)arg2 offset:(NSUInteger)arg3 hash:(id)arg4 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)invalidate;


@end


#endif