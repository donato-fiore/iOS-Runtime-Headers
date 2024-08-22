// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PRMUTABLEPOSTERTITLESTYLECONFIGURATION_H
#define PRMUTABLEPOSTERTITLESTYLECONFIGURATION_H

@class NSString;


#import "PRPosterTitleStyleConfiguration.h"
#import "PRPosterTimeFontConfiguration.h"
#import "PRPosterColor.h"

@interface PRMutablePosterTitleStyleConfiguration : PRPosterTitleStyleConfiguration

@property (nonatomic, getter=isAlternateDateEnabled) BOOL alternateDateEnabled; // ivar: _alternateDateEnabled
@property (nonatomic) CGFloat contentsLuminance; // ivar: _contentsLuminance
@property (copy, nonatomic) NSString *groupName; // ivar: _groupName
@property (copy, nonatomic) PRPosterTimeFontConfiguration *timeFontConfiguration; // ivar: _timeFontConfiguration
@property (copy, nonatomic) NSString *timeNumberingSystem; // ivar: _timeNumberingSystem
@property (copy, nonatomic) PRPosterColor *titleColor; // ivar: _titleColor
@property (nonatomic, getter=isUserConfigured) BOOL userConfigured; // ivar: _userConfigured


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithTimeFontConfiguration:(id)arg0 titleColor:(id)arg1 timeNumberingSystem:(id)arg2 userConfigured:(BOOL)arg3 contentsLuminance:(CGFloat)arg4 alternateDateEnabled:(BOOL)arg5 groupName:(id)arg6 ;


@end


#endif