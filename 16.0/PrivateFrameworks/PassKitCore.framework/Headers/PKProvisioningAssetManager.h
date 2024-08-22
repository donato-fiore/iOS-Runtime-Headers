// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPROVISIONINGASSETMANAGER_H
#define PKPROVISIONINGASSETMANAGER_H


#import <Foundation/Foundation.h>


@interface PKProvisioningAssetManager : NSObject



+(id)sharedInstance;
-(id)_assetNameWithScreenScalingSuffix:(id)arg0 ;
-(id)_carPairingImageFromBundle:(id)arg0 darkMode:(BOOL)arg1 ;
-(id)init;
-(id)provisioningString:(id)arg0 templateIdentifier:(id)arg1 ;
-(void)_defaultCarPairingImage:(NSUInteger)arg0 darkMode:(BOOL)arg1 completion:(id)arg2 ;
-(void)_defaultCardArtwork:(id)arg0 ;
-(void)carPairingImageForRadioTechnology:(NSUInteger)arg0 templateIdentifier:(id)arg1 darkMode:(BOOL)arg2 completion:(id)arg3 ;
-(void)cardArtworkForTemplateIdentifier:(id)arg0 completion:(id)arg1 ;


@end


#endif