// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IMUNITTESTFRAMEWORKLOADER_H
#define IMUNITTESTFRAMEWORKLOADER_H


#import <Foundation/Foundation.h>

#import "IMUnitTestBundleLoader.h"
#import "IMUnitTestLogger.h"

@interface IMUnitTestFrameworkLoader : NSObject

@property (readonly, nonatomic) IMUnitTestBundleLoader *bundleLoader; // ivar: _bundleLoader
@property (readonly) IMUnitTestLogger *logger; // ivar: _logger
@property BOOL xctestFrameworkLoaded; // ivar: _xctestFrameworkLoaded


-(BOOL)findFrameworkPathsWithFrameworkNames:(id)arg0 searchPaths:(id)arg1 outFrameworkPaths:(*id)arg2 error:(*id)arg3 ;
-(BOOL)frameworkExistsAtPath:(id)arg0 ;
-(BOOL)loadFrameworkNamesFromTextFile:(id)arg0 outNames:(*id)arg1 error:(*id)arg2 ;
-(BOOL)loadFrameworks:(id)arg0 outError:(*id)arg1 ;
-(BOOL)loadTestFrameworks:(*id)arg0 ;
-(BOOL)loadXCTestFramework:(*id)arg0 ;
-(BOOL)loadXCTestFrameworkFromSDK:(*id)arg0 ;
-(BOOL)readXCTestFrameworkDependencies:(*id)arg0 error:(*id)arg1 ;
-(id)frameworkSearchPaths;
-(id)initWithLogger:(id)arg0 bundleLoader:(id)arg1 ;


@end


#endif