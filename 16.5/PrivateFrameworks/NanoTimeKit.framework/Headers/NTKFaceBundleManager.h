// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NTKFACEBUNDLEMANAGER_H
#define NTKFACEBUNDLEMANAGER_H

@class NSArray, NSMutableDictionary;

#import <Foundation/Foundation.h>

#import "NTKFaceBundleLoader.h"

@interface NTKFaceBundleManager : NSObject {
    NSArray *_cachedLookup;
    os_unfair_lock_s _lookupLock;
}


@property (readonly, nonatomic) NTKFaceBundleLoader *loader; // ivar: _loader
@property (readonly, nonatomic) NSMutableDictionary *progressiveBundleIDLookup; // ivar: _progressiveBundleIDLookup
@property (readonly, nonatomic) NSMutableDictionary *progressiveStyleLookup; // ivar: _progressiveStyleLookup


+(id)sharedManager;
-(BOOL)loadKeyDescriptor:(id)arg0 ;
-(id)_generateLookupsIfNecessary;
-(id)_init;
-(id)faceBundleForBundleIdentifier:(id)arg0 onDevice:(id)arg1 ;
-(id)faceBundleForBundleIdentifier:(id)arg0 onDevice:(id)arg1 forMigration:(BOOL)arg2 ;
-(id)faceBundleForFaceStyle:(NSInteger)arg0 onDevice:(id)arg1 ;
-(void)_resetCaches;
-(void)argonUpdated:(id)arg0 ;
-(void)dealloc;
-(void)enumerateArgonKeyDescriptorsWithBlock:(id)arg0 ;
-(void)enumerateFaceBundlesOnDevice:(id)arg0 includingLegacy:(BOOL)arg1 withBlock:(id)arg2 ;
-(void)enumerateFaceBundlesOnDevice:(id)arg0 withBlock:(id)arg1 ;


@end


#endif