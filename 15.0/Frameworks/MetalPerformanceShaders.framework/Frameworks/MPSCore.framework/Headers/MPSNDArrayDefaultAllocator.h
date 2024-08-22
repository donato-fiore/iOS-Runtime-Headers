// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MPSNDARRAYDEFAULTALLOCATOR_H
#define MPSNDARRAYDEFAULTALLOCATOR_H

@class NSString;
@protocol MPSNDArrayAllocator;

#import <Foundation/Foundation.h>


@interface MPSNDArrayDefaultAllocator : NSObject <MPSNDArrayAllocator>

 {
    int _dealloc_ok;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(id)arrayForCommandBuffer:(id)arg0 arrayDescriptor:(id)arg1 kernel:(id)arg2 ;
-(id)bufferForCommandBuffer:(id)arg0 size:(NSUInteger)arg1 options:(NSUInteger)arg2 kernel:(id)arg3 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)freeBuffer:(id)arg0 forCommandBuffer:(id)arg1 ;


@end


#endif