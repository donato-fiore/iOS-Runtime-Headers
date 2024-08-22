// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MIAPPEXTENSIONBUNDLE_H
#define MIAPPEXTENSIONBUNDLE_H

@class NSString;


#import "MIExecutableBundle.h"

@interface MIAppExtensionBundle : MIExecutableBundle

@property (readonly, copy, nonatomic) NSString *extensionPointIdentifier; // ivar: _extensionPointIdentifier
@property (copy, nonatomic) NSString *validationOverrideParentBundleID; // ivar: _validationOverrideParentBundleID


-(BOOL)hasDotInBundleIDSuffixWithError:(*id)arg0 ;
-(BOOL)validateBundleMetadataWithError:(*id)arg0 ;
-(Class)dataContainerClass;
-(id)dataContainerCreatingIfNeeded:(BOOL)arg0 makeLive:(BOOL)arg1 created:(*BOOL)arg2 error:(*id)arg3 ;
-(id)dataContainerWithError:(*id)arg0 ;
-(id)extensionCacheEntryWithError:(*id)arg0 ;
-(id)initForTesting;
-(id)initWithBundleParentURL:(id)arg0 parentSubdirectory:(id)arg1 bundleName:(id)arg2 error:(*id)arg3 ;
-(id)minimumOSVersion;
-(void)setBundleParentDirectoryURL:(id)arg0 ;


@end


#endif