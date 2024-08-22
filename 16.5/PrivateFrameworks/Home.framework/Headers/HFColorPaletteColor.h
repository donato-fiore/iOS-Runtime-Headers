// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HFCOLORPALETTECOLOR_H
#define HFCOLORPALETTECOLOR_H

@class UIColor, NSString;
@protocol NAEquatable, NSCopying, HFColorLikeObject;

#import <Foundation/Foundation.h>

#import "HFColorCollection.h"

@interface HFColorPaletteColor : NSObject <NAEquatable, NSCopying>



@property (readonly, nonatomic) UIColor *UIColor;
@property (readonly, nonatomic) HFColorCollection *colorCollection; // ivar: _colorCollection
@property (readonly, nonatomic) NSObject<HFColorLikeObject> *colorValue; // ivar: _colorValue
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isNaturalLightColor;
@property (readonly) Class superclass;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isSimilarToColor:(id)arg0 ;
-(id)colorByAdjustingToColorProfile:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentationWithPreferredPaletteType:(NSUInteger)arg0 ;
-(id)initWithColorCollection:(id)arg0 ;
-(id)initWithColorValue:(id)arg0 ;
-(id)initWithDictionaryRepresentation:(id)arg0 ;
-(id)initWithNaturalLightColor;
-(id)initWithRed:(float)arg0 green:(float)arg1 blue:(float)arg2 ;
-(id)initWithUIColor:(id)arg0 ;


@end


#endif