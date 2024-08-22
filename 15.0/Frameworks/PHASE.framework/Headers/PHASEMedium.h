// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PHASEMEDIUM_H
#define PHASEMEDIUM_H

@class NSArray;

#import <Foundation/Foundation.h>

#import "PHASEEngine.h"

@interface PHASEMedium : NSObject {
    PHASEEngine *_engine;
}


@property (readonly, nonatomic) NSArray *attenuationCoefficients; // ivar: _attenuationCoefficients
@property (nonatomic) Handle64 geoMediumHandle; // ivar: _geoMediumHandle
@property (readonly, nonatomic) NSInteger preset; // ivar: _preset
@property (readonly, nonatomic) NSInteger privatePreset; // ivar: _privatePreset
@property (readonly, nonatomic) float speedOfSound; // ivar: _speedOfSound


+(id)new;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initAirWithEngine:(id)arg0 temperature:(float)arg1 pressure:(float)arg2 humidity:(float)arg3 bandcount:(int)arg4 ;
-(id)initAirWithEngine:(id)arg0 temperature:(float)arg1 pressure:(float)arg2 humidity:(float)arg3 frequencies:(id)arg4 ;
-(id)initWaterWithEngine:(id)arg0 temperature:(float)arg1 depth:(float)arg2 salinity:(float)arg3 pH:(float)arg4 frequencies:(id)arg5 ;
-(id)initWithEngine:(id)arg0 attenuationCoefficients:(id)arg1 speedOfSound:(float)arg2 ;
-(id)initWithEngine:(id)arg0 preset:(NSInteger)arg1 ;
-(id)initWithEngine:(id)arg0 preset:(NSInteger)arg1 privatePreset:(NSInteger)arg2 attenuationCoefficients:(id)arg3 speedOfSound:(float)arg4 ;
-(id)initWithEngine:(id)arg0 privatePreset:(NSInteger)arg1 ;
-(void)dealloc;
-(void)setDefault;


@end


#endif