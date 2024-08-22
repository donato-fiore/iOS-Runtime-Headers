// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NTKBUNDLECOMPLICATIONMANAGER_H
#define NTKBUNDLECOMPLICATIONMANAGER_H


#import <Foundation/Foundation.h>

#import "NTKBundleComplicationDataSourceLoader.h"
#import "NTKCompanionBundleComplicationSyncCoordinator.h"

@interface NTKBundleComplicationManager : NSObject

@property (readonly, nonatomic) NTKBundleComplicationDataSourceLoader *loader; // ivar: _loader
@property (readonly, nonatomic) NTKCompanionBundleComplicationSyncCoordinator *syncCoordinator; // ivar: _syncCoordinator


+(id)sharedManager;
-(BOOL)bundleComplicationExistsForAppBundleIdentifier:(id)arg0 ;
-(BOOL)bundleExistsWithIdentifier:(id)arg0 appBundleIdentifier:(id)arg1 ;
-(Class)dataSourceClassForBundleComplication:(id)arg0 ;
-(id)allComplicationAppBundleIDs;
-(id)bundleComplicationsForBundleIdentifier:(id)arg0 ;
-(id)groupIdentifierForBundleIdentifier:(id)arg0 ;
-(id)init;
-(id)localizedAppNameForBundleIdentifier:(id)arg0 ;
-(id)localizedComplicationNameForBundleIdentifier:(id)arg0 ;
-(id)sectionIdentifierForBundleIdentifier:(id)arg0 ;
-(void)enumerateBundlesForComplicationFamily:(NSInteger)arg0 device:(id)arg1 withBlock:(id)arg2 ;
-(void)updateDescriptors;


@end


#endif