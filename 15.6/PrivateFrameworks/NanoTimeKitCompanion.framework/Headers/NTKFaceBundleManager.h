// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NTKFACEBUNDLEMANAGER_H
#define NTKFACEBUNDLEMANAGER_H

@class NSDictionary;

#import <Foundation/Foundation.h>

#import "NTKFaceBundleLoader.h"

@interface NTKFaceBundleManager : NSObject

@property (readonly, nonatomic) NSDictionary *bundleIDLookup; // ivar: _bundleIDLookup
@property (readonly, nonatomic) NTKFaceBundleLoader *loader; // ivar: _loader
@property (readonly, nonatomic) os_unfair_lock_s lookupLock; // ivar: _lookupLock
@property (readonly, nonatomic) NSDictionary *styleLookup; // ivar: _styleLookup


+(BOOL)_isRunningInSnapshotService;
+(id)sharedManager;
-(BOOL)loadKeyDescriptor:(id)arg0 ;
-(id)_init;
-(id)faceBundleForBundleIdentifier:(id)arg0 onDevice:(id)arg1 ;
-(id)faceBundleForFaceStyle:(NSInteger)arg0 onDevice:(id)arg1 ;
-(void)_generateLookupsIfNecessary;
-(void)_resetCaches;
-(void)argonUpdated:(id)arg0 ;
-(void)dealloc;
-(void)enumerateArgonKeyDescriptorsWithBlock:(id)arg0 ;
-(void)enumerateFaceBundlesOnDevice:(id)arg0 includingLegacy:(BOOL)arg1 withBlock:(id)arg2 ;
-(void)enumerateFaceBundlesOnDevice:(id)arg0 withBlock:(id)arg1 ;


@end


#endif