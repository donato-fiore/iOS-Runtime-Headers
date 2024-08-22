// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PFUBIQUITYSAFESAVEFILE_H
#define PFUBIQUITYSAFESAVEFILE_H

@class NSString, NSError;
@protocol OS_dispatch_semaphore;

#import <Foundation/Foundation.h>

#import "PFUbiquityLocation.h"

@interface PFUbiquitySafeSaveFile : NSObject {
    PFUbiquityLocation *_permanentLocation;
    PFUbiquityLocation *_safeSaveLocation;
    PFUbiquityLocation *_currentLocation;
    NSString *_localPeerID;
    BOOL _continueCheckingDownload;
    BOOL _downloadSuccess;
    NSError *_downloadError;
    BOOL _continueCheckingUpload;
    BOOL _safeSaveSuccess;
    BOOL _moveAfterSave;
    NSError *_safeSaveError;
    NSObject<OS_dispatch_semaphore> *_safeSaveSemaphore;
    BOOL _isRegistered;
}




-(BOOL)loadFileFromLocation:(id)arg0 error:(*id)arg1 ;
-(BOOL)moveToPermanentLocation:(*id)arg0 ;
-(BOOL)waitForFileToUpload:(*id)arg0 ;
-(BOOL)writeFileToLocation:(id)arg0 error:(*id)arg1 ;
-(id)description;
-(id)init;
-(id)initWithPermanentLocation:(id)arg0 safeSaveLocation:(id)arg1 andLocalPeerID:(id)arg2 ;
-(void)dealloc;


@end


#endif