// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSCH3DSPOTLIGHT_H
#define TSCH3DSPOTLIGHT_H

@protocol TSCH3DLightPositionable, TSCH3DLightDirectional;


#import "TSCH3DLight.h"
#import "TSCH3DVector.h"

@interface TSCH3DSpotLight : TSCH3DLight <TSCH3DLightPositionable, TSCH3DLightDirectional>

 {
    TSCH3DVector *_position;
    TSCH3DVector *_direction;
}


@property (nonatomic) float cutOff; // ivar: _cutOff
@property (nonatomic) tvec3<float> direction;
@property (nonatomic) float dropOff; // ivar: _dropOff
@property (nonatomic) tvec3<float> position;


+(Class)effectClass;
+(id)instanceWithArchive:(*void)arg0 unarchiver:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithArchive:(*void)arg0 unarchiver:(id)arg1 ;
-(void)saveToArchive:(*void)arg0 archiver:(id)arg1 ;


@end


#endif