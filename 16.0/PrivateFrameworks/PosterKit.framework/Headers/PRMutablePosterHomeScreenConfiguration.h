// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PRMUTABLEPOSTERHOMESCREENCONFIGURATION_H
#define PRMUTABLEPOSTERHOMESCREENCONFIGURATION_H



#import "PRPosterHomeScreenConfiguration.h"
#import "PRPosterGradientHomeScreenAppearance.h"
#import "PRPosterHomePosterHomeScreenAppearance.h"
#import "PRPosterLockPosterHomeScreenAppearance.h"
#import "PRPosterSolidColorHomeScreenAppearance.h"

@interface PRMutablePosterHomeScreenConfiguration : PRPosterHomeScreenConfiguration

@property (copy, nonatomic) PRPosterGradientHomeScreenAppearance *gradientAppearance; // ivar: _gradientAppearance
@property (copy, nonatomic) PRPosterHomePosterHomeScreenAppearance *homePosterAppearance; // ivar: _homePosterAppearance
@property (copy, nonatomic) PRPosterLockPosterHomeScreenAppearance *lockPosterAppearance; // ivar: _lockPosterAppearance
@property (nonatomic) NSUInteger selectedAppearanceType; // ivar: _selectedAppearanceType
@property (copy, nonatomic) PRPosterSolidColorHomeScreenAppearance *solidColorAppearance; // ivar: _solidColorAppearance


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithSelectedAppearanceType:(NSUInteger)arg0 lockPosterAppearance:(id)arg1 solidColorAppearance:(id)arg2 gradientAppearance:(id)arg3 homePosterAppearance:(id)arg4 ;


@end


#endif