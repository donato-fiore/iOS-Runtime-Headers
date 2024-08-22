// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PBUIWALLPAPERUPDATELOCATIONSACTION_H
#define PBUIWALLPAPERUPDATELOCATIONSACTION_H

@class BSAction;



@interface PBUIWallpaperUpdateLocationsAction : BSAction

@property (readonly, nonatomic) NSInteger locations;
@property (readonly, nonatomic) NSInteger wallpaperMode;


-(id)initWithLocations:(NSInteger)arg0 wallpaperMode:(NSInteger)arg1 responder:(id)arg2 ;
-(id)keyDescriptionForSetting:(NSUInteger)arg0 ;
-(id)valueDescriptionForFlag:(NSInteger)arg0 object:(id)arg1 ofSetting:(NSUInteger)arg2 ;


@end


#endif