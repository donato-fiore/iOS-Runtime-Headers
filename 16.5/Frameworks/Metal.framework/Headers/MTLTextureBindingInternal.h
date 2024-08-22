// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTLTEXTUREBINDINGINTERNAL_H
#define MTLTEXTUREBINDINGINTERNAL_H

@class NSString;
@protocol MTLTextureBinding;


#import "MTLBindingInternal.h"

@interface MTLTextureBindingInternal : MTLBindingInternal <MTLTextureBinding>

 {
    BOOL _textureType;
    BOOL _isDepthTexture;
    unsigned short _textureDataType;
}


@property (readonly) NSUInteger access;
@property (readonly, getter=isArgument) BOOL argument;
@property (readonly) NSUInteger arrayLength;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, getter=isDepthTexture) BOOL depthTexture;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger index;
@property (readonly) NSString *name;
@property (readonly) Class superclass;
@property (readonly) NSUInteger textureDataType;
@property (readonly) NSUInteger textureType;
@property (readonly) NSInteger type;
@property (readonly, getter=isUsed) BOOL used;


-(id)formattedDescription:(NSUInteger)arg0 ;
-(id)initWithName:(id)arg0 access:(NSUInteger)arg1 isActive:(BOOL)arg2 locationIndex:(NSUInteger)arg3 arraySize:(NSUInteger)arg4 dataType:(NSUInteger)arg5 textureType:(NSUInteger)arg6 isDepthTexture:(BOOL)arg7 ;


@end


#endif