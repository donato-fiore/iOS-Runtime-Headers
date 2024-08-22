// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PUIPHOTOSPRIVACYCONTROLLER_H
#define PUIPHOTOSPRIVACYCONTROLLER_H

@class PSListController, NSArray, NSSet;



@interface PUIPhotosPrivacyController : PSListController

@property (retain, nonatomic) NSArray *photoKitAppSpecifiers; // ivar: _photoKitAppSpecifiers
@property (retain, nonatomic) NSSet *photosAddOnlyAllAppIDs; // ivar: _photosAddOnlyAllAppIDs
@property (retain, nonatomic) NSSet *photosAddOnlyAllowedAppIDs; // ivar: _photosAddOnlyAllowedAppIDs
@property (retain, nonatomic) NSSet *photosAddOnlyDeniedAppIDs; // ivar: _photosAddOnlyDeniedAppIDs
@property (retain, nonatomic) NSSet *photosAllAppIDs; // ivar: _photosAllAppIDs
@property (retain, nonatomic) NSSet *photosReadWriteAllAppIDs; // ivar: _photosReadWriteAllAppIDs
@property (retain, nonatomic) NSSet *photosReadWriteAllowedAppIDs; // ivar: _photosReadWriteAllowedAppIDs
@property (retain, nonatomic) NSSet *photosReadWriteAllowedOrLimitedAppIDs; // ivar: _photosReadWriteAllowedOrLimitedAppIDs
@property (retain, nonatomic) NSSet *photosReadWriteDeniedAppIDs; // ivar: _photosReadWriteDeniedAppIDs
@property (retain, nonatomic) NSSet *photosReadWriteLimitedAppIDs; // ivar: _photosReadWriteLimitedAppIDs


+(BOOL)isServiceRestricted:(id)arg0 ;
+(void)setTCCForService:(struct __CFString *)arg0 appIdentifier:(id)arg1 value:(int)arg2 ;
-(BOOL)tableView:(id)arg0 shouldHighlightRowAtIndexPath:(id)arg1 ;
-(id)_photosStatus:(id)arg0 ;
-(id)appSpecifierWithName:(id)arg0 bundleID:(id)arg1 showPhotosAccess:(BOOL)arg2 showPhotosAddAccess:(BOOL)arg3 ;
-(id)specifiers;
-(void)_setPhotosStatus:(id)arg0 specifier:(id)arg1 ;
-(void)_updatePhotosAuthorizationStates;
-(void)updateSpecifiersForImposedSettings;


@end


#endif