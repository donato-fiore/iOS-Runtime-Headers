// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NTKCOMPANION1STPARTYAPP_H
#define NTKCOMPANION1STPARTYAPP_H

@class UIImage, NSString;


#import "NTKCompanionApp.h"

@interface NTKCompanion1stPartyApp : NTKCompanionApp {
    UIImage *_icon;
}


@property (nonatomic) NSUInteger complicationType; // ivar: _complicationType
@property (copy, nonatomic) NSString *iconName; // ivar: _iconName


+(BOOL)complicationType:(NSUInteger)arg0 mapsToRemovedSystemAppOnDevice:(id)arg1 ;
+(id)_allApps;
+(id)allAppsForDevice:(id)arg0 ;
+(id)appForBundleIdentifier:(id)arg0 ;
+(id)companionAppWithAppInfo:(struct _NTKCompanion1stPartyInfo )arg0 ;
-(id)complication;
-(id)icon;
-(id)initWithAppInfo:(struct _NTKCompanion1stPartyInfo )arg0 ;
-(void)setIcon:(id)arg0 ;


@end


#endif