// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTLIMAGEBLOCKDATAARGUMENT_H
#define MTLIMAGEBLOCKDATAARGUMENT_H



#import "MTLBindingInternal.h"
#import "MTLStructTypeInternal.h"

@interface MTLImageBlockDataArgument : MTLBindingInternal {
    unsigned int _dataSize;
    MTLStructTypeInternal *_masterStructMembers;
    BOOL _aliasImplicitImageBlock;
    unsigned int _aliasImplicitImageBlockRenderTarget;
}




-(BOOL)aliasImplicitImageBlock;
-(NSUInteger)aliasImplicitImageBlockRenderTarget;
-(NSUInteger)imageBlockDataSize;
-(id)imageBlockMasterStructMembers;
-(id)initWithName:(id)arg0 type:(NSUInteger)arg1 access:(NSUInteger)arg2 isActive:(BOOL)arg3 index:(NSUInteger)arg4 dataSize:(unsigned int)arg5 masterStructMembers:(id)arg6 aliasImplicitImageBlock:(BOOL)arg7 aliasImplicitImageBlockRenderTarget:(unsigned int)arg8 ;
-(void)dealloc;
-(void)setStructType:(id)arg0 ;


@end


#endif