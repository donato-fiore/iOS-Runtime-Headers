// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSCH3DLIGHTINGMODEL_H
#define TSCH3DLIGHTINGMODEL_H

@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "TSCH3DEnvironmentPackage.h"
#import "TSCH3DLightingPackage.h"
#import "TSCH3DMaterialPackage.h"

@interface TSCH3DLightingModel : NSObject <NSCopying>



@property (retain, nonatomic) TSCH3DEnvironmentPackage *environment; // ivar: _environment
@property (retain, nonatomic) TSCH3DLightingPackage *lightings; // ivar: _lightings
@property (retain, nonatomic) TSCH3DMaterialPackage *materials; // ivar: _materials


+(id)instanceWithArchive:(*void)arg0 unarchiver:(id)arg1 ;
+(id)lightingModel;
-(BOOL)hasCompleteData;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)clone;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)diffuseTextureTiling;
-(id)initWithArchive:(*void)arg0 unarchiver:(id)arg1 ;
-(id)lightingModelWithLightings:(id)arg0 ;
-(id)representativeMaterialLightenedByPercentage:(id)arg0 ;
-(void)affect:(id)arg0 states:(id)arg1 scene:(id)arg2 texturePool:(id)arg3 ;
-(void)didInitFromSOS;
-(void)saveToArchive:(*void)arg0 archiver:(id)arg1 ;


@end


#endif