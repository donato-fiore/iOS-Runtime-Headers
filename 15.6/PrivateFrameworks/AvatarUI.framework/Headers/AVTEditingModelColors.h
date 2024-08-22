// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AVTEDITINGMODELCOLORS_H
#define AVTEDITINGMODELCOLORS_H

@class NSDictionary;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "AVTAvatarColorVariationStore.h"

@interface AVTEditingModelColors : NSObject <NSCopying>



@property (readonly, nonatomic) NSDictionary *storage; // ivar: _storage
@property (retain, nonatomic) AVTAvatarColorVariationStore *variationStore; // ivar: _variationStore


+(id)buildAllColors;
+(void)createColorsForPaletteCategory:(NSInteger)arg0 inCache:(id)arg1 withDerivedPaletteCategories:(id)arg2 ;
-(BOOL)colorHasDerivedColorDependency:(id)arg0 ;
-(id)colorForSettingKind:(struct ? )arg0 identifier:(id)arg1 ;
-(id)colorsForSettingKind:(struct ? )arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithStorage:(id)arg0 variationStore:(id)arg1 ;


@end


#endif