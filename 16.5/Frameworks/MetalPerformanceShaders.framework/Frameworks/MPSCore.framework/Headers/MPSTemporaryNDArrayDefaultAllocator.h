// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPSTEMPORARYNDARRAYDEFAULTALLOCATOR_H
#define MPSTEMPORARYNDARRAYDEFAULTALLOCATOR_H

@class NSString;
@protocol MPSNDArrayAllocator;


#import "MPSNDArrayDefaultAllocator.h"

@interface MPSTemporaryNDArrayDefaultAllocator : MPSNDArrayDefaultAllocator <MPSNDArrayAllocator>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(id)arrayForCommandBuffer:(id)arg0 arrayDescriptor:(id)arg1 kernel:(id)arg2 ;
-(id)initWithCoder:(id)arg0 ;


@end


#endif