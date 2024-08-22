// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PSPHOTOSPOLICYCONTROLLER_H
#define PSPHOTOSPOLICYCONTROLLER_H


#import <Foundation/Foundation.h>


@interface PSPhotosPolicyController : NSObject



-(id)_photosStatus:(id)arg0 ;
-(id)appSpecifierWithName:(id)arg0 bundleID:(id)arg1 ;
-(id)appSpecifierWithName:(id)arg0 bundleID:(id)arg1 showPhotosAccess:(BOOL)arg2 showPhotosAddAccess:(BOOL)arg3 ;
-(void)_setPhotosStatus:(id)arg0 specifier:(id)arg1 ;
-(void)getAuthorizationStatesForService:(struct __CFString *)arg0 allowedArray:(*id)arg1 limitedArray:(*id)arg2 deniedArray:(*id)arg3 ;
-(void)setTCCForService:(struct __CFString *)arg0 appIdentifier:(id)arg1 value:(int)arg2 ;


@end


#endif