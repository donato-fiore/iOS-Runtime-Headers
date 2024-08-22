// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MIDRIVERKITBUNDLE_H
#define MIDRIVERKITBUNDLE_H



#import "MIExecutableBundle.h"

@interface MIDriverKitBundle : MIExecutableBundle



// +(id)bundlesInParentBundle:(id)arg0 subDirectory:(id)arg1 matchingPredicate:(id)arg2 error:(unk)arg3  ;
-(BOOL)validateBundleMetadataWithError:(*id)arg0 ;
-(id)currentOSVersionForValidationWithError:(*id)arg0 ;
-(id)initWithBundleParentURL:(id)arg0 parentSubdirectory:(id)arg1 bundleName:(id)arg2 error:(*id)arg3 ;
-(id)minimumOSVersion;


@end


#endif