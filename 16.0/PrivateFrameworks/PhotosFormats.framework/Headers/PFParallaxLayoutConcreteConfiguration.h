// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PFPARALLAXLAYOUTCONCRETECONFIGURATION_H
#define PFPARALLAXLAYOUTCONCRETECONFIGURATION_H

@class NSString;
@protocol PFParallaxLayoutConfiguration, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface PFParallaxLayoutConcreteConfiguration : NSObject <PFParallaxLayoutConfiguration, NSSecureCoding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CGRect inactiveTimeRect; // ivar: _inactiveTimeRect
@property (readonly, nonatomic) CGSize parallaxPadding; // ivar: _parallaxPadding
@property (readonly, nonatomic) CGSize parallaxPaddingPct;
@property (readonly, nonatomic) CGSize screenSize; // ivar: _screenSize
@property (readonly) Class superclass;
@property (readonly, nonatomic) CGRect timeOverlapCheckBottom;
@property (readonly, nonatomic) CGRect timeOverlapCheckTop;
@property (readonly, nonatomic) CGRect timeRect; // ivar: _timeRect
@property (readonly, nonatomic) CGRect unsafeRect;


+(BOOL)supportsSecureCoding;
+(id)bestConfigurationForScreenSize:(struct CGSize )arg0 ;
+(id)bestConfigurationForScreenSize:(struct CGSize )arg0 startingWithConfiguration:(id)arg1 ;
+(id)configurationWithDeviceName:(id)arg0 ;
+(id)deviceConfiguration;
+(id)dictionaryFromLayoutConfiguration:(id)arg0 ;
+(id)genericConfiguration;
+(id)knownDeviceConfigurations;
+(id)layoutConfigurationFromDictionary:(id)arg0 error:(*id)arg1 ;
-(BOOL)isEqualToLayoutConfiguration:(id)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithLayoutConfiguration:(id)arg0 ;
-(id)initWithScreenSize:(struct CGSize )arg0 denormalizedYDownTimeRect:(struct CGRect )arg1 parallaxPadding:(struct CGSize )arg2 ;
-(id)initWithScreenSize:(struct CGSize )arg0 normalizedTimeRect:(struct CGRect )arg1 parallaxPadding:(struct CGSize )arg2 ;
-(id)initWithScreenSize:(struct CGSize )arg0 normalizedYDownTimeRect:(struct CGRect )arg1 parallaxPadding:(struct CGSize )arg2 ;
-(id)initWithScreenSize:(struct CGSize )arg0 timeRect:(struct CGRect )arg1 inactiveTimeRect:(struct CGRect )arg2 parallaxPadding:(struct CGSize )arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif