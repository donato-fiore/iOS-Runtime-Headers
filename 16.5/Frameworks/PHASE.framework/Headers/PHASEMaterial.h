// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PHASEMATERIAL_H
#define PHASEMATERIAL_H


#import <Foundation/Foundation.h>

#import "PHASEEngine.h"
#import "PHASEAbsorptionData.h"
#import "PHASEScatteringData.h"
#import "PHASESoundReductionIndex.h"

@interface PHASEMaterial : NSObject {
    PHASEEngine *_engine;
}


@property (readonly, nonatomic) PHASEAbsorptionData *absorptionData; // ivar: _absorptionData
@property (nonatomic) float attenuationScale; // ivar: _attenuationScale
@property (nonatomic) float attenuationShift; // ivar: _attenuationShift
@property (nonatomic) float attenuationTilt; // ivar: _attenuationTilt
@property (nonatomic) Handle64 geoMaterialHandle; // ivar: _geoMaterialHandle
@property (readonly, nonatomic) NSInteger preset; // ivar: _preset
@property (readonly, nonatomic) PHASEScatteringData *scatteringData; // ivar: _scatteringData
@property (readonly, nonatomic) PHASESoundReductionIndex *soundReductionIndex; // ivar: _soundReductionIndex


+(id)new;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithEngine:(id)arg0 parameterTypes:(NSUInteger)arg1 semantics:(id)arg2 ;
-(id)initWithEngine:(id)arg0 preset:(NSInteger)arg1 ;
-(id)initWithEngine:(id)arg0 preset:(NSInteger)arg1 soundReductionIndex:(id)arg2 absorptionData:(id)arg3 scatteringData:(id)arg4 ;
-(id)initWithEngine:(id)arg0 semantics:(id)arg1 ;
-(id)initWithEngine:(id)arg0 soundReductionIndex:(id)arg1 absorptionData:(id)arg2 scatteringData:(id)arg3 ;
-(void)dealloc;
-(void)writeMaterialCoefs:(BOOL)arg0 ;


@end


#endif