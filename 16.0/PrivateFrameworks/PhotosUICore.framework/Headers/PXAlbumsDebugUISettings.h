// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXALBUMSDEBUGUISETTINGS_H
#define PXALBUMSDEBUGUISETTINGS_H

@class NSString;


#import "PXSettings.h"

@interface PXAlbumsDebugUISettings : PXSettings

@property (copy, nonatomic) NSString *customDebugAlbumTitle; // ivar: _customDebugAlbumTitle
@property (copy, nonatomic) NSString *customDebugInternalPredicate; // ivar: _customDebugInternalPredicate
@property (copy, nonatomic) NSString *customDebugPredicate; // ivar: _customDebugPredicate
@property (nonatomic) BOOL showBestKeyFrameDebugAlbum; // ivar: _showBestKeyFrameDebugAlbum
@property (nonatomic) BOOL showCustomDebugAlbum; // ivar: _showCustomDebugAlbum
@property (nonatomic) BOOL showDreamyDebugAlbum; // ivar: _showDreamyDebugAlbum
@property (nonatomic) BOOL showUtilitiesDebugAlbum; // ivar: _showUtilitiesDebugAlbum


+(id)_predicateValidatorUsingInternalPredicate:(SEL)arg0 ;
+(id)settingsControllerModule;
+(id)sharedInstance;
-(id)parentSettings;
-(void)setDefaultValues;


@end


#endif