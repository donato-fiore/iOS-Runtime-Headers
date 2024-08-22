// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PRIMMUTABLEPOSTERTITLESTYLECONFIGURATION_H
#define PRIMMUTABLEPOSTERTITLESTYLECONFIGURATION_H

@class NSString;


#import "PRPosterTitleStyleConfiguration.h"
#import "PRPosterTimeFontConfiguration.h"
#import "PRPosterColor.h"

@interface PRImmutablePosterTitleStyleConfiguration : PRPosterTitleStyleConfiguration {
    BOOL _userConfigured;
    BOOL _alternateDateEnabled;
    PRPosterTimeFontConfiguration *_timeFontConfiguration;
    PRPosterColor *_titleColor;
    NSString *_timeNumberingSystem;
    CGFloat _contentsLuminance;
    NSString *_groupName;
}




-(BOOL)isAlternateDateEnabled;
-(BOOL)isUserConfigured;
-(CGFloat)contentsLuminance;
-(id)groupName;
-(id)initWithTimeFontConfiguration:(id)arg0 titleColor:(id)arg1 timeNumberingSystem:(id)arg2 userConfigured:(BOOL)arg3 contentsLuminance:(CGFloat)arg4 alternateDateEnabled:(BOOL)arg5 groupName:(id)arg6 ;
-(id)timeFontConfiguration;
-(id)timeNumberingSystem;
-(id)titleColor;


@end


#endif