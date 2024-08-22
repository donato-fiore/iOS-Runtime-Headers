// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef OBBUNDLEMANAGER_H
#define OBBUNDLEMANAGER_H

@class NSString;

#import <Foundation/Foundation.h>


@interface OBBundleManager : NSObject

@property (retain, nonatomic) NSString *overrideBundleSearchPath; // ivar: _overrideBundleSearchPath


+(id)sharedManager;
-(id)_allPrivacyBundles;
-(id)_bundleSearchPath;
-(id)_providersByBundleNames;
-(id)allBundles;
-(id)bundleWithIdentifier:(id)arg0 ;
-(id)bundleWithIdentifier:(id)arg0 usingSearchPath:(id)arg1 includePlaceholder:(BOOL)arg2 isLinkBundle:(BOOL)arg3 ;
-(id)bundlesWithIdentifiers:(id)arg0 ;
-(id)orderedPrivacyBundles;
-(id)orderedPrivacyBundlesWithPrivacyPaneBundle:(BOOL)arg0 ;
-(id)privacyLinkBundleForBundles:(id)arg0 ;


@end


#endif