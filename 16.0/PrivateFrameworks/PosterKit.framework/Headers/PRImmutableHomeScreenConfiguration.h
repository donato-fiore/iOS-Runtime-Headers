// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PRIMMUTABLEHOMESCREENCONFIGURATION_H
#define PRIMMUTABLEHOMESCREENCONFIGURATION_H



#import "PRPosterHomeScreenConfiguration.h"
#import "PRPosterLockPosterHomeScreenAppearance.h"
#import "PRPosterSolidColorHomeScreenAppearance.h"
#import "PRPosterGradientHomeScreenAppearance.h"
#import "PRPosterHomePosterHomeScreenAppearance.h"

@interface PRImmutableHomeScreenConfiguration : PRPosterHomeScreenConfiguration {
    NSUInteger _selectedAppearanceType;
    PRPosterLockPosterHomeScreenAppearance *_lockPosterAppearance;
    PRPosterSolidColorHomeScreenAppearance *_solidColorAppearance;
    PRPosterGradientHomeScreenAppearance *_gradientAppearance;
    PRPosterHomePosterHomeScreenAppearance *_homePosterAppearance;
}




-(NSUInteger)selectedAppearanceType;
-(id)gradientAppearance;
-(id)homePosterAppearance;
-(id)initWithSelectedAppearanceType:(NSUInteger)arg0 lockPosterAppearance:(id)arg1 solidColorAppearance:(id)arg2 gradientAppearance:(id)arg3 homePosterAppearance:(id)arg4 ;
-(id)lockPosterAppearance;
-(id)solidColorAppearance;


@end


#endif