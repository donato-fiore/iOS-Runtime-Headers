// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CPSAPPINSTALLER_H
#define CPSAPPINSTALLER_H

@class DSArchiveService, NSString;
@protocol CPSAppInstalling, CPSAppInfoFetching;

#import <Foundation/Foundation.h>

#import "CPSAppBundleInstaller.h"

@interface CPSAppInstaller : NSObject <CPSAppInstalling>

 {
    CPSAppBundleInstaller *_appBundleInstaller;
    DSArchiveService *_archiveService;
}


@property (readonly, nonatomic) NSObject<CPSAppInfoFetching> *appInfoFetcher; // ivar: _appInfoFetcher
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)stopStallingCurrentInstallation;
-(id)initWithAppInfoFetcher:(id)arg0 ;
-(void)installDownloadedAppWithBundleID:(id)arg0 localFilePath:(id)arg1 completionHandler:(id)arg2 ;


@end


#endif