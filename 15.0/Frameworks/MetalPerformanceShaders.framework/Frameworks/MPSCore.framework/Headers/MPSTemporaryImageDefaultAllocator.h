// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MPSTEMPORARYIMAGEDEFAULTALLOCATOR_H
#define MPSTEMPORARYIMAGEDEFAULTALLOCATOR_H

@class NSString;
@protocol MPSImageAllocator;


#import "MPSImageDefaultAllocator.h"

@interface MPSTemporaryImageDefaultAllocator : MPSImageDefaultAllocator <MPSImageAllocator>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(id)imageForCommandBuffer:(id)arg0 imageDescriptor:(id)arg1 kernel:(id)arg2 ;
-(id)initWithCoder:(id)arg0 ;


@end


#endif