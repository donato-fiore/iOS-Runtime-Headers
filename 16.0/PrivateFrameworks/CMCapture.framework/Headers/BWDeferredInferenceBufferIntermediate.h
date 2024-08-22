// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BWDEFERREDINFERENCEBUFFERINTERMEDIATE_H
#define BWDEFERREDINFERENCEBUFFERINTERMEDIATE_H

@class NSString;


#import "BWDeferredBufferIntermediate.h"

@interface BWDeferredInferenceBufferIntermediate : BWDeferredBufferIntermediate

@property (readonly, nonatomic) NSString *inferenceAttachedMediaKey; // ivar: _inferenceAttachedMediaKey


+(BOOL)supportsSecureCoding;
-(id)_shortString;
-(id)description;
-(id)initWithBuffer:(struct __CVBuffer *)arg0 tag:(id)arg1 inferenceAttachedMediaKey:(id)arg2 portType:(id)arg3 compressionProfile:(int)arg4 URL:(id)arg5 ;
-(id)initWithCoder:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif