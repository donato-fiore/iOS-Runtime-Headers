// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSCH3DENVIRONMENTMATERIAL_H
#define TSCH3DENVIRONMENTMATERIAL_H



#import "TSCH3DTexturesMaterial.h"

@interface TSCH3DEnvironmentMaterial : TSCH3DTexturesMaterial

@property (nonatomic) BOOL decalMode; // ivar: _decalMode


+(id)instanceWithArchive:(*void)arg0 unarchiver:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)defaultShaderVariables;
-(id)initWithArchive:(*void)arg0 unarchiver:(id)arg1 ;
-(void)saveToArchive:(*void)arg0 archiver:(id)arg1 ;


@end


#endif