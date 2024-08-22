// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NTKANALOGHANDCONFIGURATION_H
#define NTKANALOGHANDCONFIGURATION_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface NTKAnalogHandConfiguration : NSObject <NSCopying>



@property (readonly, nonatomic) CGPoint anchorPoint;
@property (nonatomic) CGFloat armLength; // ivar: _armLength
@property (nonatomic) CGFloat armWidth; // ivar: _armWidth
@property (readonly, nonatomic) CGRect bounds;
@property (nonatomic) CGSize directionalShadowOffset; // ivar: _directionalShadowOffset
@property (nonatomic) CGFloat dropShadowOpacity; // ivar: _dropShadowOpacity
@property (nonatomic) CGFloat dropShadowRadius; // ivar: _dropShadowRadius
@property (nonatomic) BOOL excludePeg; // ivar: _excludePeg
@property (nonatomic) BOOL excludeSecondTail; // ivar: _excludeSecondTail
@property (nonatomic) CGFloat handLength; // ivar: _handLength
@property (nonatomic) CGFloat handWidth; // ivar: _handWidth
@property (nonatomic) CGFloat inlayInsetRadius; // ivar: _inlayInsetRadius
@property (nonatomic) CGFloat pegRadius; // ivar: _pegRadius
@property (nonatomic) CGFloat pegStrokeWidth; // ivar: _pegStrokeWidth
@property (nonatomic) CGFloat radialShadowOpacity; // ivar: _radialShadowOpacity
@property (nonatomic) CGFloat radialShadowRadius; // ivar: _radialShadowRadius
@property (nonatomic) BOOL removeInlay; // ivar: _removeInlay
@property (nonatomic) BOOL roundedSecondHand; // ivar: _roundedSecondHand
@property (nonatomic) CGFloat smoothingRadius; // ivar: _smoothingRadius
@property (nonatomic) CGFloat tailLength; // ivar: _tailLength
@property (nonatomic) NSUInteger type; // ivar: _type


+(id)defaultHourConfigurationForDevice:(id)arg0 ;
+(id)defaultMinuteConfigurationForDevice:(id)arg0 ;
+(id)defaultSecondConfigurationForDevice:(id)arg0 ;
+(id)defaultSubdialConfigurationForDevice:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToConfiguration:(id)arg0 ;
-(NSUInteger)hash;
-(id)configurationByApplyingInset:(CGFloat)arg0 ;
-(id)configurationByApplyingScale:(CGFloat)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)debugDescription;
-(id)dropShadowCacheIdentifier;
-(id)handCacheIdentifier;
-(id)radialShadowCacheIdentifier;
-(struct UIEdgeInsets )inlayInsets;
-(void)copyToConfiguration:(id)arg0 ;


@end


#endif