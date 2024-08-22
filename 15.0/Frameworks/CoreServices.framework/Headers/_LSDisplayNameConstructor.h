// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _LSDISPLAYNAMECONSTRUCTOR_H
#define _LSDISPLAYNAMECONSTRUCTOR_H

@class NSString;

#import <Foundation/Foundation.h>


@interface _LSDisplayNameConstructor : NSObject {
    NSString *_originalName;
    NSString *_baseName;
    NSString *_extension;
    NSString *_secondaryExtension;
    BOOL _wantsHiddenExtension;
    BOOL _isFolder;
    BOOL _isApplication;
    BOOL _hadNonASCIICharacter;
    BOOL _hadColonInFSName;
    BOOL _hadBiDiControlCharacter;
    BOOL _hadForbiddenCharacter;
}




+(?)displayNameConstructorWithContextIfNeeded:(?)arg0 bundle:(?)arg1 bundleClass:(?)arg2 node:(?)arg3 preferredLocalizationserror;
+(?)displayNameConstructorWithContextIfNeeded:(?)arg0 nodeerror;
+(?)displayNameConstructorsWithContextIfNeeded:(?)arg0 bundle:(?)arg1 bundleClass:(?)arg2 nodeerror;
+(?)displayNameConstructorsWithContextIfNeeded:(?)arg0 nodeerror;
+(BOOL)showAllExtensions;
+(id)concatenateBaseName:(id)arg0 andExtension:(id)arg1 ;
+(id)displayNameConstructorWithContext:(struct LSContext *)arg0 bundle:(unsigned int)arg1 bundleClass:(*unsigned int)arg2 node:(id)arg3 preferredLocalizations:(id)arg4 error:(*id)arg5 ;
+(id)displayNameConstructorWithContext:(struct LSContext *)arg0 node:(id)arg1 error:(*id)arg2 ;
+(id)displayNameConstructorsWithContext:(struct LSContext *)arg0 bundle:(unsigned int)arg1 bundleClass:(*unsigned int)arg2 node:(id)arg3 error:(*id)arg4 ;
+(id)displayNameConstructorsWithContext:(struct LSContext *)arg0 node:(id)arg1 error:(*id)arg2 ;
+(id)suffixForRemoteXCTests;
+(void)getExtensionRange:(struct _NSRange *)arg0 secondaryExtensionRange:(struct _NSRange *)arg1 fromFileName:(id)arg2 considerConfusables:(BOOL)arg3 ;
+(void)setShowAllExtensions:(BOOL)arg0 ;
+(void)setSuffixForRemoteXCTests:(id)arg0 ;
-(?)initNodeBitsWithContextIfNeeded:(?)arg0 node:(?)arg1 isDirectorybundleClass;
-(?)initWithContextIfNeeded:(?)arg0 node:(?)arg1 isDirectory:(?)arg2 bundleClass:(?)arg3 desiredDisplayNametreatAsFSName;
-(?)mayHideExtensionWithContextIfNeeded;
-(?)showExtensionWithContextIfNeededasIfShowingAllExtensions;
-(?)unlocalizedNameWithContextIfNeeded;
-(?)unlocalizedNameWithContextIfNeededasIfShowingAllExtensions;
-(BOOL)canSetExtensionHiddenWithContext:(struct LSContext *)arg0 ;
-(BOOL)isStringNaturallyRTL:(id)arg0 ;
-(BOOL)wantsHiddenExtension;
-(id)cleanSecondaryExtension:(id)arg0 ;
-(id)combineBaseName:(id)arg0 extension:(id)arg1 ;
-(id)init;
-(id)insertCompleteNameBiDiControlCharacters:(id)arg0 ;
-(id)insertNameComponentBiDiControlCharacters:(id)arg0 ;
-(id)transformBeforeCombining:(id)arg0 needsBiDiControlCharacters:(*BOOL)arg1 ;
-(id)unlocalizedNameWithContext:(struct LSContext *)arg0 ;
-(id)unlocalizedNameWithContext:(struct LSContext *)arg0 asIfShowingAllExtensions:(id)arg1 ;
-(void)getTransformedBaseName:(*id)arg0 extension:(*id)arg1 needsBiDiControlCharacters:(BOOL)arg2 ;
-(void)getUnlocalizedBaseName:(*id)arg0 extension:(*id)arg1 requiresAdditionalBiDiControlCharacters:(*BOOL)arg2 ;
-(void)initContentBitsWithDisplayName:(id)arg0 treatAsFSName:(BOOL)arg1 ;
-(void)initNamePartsWithDisplayName:(id)arg0 ;


@end


#endif