// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBWWALLPAPERUPDATELOCATIONSACTION_H
#define SBWWALLPAPERUPDATELOCATIONSACTION_H

@class BSAction;



@interface SBWWallpaperUpdateLocationsAction : BSAction

@property (readonly, nonatomic) NSInteger locations;
@property (readonly, nonatomic) NSInteger wallpaperMode;


-(id)initWithLocations:(NSInteger)arg0 wallpaperMode:(NSInteger)arg1 responder:(id)arg2 ;
-(id)keyDescriptionForSetting:(NSUInteger)arg0 ;
-(id)valueDescriptionForFlag:(NSInteger)arg0 object:(id)arg1 ofSetting:(NSUInteger)arg2 ;


@end


#endif