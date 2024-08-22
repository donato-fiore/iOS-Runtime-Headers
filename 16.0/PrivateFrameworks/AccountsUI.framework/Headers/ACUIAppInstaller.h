// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ACUIAPPINSTALLER_H
#define ACUIAPPINSTALLER_H

@class NSDate, NSURL;
@protocol ACUIAppInstallerDelegate;

#import <Foundation/Foundation.h>

#import "ACUIAppDescription.h"

@interface ACUIAppInstaller : NSObject {
    ACUIAppDescription *_app;
    NSDate *_dateOfLastReachabilityCheck;
    BOOL _cachedReachabilityResult;
    NSDate *_dateOfLastInstallationCheck;
    BOOL _resultOfLastInstallationCheck;
    BOOL _needsAvailableInStoreCheck;
    BOOL _availableInStoreResult;
}


@property (weak, nonatomic) NSObject<ACUIAppInstallerDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) BOOL isAvailableInStore;
@property (readonly, nonatomic) BOOL isDownloadable;
@property (readonly, nonatomic) BOOL isInstalled;
@property (retain, nonatomic) NSURL *publisherURL; // ivar: _publisherURL
@property (readonly, nonatomic) BOOL requiresReachabilityCheckToDetermineDownloadability;


+(id)currentStoreFront;
-(BOOL)_isGreenTeaAvailable;
-(BOOL)_quicklyGenerateCachedReachabilityResultConsideringPublisherURL:(BOOL)arg0 ;
-(id)initForAppWithDescription:(id)arg0 ;
-(void)_performAvailabilityCheck:(id)arg0 ;
-(void)_performReachabilityCheck:(id)arg0 ;
-(void)_setAvailableInStoreResult:(BOOL)arg0 ;
-(void)_setCachedReachabilityResult:(BOOL)arg0 ;
-(void)checkAvailabilityInStore:(id)arg0 ;
-(void)fetchDownloadability:(id)arg0 ;
-(void)start;


@end


#endif