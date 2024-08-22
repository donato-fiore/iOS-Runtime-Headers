// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PHASSETCRASHRECOVERYSUPPORT_H
#define PHASSETCRASHRECOVERYSUPPORT_H

@class PLLibraryServicesManager, NSString;
@protocol PLXPCUserInfo;

#import <Foundation/Foundation.h>


@interface PHAssetCrashRecoverySupport : NSObject <PLXPCUserInfo>

 {
    PLLibraryServicesManager *_libraryServicesManager;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_isCrashRecoveryFilename:(id)arg0 ;
-(BOOL)_isSafeToRecoverAfterCrashForCrashRecoveryFileURL:(id)arg0 ;
-(id)initWithLibraryServicesManager:(id)arg0 ;
-(id)libraryServicesManager;
-(id)persistentStoreCoordinator;
-(void)_commitRequest:(id)arg0 reply:(id)arg1 ;
-(void)recoverFromCrashIfNeeded;


@end


#endif