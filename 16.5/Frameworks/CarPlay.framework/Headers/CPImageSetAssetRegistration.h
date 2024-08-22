// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CPIMAGESETASSETREGISTRATION_H
#define CPIMAGESETASSETREGISTRATION_H

@class UITraitCollection, UIImage;

#import <Foundation/Foundation.h>


@interface CPImageSetAssetRegistration : NSObject

@property (readonly, nonatomic) UITraitCollection *baseTraitCollection; // ivar: _baseTraitCollection
@property (readonly, nonatomic) UIImage *combinedImage; // ivar: _combinedImage
@property (readonly, nonatomic) UITraitCollection *darkTraitCollection; // ivar: _darkTraitCollection
@property (readonly, nonatomic) UITraitCollection *lightTraitCollection; // ivar: _lightTraitCollection


-(id)initWithLightImage:(id)arg0 darkImage:(id)arg1 baseTraitCollection:(id)arg2 ;
-(void)dealloc;


@end


#endif