// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICLWORKSPACE_H
#define ICLWORKSPACE_H


#import <Foundation/Foundation.h>


@interface ICLWorkspace : NSObject



+(id)_connectionToInstallationDaemonWithError:(*id)arg0 ;
+(id)defaultWorkspace;
// -(BOOL)enumerateBuiltInSystemContentWithBlock:(id)arg0 error:(unk)arg1  ;
// -(BOOL)enumerateCryptexContentWithBlock:(id)arg0 error:(unk)arg1  ;
-(BOOL)triggerRegistrationForContainerizedContentWithOptions:(id)arg0 withError:(*id)arg1 ;
-(id)bundleIDsForContainerizedContentWithError:(*id)arg0 ;
-(id)bundleRecordsForLaunchServicesWithWrapperURL:(id)arg0 forBundleIdentifier:(id)arg1 withError:(*id)arg2 ;
-(id)infoForLaunchServicesWithWrapperURL:(id)arg0 forBundleIdentifier:(id)arg1 withError:(*id)arg2 ;
-(id)init;
-(void)triggerRegistrationForContainerizedContentWithOptions:(id)arg0 completion:(id)arg1 ;


@end


#endif