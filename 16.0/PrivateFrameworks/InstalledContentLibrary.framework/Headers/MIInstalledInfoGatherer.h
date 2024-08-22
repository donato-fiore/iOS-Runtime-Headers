// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MIINSTALLEDINFOGATHERER_H
#define MIINSTALLEDINFOGATHERER_H

@class NSString, NSURL;

#import <Foundation/Foundation.h>

#import "MIExecutableBundle.h"
#import "MIBundleContainer.h"
#import "MIDataContainer.h"

@interface MIInstalledInfoGatherer : NSObject

@property (readonly, nonatomic) MIExecutableBundle *builtInAppParallelPlaceholderBundle; // ivar: _builtInAppParallelPlaceholderBundle
@property (readonly, nonatomic) MIExecutableBundle *bundle; // ivar: _bundle
@property (readonly, nonatomic) MIBundleContainer *bundleContainer; // ivar: _bundleContainer
@property (readonly, nonatomic) MIDataContainer *dataContainer; // ivar: _dataContainer
@property (readonly, nonatomic) NSString *owningBundleIdentifier; // ivar: _owningBundleIdentifier
@property (readonly, nonatomic) NSURL *parentBundleURL; // ivar: _parentBundleURL


-(BOOL)_populateBundleRecord:(id)arg0 error:(*id)arg1 ;
-(BOOL)_populateBundleRecordValues:(id)arg0 signingInfo:(id)arg1 error:(*id)arg2 ;
-(id)_groupContainersDictionary;
-(id)_sandboxEnvironment;
-(id)_stashedAppRecordForStashedContainer:(id)arg0 ;
-(id)_staticDiskUsage;
-(id)bundleRecordWithError:(*id)arg0 ;
-(id)initWithAppExtensionBundle:(id)arg0 inBundleIdentifier:(id)arg1 dataContainer:(id)arg2 ;
-(id)initWithBundle:(id)arg0 dataContainer:(id)arg1 ;
-(id)initWithBundleContainer:(id)arg0 ;
-(id)initWithBundleContainer:(id)arg0 dataContainer:(id)arg1 ;
-(void)_fixUpForBuiltInAppParallelPlaceholder;
-(void)_populateAppExtensionRecordValues:(id)arg0 ;
-(void)_populateAppRecordValues:(id)arg0 ;
-(void)_populatePlaceholderRecordValues:(id)arg0 signingInfo:(id)arg1 ;


@end


#endif