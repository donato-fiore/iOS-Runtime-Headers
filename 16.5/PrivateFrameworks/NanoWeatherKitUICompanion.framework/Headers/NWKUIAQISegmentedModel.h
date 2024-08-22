// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NWKUIAQISEGMENTEDMODEL_H
#define NWKUIAQISEGMENTEDMODEL_H

@class UIImage, NSArray;


#import "NWKUIAQIModel.h"

@interface NWKUIAQISegmentedModel : NWKUIAQIModel

@property (readonly) UIImage *glyph; // ivar: _glyph
@property (readonly) NSArray *segments; // ivar: _segments


-(id)_createGlyphWithName:(id)arg0 ;
-(id)initWithAirQualityConditions:(id)arg0 ;
-(id)initWithName:(id)arg0 label:(id)arg1 categoryDescription:(id)arg2 color:(id)arg3 date:(id)arg4 expiration:(id)arg5 segments:(id)arg6 glyph:(id)arg7 ;


@end


#endif