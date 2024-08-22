// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MILAUNCHSERVICESDATABASEGATHERER_H
#define MILAUNCHSERVICESDATABASEGATHERER_H

@class NSMutableSet, NSString;
@protocol MIFilesystemScannerDelegate;

#import <Foundation/Foundation.h>


@interface MILaunchServicesDatabaseGatherer : NSObject <MIFilesystemScannerDelegate>



@property (readonly, nonatomic) NSMutableSet *appExtensions; // ivar: _appExtensions
@property (readonly, nonatomic) NSMutableSet *coreServices; // ivar: _coreServices
@property (readonly, nonatomic) id *enumerator; // ivar: _enumerator
@property (readonly, nonatomic) NSMutableSet *frameworks; // ivar: _frameworks
@property (readonly, nonatomic) NSUInteger gatherOptions; // ivar: _gatherOptions
@property (readonly, nonatomic) NSMutableSet *internalApps; // ivar: _internalApps
@property (readonly, nonatomic) NSString *personaUniqueString; // ivar: _personaUniqueString
@property (readonly, nonatomic) BOOL shouldUpdateAppExtensionDataContainersWithParentID; // ivar: _shouldUpdateAppExtensionDataContainersWithParentID
@property (readonly, nonatomic) NSMutableSet *systemAppPlaceholders; // ivar: _systemAppPlaceholders
@property (readonly, nonatomic) NSMutableSet *systemApps; // ivar: _systemApps
@property (readonly, nonatomic) NSMutableSet *userApps; // ivar: _userApps


+(BOOL)enumerateAppExtensionsInBundle:(id)arg0 updatingAppExtensionParentID:(BOOL)arg1 ensureAppExtensionsAreExecutable:(BOOL)arg2 installProfiles:(BOOL)arg3 error:(*id)arg4 enumerator:(id)arg5 ;
+(id)entryForBundle:(id)arg0 inContainer:(id)arg1 withError:(*id)arg2 ;
+(id)fetchInfoForBundle:(id)arg0 inContainer:(id)arg1 withError:(*id)arg2 ;
-(BOOL)_markDriverKitExtensionsExecutableInBundle:(id)arg0 withError:(*id)arg1 ;
-(BOOL)_scanAppExtensionsInBundle:(id)arg0 inBundleContainer:(id)arg1 withError:(*id)arg2 ;
-(BOOL)_scanBundle:(id)arg0 inContainer:(id)arg1 addingToBundleSet:(id)arg2 enumeratingEntry:(id)arg3 withError:(*id)arg4 ;
-(BOOL)performGatherWithError:(*id)arg0 ;
-(BOOL)scanAppExtensionsInFrameworkBundle:(id)arg0 withError:(*id)arg1 ;
-(BOOL)scanExecutableBundle:(id)arg0 inContainer:(id)arg1 withError:(*id)arg2 ;
-(id)_setForEntry:(id)arg0 ;
-(id)initWithOptions:(NSUInteger)arg0 enumerator:(id)arg1 ;
-(id)initWithOptions:(NSUInteger)arg0 personaUniqueString:(id)arg1 enumerator:(id)arg2 ;
-(void)errorOccurred:(id)arg0 ;


@end


#endif