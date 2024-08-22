// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SXDATATABLEBORDER_H
#define SXDATATABLEBORDER_H

@class UIColor;


#import "SXJSONObject.h"
#import "SXUnitConverter.h"

@interface SXDataTableBorder : SXJSONObject

@property (readonly, nonatomic) _SXConvertibleValue actualWidth;
@property (readonly, nonatomic) UIColor *color;
@property (retain, nonatomic) SXUnitConverter *unitConverter; // ivar: unitConverter
@property (readonly, nonatomic) CGFloat width; // ivar: _width


+(id)jsonPropertyNameForObjCPropertyName:(id)arg0 ;


@end


#endif