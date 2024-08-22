// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MIEMBEDDEDWATCHBUNDLE_H
#define MIEMBEDDEDWATCHBUNDLE_H



#import "MIExecutableBundle.h"

@interface MIEmbeddedWatchBundle : MIExecutableBundle

@property (readonly, nonatomic) BOOL isApplicableToKnownWatchOSVersion;
@property (readonly, nonatomic) BOOL isPlaceholder; // ivar: _isPlaceholder


-(BOOL)allowsAppExtensionsNotInExtensionCache;
-(id)currentOSVersionForValidationWithError:(*id)arg0 ;
-(id)extensionKitBundlesPerformingPlatformValidation:(unsigned char)arg0 withError:(*id)arg1 ;
-(id)extensionKitBundlesWithError:(*id)arg0 ;
-(id)initWithParentBundle:(id)arg0 parentSubdirectory:(id)arg1 bundleName:(id)arg2 isPlaceholder:(BOOL)arg3 error:(*id)arg4 ;
-(id)pluginKitBundlesPerformingPlatformValidation:(unsigned char)arg0 withError:(*id)arg1 ;
-(id)pluginKitBundlesWithError:(*id)arg0 ;
-(unsigned char)bundleType;


@end


#endif