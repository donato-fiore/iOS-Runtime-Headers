// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WLSAFEHARBORMANAGER_H
#define WLSAFEHARBORMANAGER_H

@class NSFileManager, NSString;

#import <Foundation/Foundation.h>

#import "WLMobileInstallation.h"

@interface WLSafeHarborManager : NSObject

@property (nonatomic) NSFileManager *fileManager; // ivar: _fileManager
@property (retain, nonatomic) WLMobileInstallation *mobileInstallation; // ivar: _mobileInstallation
@property (copy, nonatomic) NSString *path; // ivar: _path


-(id)_infoDataFromDictionary:(id)arg0 returningError:(*id)arg1 ;
-(id)_infoDictionaryForDirectory:(id)arg0 ;
-(id)_safeHarborDirectoryForBundleID:(id)arg0 ;
-(id)_writeInfoData:(id)arg0 toDirectory:(id)arg1 ;
-(id)createSafeHarborDirectoryForBundleID:(id)arg0 returningError:(*id)arg1 ;
-(id)deleteSafeHarborForBundleID:(id)arg0 ;
-(id)init;
-(id)linkItemAtPath:(id)arg0 toRelativePath:(id)arg1 inAndroidContentPathOfSafeHarborDirectory:(id)arg2 ;
-(id)promoteDirectoryToSafeHarbor:(id)arg0 ;


@end


#endif