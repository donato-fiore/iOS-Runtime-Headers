// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HFCOLORCOLLECTION_H
#define HFCOLORCOLLECTION_H

@class NSString;
@protocol HFColorLikeObject, NAIdentifiable, HFColorPrimitive;

#import <Foundation/Foundation.h>

#import "HFRGBColor.h"
#import "HFTemperatureColor.h"

@interface HFColorCollection : NSObject <HFColorLikeObject, NAIdentifiable>



@property (readonly, copy, nonatomic) HFRGBColor *RGBColor; // ivar: _RGBColor
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSObject<HFColorPrimitive> *preferredColorPrimitive;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) HFTemperatureColor *temperatureColor; // ivar: _temperatureColor


+(id)na_identity;
-(BOOL)isEqual:(id)arg0 ;
-(id)colorByAdjustingForProfile:(id)arg0 ;
-(id)colorPrimitives;
-(id)init;
-(id)initWithPrimitiveColor:(id)arg0 ;
-(id)initWithPrimitiveColors:(id)arg0 ;


@end


#endif