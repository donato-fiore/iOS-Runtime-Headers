// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NUNIASTRONOMYLOCATIONDOTCONFIGURATION_H
#define NUNIASTRONOMYLOCATIONDOTCONFIGURATION_H


#import <Foundation/Foundation.h>


@interface NUNIAstronomyLocationDotConfiguration : NSObject

@property (nonatomic) CGFloat defaultInnerDotDiameter; // ivar: _defaultInnerDotDiameter
@property (nonatomic) CGFloat defaultOuterDotDiameter; // ivar: _defaultOuterDotDiameter
@property (nonatomic) CGSize defaultSize; // ivar: _defaultSize
@property (nonatomic) CGFloat screenScale; // ivar: _screenScale


+(CGFloat)_defaultInnerDotDiameterForDevice:(id)arg0 ;
+(CGFloat)_defaultOuterDotDiameterForDevice:(id)arg0 ;
+(struct CGSize )_defaultSizeForDevice:(id)arg0 ;
-(id)init;


@end


#endif