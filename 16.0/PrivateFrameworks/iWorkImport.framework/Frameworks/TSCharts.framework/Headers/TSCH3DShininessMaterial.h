// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSCH3DSHININESSMATERIAL_H
#define TSCH3DSHININESSMATERIAL_H



#import "TSCH3DTexturesMaterial.h"

@interface TSCH3DShininessMaterial : TSCH3DTexturesMaterial



+(id)instanceWithArchive:(*void)arg0 unarchiver:(id)arg1 ;
-(id)defaultShaderVariables;
-(id)initWithArchive:(*void)arg0 unarchiver:(id)arg1 ;
-(void)saveToArchive:(*void)arg0 archiver:(id)arg1 ;


@end


#endif