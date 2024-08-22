// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PUALBUMLISTSETTINGS_H
#define PUALBUMLISTSETTINGS_H

@class PXSettings;



@interface PUAlbumListSettings : PXSettings

@property (nonatomic) BOOL allowNavigationTitleEditing; // ivar: _allowNavigationTitleEditing
@property (nonatomic) CGFloat avatarSpacing; // ivar: _avatarSpacing
@property (nonatomic) BOOL combinePeoplePlacesAndMediaTypesOnIpad; // ivar: _combinePeoplePlacesAndMediaTypesOnIpad
@property (nonatomic) BOOL shouldShowSubscriberMonograms; // ivar: _shouldShowSubscriberMonograms
@property (nonatomic) BOOL shouldUseEditorialLayout; // ivar: _shouldUseEditorialLayout


+(id)settingsControllerModule;
+(id)sharedInstance;
-(id)parentSettings;
-(void)setDefaultValues;


@end


#endif