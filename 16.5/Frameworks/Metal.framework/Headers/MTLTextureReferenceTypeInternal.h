// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTLTEXTUREREFERENCETYPEINTERNAL_H
#define MTLTEXTUREREFERENCETYPEINTERNAL_H



#import "MTLTextureReferenceType.h"

@interface MTLTextureReferenceTypeInternal : MTLTextureReferenceType {
    NSUInteger _dataType;
    NSUInteger _textureDataType;
    NSUInteger _textureType;
    NSUInteger _access;
    BOOL _isDepthTexture;
}




-(BOOL)isDepthTexture;
-(NSUInteger)access;
-(NSUInteger)dataType;
-(NSUInteger)textureDataType;
-(NSUInteger)textureType;
-(id)formattedDescription:(NSUInteger)arg0 ;
-(id)initWithDataType:(NSUInteger)arg0 textureType:(NSUInteger)arg1 access:(NSUInteger)arg2 isDepthTexture:(BOOL)arg3 ;
-(void)dealloc;


@end


#endif