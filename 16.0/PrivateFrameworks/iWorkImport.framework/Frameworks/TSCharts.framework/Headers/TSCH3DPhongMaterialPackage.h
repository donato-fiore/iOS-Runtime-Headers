// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSCH3DPHONGMATERIALPACKAGE_H
#define TSCH3DPHONGMATERIALPACKAGE_H



#import "TSCH3DMaterialPackage.h"
#import "TSCH3DDiffuseMaterial.h"
#import "TSCH3DEmissiveMaterial.h"
#import "TSCH3DModulateMaterial.h"
#import "TSCH3DShininessMaterial.h"
#import "TSCH3DSpecularMaterial.h"

@interface TSCH3DPhongMaterialPackage : TSCH3DMaterialPackage

@property (retain, nonatomic) TSCH3DDiffuseMaterial *diffuse; // ivar: _diffuse
@property (retain, nonatomic) TSCH3DEmissiveMaterial *emissive; // ivar: _emissive
@property (retain, nonatomic) TSCH3DModulateMaterial *modulate; // ivar: _modulate
@property (retain, nonatomic) TSCH3DShininessMaterial *shininess; // ivar: _shininess
@property (retain, nonatomic) TSCH3DSpecularMaterial *specular; // ivar: _specular


+(id)instanceWithArchive:(*void)arg0 unarchiver:(id)arg1 ;
+(id)package;
-(BOOL)hasCompleteData;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithArchive:(*void)arg0 unarchiver:(id)arg1 ;
-(id)materialEnumerator;
-(void)saveToArchive:(*void)arg0 archiver:(id)arg1 ;


@end


#endif