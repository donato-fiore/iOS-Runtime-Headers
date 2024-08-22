// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NTKFACECOLORPALETTECONFIGURATION_H
#define NTKFACECOLORPALETTECONFIGURATION_H

@class NSString;
@protocol NSCopying, NTKFaceColorPaletteConfigurationDelegate;

#import <Foundation/Foundation.h>

#import "NTKPigmentEditOption.h"

@interface NTKFaceColorPaletteConfiguration : NSObject <NSCopying>

 {
    NSString *_formattedCollectionName;
    NSString *_uniqueId;
}


@property (retain, nonatomic) NSString *collectionName; // ivar: _collectionName
@property (nonatomic) CGFloat colorFraction; // ivar: _colorFraction
@property (retain, nonatomic) NSString *colorOption; // ivar: _colorOption
@property (weak, nonatomic) NSObject<NTKFaceColorPaletteConfigurationDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) NSString *formattedCollectionName;
@property (retain, nonatomic) NTKPigmentEditOption *pigmentEditOption; // ivar: _pigmentEditOption


-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithColorOption:(id)arg0 collectionName:(id)arg1 ;
-(id)initWithColorOption:(id)arg0 collectionName:(id)arg1 colorFraction:(CGFloat)arg2 ;
-(id)initWithPigmentEditOption:(id)arg0 ;
-(id)uniqueId;
-(void)handleContentChanged;
-(void)setColorName:(id)arg0 collectionName:(id)arg1 colorFraction:(CGFloat)arg2 ;


@end


#endif