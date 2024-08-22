// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSCH3DRENDERINGLIGHTINGMODEL_H
#define TSCH3DRENDERINGLIGHTINGMODEL_H

@class NSNumber;

#import <Foundation/Foundation.h>

#import "TSCH3DLightingModel.h"

@interface TSCH3DRenderingLightingModel : NSObject {
    NSNumber *_percentage;
}


@property (readonly, nonatomic) BOOL hasTransparency; // ivar: _hasTransparency
@property (readonly, nonatomic) TSCH3DLightingModel *lightingModel; // ivar: _lightingModel


+(id)p_lightingModelFromFill:(id)arg0 lightings:(id)arg1 returningTransparency:(*BOOL)arg2 ;
+(id)renderingLightingModelWithFill:(id)arg0 lightings:(id)arg1 ;
+(id)renderingLightingModelWithLightingModel:(id)arg0 percentage:(id)arg1 hasTransparency:(BOOL)arg2 ;
-(id)initWithLightingModel:(id)arg0 percentage:(id)arg1 hasTransparency:(BOOL)arg2 ;
-(void)affect:(id)arg0 states:(id)arg1 scene:(id)arg2 texturePool:(id)arg3 ;


@end


#endif