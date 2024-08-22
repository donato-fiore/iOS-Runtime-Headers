// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _MLCANENORMALIZATIONPARAMETERS_H
#define _MLCANENORMALIZATIONPARAMETERS_H

@class NSDictionary, NSArray;

#import <Foundation/Foundation.h>


@interface _MLCANENormalizationParameters : NSObject

@property (readonly, retain, nonatomic) NSDictionary *gocParams; // ivar: _gocParams
@property (readonly, retain, nonatomic) NSArray *neuronParams; // ivar: _neuronParams
@property (readonly, retain, nonatomic) NSDictionary *normalizationParams; // ivar: _normalizationParams


+(id)normalizationUnitParametersWith:(id)arg0 gocParams:(id)arg1 neuronParams:(id)arg2 ;
-(id)initWithNormalizationParams:(id)arg0 gocParams:(id)arg1 neuronParams:(id)arg2 ;


@end


#endif