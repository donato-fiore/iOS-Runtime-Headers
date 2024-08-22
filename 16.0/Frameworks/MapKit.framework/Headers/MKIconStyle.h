// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MKICONSTYLE_H
#define MKICONSTYLE_H

@class GEOFeatureStyleAttributes, UIColor, UIImageAsset, UIImage;

#import <Foundation/Foundation.h>


@interface MKIconStyle : NSObject {
    GEOFeatureStyleAttributes *_styleAttributes;
    UIColor *_backgroundColorLight;
    UIColor *_backgroundColorDark;
    UIImageAsset *_combinedImageAsset;
    BOOL _isHybridMap;
}


@property (readonly, nonatomic) UIColor *backgroundColor;
@property (readonly, nonatomic) UIImage *image;


-(BOOL)_elevationForIcons;
-(id)iconForModifiers:(id)arg0 ;
-(id)initWithStyleAttributes:(id)arg0 isHybridMap:(BOOL)arg1 ;
-(void)_setColorAndImages;
-(void)registerImage:(id)arg0 darkMode:(BOOL)arg1 ;


@end


#endif