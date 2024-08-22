// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PLASSETSDCRASHRECOVERYSUPPORT_H
#define PLASSETSDCRASHRECOVERYSUPPORT_H

@class PLPhotoLibraryPathManager, NSDate;

#import <Foundation/Foundation.h>


@interface PLAssetsdCrashRecoverySupport : NSObject {
    PLPhotoLibraryPathManager *_pathManager;
    os_unfair_lock_s _recoveryIndicatorCheckLock;
    NSDate *_recoveryJobCreationDate;
}




-(BOOL)isSafeToRecoverAfterCrash;
-(id)initWithPathManager:(id)arg0 ;
-(void)_enqeueRecoveryJob:(id)arg0 date:(id)arg1 toImageWriter:(id)arg2 ;
-(void)recoverFromCrashIfNeededWithImageWriter:(id)arg0 ;


@end


#endif