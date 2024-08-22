// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MIEXTENSIONKITBUNDLE_H
#define MIEXTENSIONKITBUNDLE_H

@class NSString, NSDictionary;


#import "MIAppExtensionBundle.h"

@interface MIExtensionKitBundle : MIAppExtensionBundle {
    NSString *_extensionPointIdentifier;
}


@property (readonly, copy, nonatomic) NSDictionary *extensionAttributes; // ivar: _extensionAttributes


// +(id)bundlesInParentBundle:(id)arg0 subDirectory:(id)arg1 matchingPredicate:(id)arg2 error:(unk)arg3  ;
-(BOOL)_validateDelegateClassWithError:(*id)arg0 ;
-(BOOL)_validatePresenceOfSwiftEntrySectionInFile:(int)arg0 shouldHaveSwiftEntry:(BOOL)arg1 withError:(*id)arg2 ;
-(BOOL)validateBundleMetadataWithError:(*id)arg0 ;
-(id)extensionPointIdentifier;


@end


#endif