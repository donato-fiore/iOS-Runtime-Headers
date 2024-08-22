// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AVTCOREMODELCOLOR_H
#define AVTCOREMODELCOLOR_H

@class AVTColorPreset, NSString, NSDictionary;
@protocol AVTCacheableResource;

#import <Foundation/Foundation.h>


@interface AVTCoreModelColor : NSObject <AVTCacheableResource>



@property (readonly, nonatomic) AVTColorPreset *baseColorPreset; // ivar: _baseColorPreset
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSDictionary *derivedColorsByCategories; // ivar: _derivedColorsByCategories
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *localizedName;
@property (readonly, nonatomic) NSUInteger order; // ivar: _order
@property (readonly, nonatomic) float rangeMax; // ivar: _rangeMax
@property (readonly, nonatomic) float rangeMin; // ivar: _rangeMin
@property (readonly, nonatomic) ? settingKind; // ivar: _settingKind
@property (readonly, nonatomic, getter=canShowSlider) BOOL showSlider; // ivar: _showSlider
@property (readonly) Class superclass;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)requiresEncryption;
-(NSUInteger)costForScope:(id)arg0 ;
-(id)copyForCategory:(NSInteger)arg0 destination:(NSInteger)arg1 ;
-(id)copyForPairedCategory:(NSInteger)arg0 ;
-(id)copyWithRangeMin:(float)arg0 rangeMax:(float)arg1 showSlider:(BOOL)arg2 ;
-(id)initWithColorPreset:(id)arg0 settingKind:(struct ? )arg1 order:(NSUInteger)arg2 derivedColorsByCategories:(id)arg3 ;
-(id)initWithColorPreset:(id)arg0 settingKind:(struct ? )arg1 order:(NSUInteger)arg2 showSlider:(BOOL)arg3 rangeMin:(float)arg4 rangeMax:(float)arg5 derivedColorsByCategories:(id)arg6 ;
-(id)thumbnail;
-(id)volatileIdentifierForScope:(id)arg0 ;


@end


#endif