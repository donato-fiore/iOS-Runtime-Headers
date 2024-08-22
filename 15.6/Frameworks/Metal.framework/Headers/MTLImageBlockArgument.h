// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MTLIMAGEBLOCKARGUMENT_H
#define MTLIMAGEBLOCKARGUMENT_H



#import "MTLArgumentInternal.h"
#import "MTLStructTypeInternal.h"

@interface MTLImageBlockArgument : MTLArgumentInternal {
    NSUInteger _kind;
    unsigned int _dataSize;
    MTLStructTypeInternal *_masterStructMembers;
    BOOL _aliasImplicitImageBlock;
    unsigned int _aliasImplicitImageBlockRenderTarget;
}




-(BOOL)aliasImplicitImageBlock;
-(NSUInteger)aliasImplicitImageBlockRenderTarget;
-(NSUInteger)imageBlockDataSize;
-(NSUInteger)imageBlockKind;
-(id)imageBlockMasterStructMembers;
-(id)initWithName:(id)arg0 type:(NSUInteger)arg1 access:(NSUInteger)arg2 isActive:(BOOL)arg3 index:(NSUInteger)arg4 kind:(NSUInteger)arg5 dataSize:(unsigned int)arg6 masterStructMembers:(id)arg7 aliasImplicitImageBlock:(BOOL)arg8 aliasImplicitImageBlockRenderTarget:(unsigned int)arg9 ;
-(void)dealloc;
-(void)setStructType:(id)arg0 ;


@end


#endif