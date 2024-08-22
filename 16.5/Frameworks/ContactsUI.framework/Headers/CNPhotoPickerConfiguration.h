// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNPHOTOPICKERCONFIGURATION_H
#define CNPHOTOPICKERCONFIGURATION_H


#import <Foundation/Foundation.h>


@interface CNPhotoPickerConfiguration : NSObject

@property (readonly, nonatomic) BOOL allowAnimojiCreation; // ivar: _allowAnimojiCreation
@property (readonly, nonatomic) BOOL allowPhotoCapture; // ivar: _allowPhotoCapture
@property (readonly, nonatomic) BOOL allowPhotoFromLibrary; // ivar: _allowPhotoFromLibrary
@property (readonly, nonatomic) BOOL allowRotation; // ivar: _allowRotation
@property (readonly, nonatomic) BOOL includeAnimoji; // ivar: _includeAnimoji
@property (readonly, nonatomic) BOOL includeContactImage; // ivar: _includeContactImage
@property (readonly, nonatomic) BOOL includeEmoji; // ivar: _includeEmoji
@property (readonly, nonatomic) BOOL includeFaces; // ivar: _includeFaces
@property (readonly, nonatomic) BOOL includeMonograms; // ivar: _includeMonograms
@property (readonly, nonatomic) BOOL includeRecents; // ivar: _includeRecents
@property (readonly, nonatomic) BOOL includeUnifiedContactImages; // ivar: _includeUnifiedContactImages


+(id)contactsConfiguration;
+(id)defaultConfiguration;
+(id)gameCenterConfiguration;
-(id)configurationBySettingAllowsPhotoCapture:(BOOL)arg0 ;
-(id)initWithIncludeContactImage:(BOOL)arg0 includeUnifiedContactImages:(BOOL)arg1 includeFaces:(BOOL)arg2 includeMonograms:(BOOL)arg3 includeAnimoji:(BOOL)arg4 includeRecents:(BOOL)arg5 includeEmoji:(BOOL)arg6 allowPhotoCapture:(BOOL)arg7 allowPhotoFromLibrary:(BOOL)arg8 allowAnimojiCreation:(BOOL)arg9 allowRotation:(BOOL)arg10 ;


@end


#endif