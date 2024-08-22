// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef OBBUNDLEMANAGER_H
#define OBBUNDLEMANAGER_H


#import <Foundation/Foundation.h>


@interface OBBundleManager : NSObject



+(id)sharedManager;
-(id)_allPrivacyBundles;
-(id)_bundleSearchPath;
-(id)allBundles;
-(id)bundleWithIdentifier:(id)arg0 ;
-(id)bundlesWithIdentifiers:(id)arg0 ;
-(id)orderedPrivacyBundles;
-(id)orderedPrivacyBundlesWithPrivacyPaneBundle:(BOOL)arg0 ;


@end


#endif