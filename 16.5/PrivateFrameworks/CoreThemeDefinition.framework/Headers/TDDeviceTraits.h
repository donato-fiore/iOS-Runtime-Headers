// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TDDEVICETRAITS_H
#define TDDEVICETRAITS_H

@class NSString, NSArray;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface TDDeviceTraits : NSObject <NSCopying>

 {
    NSInteger _sizeClassHorizontal;
    NSInteger _sizeClassVertical;
    NSInteger _platform;
}


@property (retain, nonatomic) NSString *deploymentTarget;
@property (nonatomic) NSInteger deploymentTargetValue; // ivar: _deploymentTargetValue
@property (retain, nonatomic) NSString *displayGamut;
@property (nonatomic) NSInteger displayGamutValue; // ivar: _displayGamutValue
@property (retain, nonatomic) NSString *dynamicDisplayMode;
@property (nonatomic) NSInteger dynamicDisplayModeValue; // ivar: _dynamicDisplayModeValue
@property (retain, nonatomic) NSString *graphicsFeatureSetClass;
@property (nonatomic) NSInteger graphicsFeatureSetClassValue; // ivar: _graphicsFeatureSetClassValue
@property (copy, nonatomic) NSArray *graphicsFeatureSetFallbackValues; // ivar: _graphicsFeatureSetFallbackValues
@property (retain, nonatomic) NSArray *graphicsFeatureSetFallbacks;
@property (nonatomic) NSInteger graphicsPerformanceClass; // ivar: _graphicsPerformanceClass
@property (copy, nonatomic) NSArray *hostedIdiomValues; // ivar: _hostedIdiomValues
@property (retain, nonatomic) NSArray *hostedIdioms;
@property (retain, nonatomic) NSString *idiom;
@property (nonatomic) NSInteger idiomValue; // ivar: _idiomValue
@property (nonatomic) NSInteger memoryPerformanceClass; // ivar: _memoryPerformanceClass
@property (nonatomic) CGFloat scale; // ivar: _scale
@property (nonatomic) NSInteger subtype; // ivar: _subtype
@property (retain, nonatomic) NSArray *subtypeFallbackValues; // ivar: _subtypeFallbackValues


-(NSInteger)_deploymentTargetFromTraitString:(id)arg0 ;
-(NSInteger)_displayGamutFromTraitString:(id)arg0 ;
-(NSInteger)_dynamicDisplayModeFromTraitString:(id)arg0 ;
-(NSInteger)_graphicsFeatureSetClassFromTraitString:(id)arg0 ;
-(NSInteger)_idiomFromTraitString:(id)arg0 ;
-(id)_deploymentTargetToTraitString:(NSInteger)arg0 ;
-(id)_displayGamutToTraitString:(NSInteger)arg0 ;
-(id)_dynamicDisplayModeToTraitString:(NSInteger)arg0 ;
-(id)_graphicsFeatureSetClassToTraitString:(NSInteger)arg0 ;
-(id)_idiomToTraitString:(NSInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithPlatform:(NSInteger)arg0 ;
-(void)dealloc;


@end


#endif