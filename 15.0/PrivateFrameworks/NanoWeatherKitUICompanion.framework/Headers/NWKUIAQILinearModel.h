// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NWKUIAQILINEARMODEL_H
#define NWKUIAQILINEARMODEL_H

@class NSArray, NSString;


#import "NWKUIAQIModel.h"

@interface NWKUIAQILinearModel : NWKUIAQIModel

@property (readonly) NSArray *colorIndices; // ivar: _colorIndices
@property (readonly) NSString *index; // ivar: _index
@property (readonly) CGFloat percentage; // ivar: _percentage


-(id)initWithAirQualityConditions:(id)arg0 ;
-(id)initWithName:(id)arg0 label:(id)arg1 categoryDescription:(id)arg2 color:(id)arg3 date:(id)arg4 expiration:(id)arg5 colorIndices:(id)arg6 index:(id)arg7 percentage:(CGFloat)arg8 ;


@end


#endif