// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FSUSERFONTMANAGER_H
#define FSUSERFONTMANAGER_H


#import <Foundation/Foundation.h>


@interface FSUserFontManager : NSObject



+(CGFloat)secondsSinceLastAccessed:(id)arg0 ;
+(id)_UserFontManagerConnection;
+(id)directoryNameFromIdentifier:(id)arg0 ;
+(id)fontProvidersSubscriptionSupportInfoAndFontFamiliesInstalled:(*NSUInteger)arg0 andRemovedCount:(*NSUInteger)arg1 andProfileFontsCount:(*NSUInteger)arg2 ;
+(id)identifierFromDirectoryName:(id)arg0 ;
+(id)knownFontProviders;
+(id)profileFontsInfo;
+(id)registeredFamiliesForIdentifier:(id)arg0 enabled:(BOOL)arg1 ;
+(id)registeredFontsForIdentifier:(id)arg0 enabled:(BOOL)arg1 ;
+(id)registeredFontsInfoForIdentifier:(id)arg0 enabled:(BOOL)arg1 ;
+(id)resumeSuspendedFontFiles;
+(id)suspendedFontProviders;
+(id)userFontsInfo;
+(id)xpcInterface;
+(void)_removeAllUserFonts;
+(void)deleteAppDialogWithIdentifier:(id)arg0 completionHandler:(id)arg1 ;
+(void)enableOrDisablePersistentURLs:(id)arg0 enabled:(BOOL)arg1 ;
+(void)installFonts:(id)arg0 forIdentifier:(id)arg1 enabled:(BOOL)arg2 completionHandler:(id)arg3 ;
+(void)reset;
+(void)suspendFontProvider:(id)arg0 ;
+(void)synchronizeFontAssets:(id)arg0 ;
+(void)synchronizeFontProviders;
+(void)synchronizeProfileFonts:(id)arg0 ;
+(void)uninstallFonts:(id)arg0 forIdentifier:(id)arg1 completionHandler:(id)arg2 ;
+(void)unregisterAndRemoveFontFilesForIdentifier:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif