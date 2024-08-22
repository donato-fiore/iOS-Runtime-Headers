// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSCH3DLIGHT_H
#define TSCH3DLIGHT_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "TSCH3DVector.h"

@interface TSCH3DLight : NSObject <NSCopying>

 {
    TSCH3DVector *_ambientColor;
    TSCH3DVector *_diffuseColor;
    TSCH3DVector *_specularColor;
    TSCH3DVector *_attenuation;
}


@property (nonatomic) tvec4<float> ambientColor;
@property (nonatomic) tvec3<float> attenuation;
@property (nonatomic) int coordinateSpace; // ivar: _coordinateSpace
@property (nonatomic) tvec4<float> diffuseColor;
@property (nonatomic) BOOL enabled; // ivar: _enabled
@property (nonatomic) float intensity; // ivar: _intensity
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (nonatomic) tvec4<float> specularColor;


+(id)instanceWithArchive:(*void)arg0 unarchiver:(id)arg1 ;
+(id)light;
+(id)lightClasses;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithArchive:(*void)arg0 unarchiver:(id)arg1 ;
-(id)initWithLightArchive:(*void)arg0 unarchiver:(id)arg1 ;
-(void)affect:(id)arg0 states:(id)arg1 texturePool:(id)arg2 ;
-(void)didInitFromSOS;
-(void)saveToArchive:(*void)arg0 archiver:(id)arg1 ;
-(void)saveToLightArchive:(*void)arg0 archiver:(id)arg1 ;


@end


#endif