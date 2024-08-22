// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MPSIMAGEDEFAULTALLOCATOR_H
#define MPSIMAGEDEFAULTALLOCATOR_H

@class NSString;
@protocol MPSImageAllocator;

#import <Foundation/Foundation.h>


@interface MPSImageDefaultAllocator : NSObject <MPSImageAllocator>

 {
    int _dealloc_ok;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(id)imageBatchForCommandBuffer:(id)arg0 imageDescriptor:(id)arg1 kernel:(id)arg2 count:(NSUInteger)arg3 ;
-(id)imageForCommandBuffer:(id)arg0 imageDescriptor:(id)arg1 kernel:(id)arg2 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif