// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PRIMMUTABLEEDITINGLOOKPROPERTIES_H
#define PRIMMUTABLEEDITINGLOOKPROPERTIES_H



#import "PREditingLookProperties.h"
#import "PRTimeFontConfiguration.h"
#import "PRPosterColor.h"

@interface PRImmutableEditingLookProperties : PREditingLookProperties {
    PRTimeFontConfiguration *_timeFontConfiguration;
    PRPosterColor *_titlePosterColor;
}




-(id)initWithTimeFontConfiguration:(id)arg0 titlePosterColor:(id)arg1 ;
-(id)timeFontConfiguration;
-(id)titlePosterColor;


@end


#endif