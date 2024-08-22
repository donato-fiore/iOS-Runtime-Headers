// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _MLCANEUPSAMPLEPARAMETERS_H
#define _MLCANEUPSAMPLEPARAMETERS_H

@class NSDictionary;

#import <Foundation/Foundation.h>


@interface _MLCANEUpsampleParameters : NSObject

@property (readonly, nonatomic) float scaleFactorX; // ivar: _scaleFactorX
@property (readonly, nonatomic) float scaleFactorY; // ivar: _scaleFactorY
@property (readonly, retain, nonatomic) NSDictionary *upsampleParams; // ivar: _upsampleParams


+(id)upsampleUnitParametersWith:(id)arg0 scaleFactorX:(float)arg1 scaleFactorY:(float)arg2 ;
-(id)initWithUpsampleParams:(id)arg0 scaleFactorX:(float)arg1 scaleFactorY:(float)arg2 ;


@end


#endif