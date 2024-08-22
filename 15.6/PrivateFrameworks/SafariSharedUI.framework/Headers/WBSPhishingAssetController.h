// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WBSPHISHINGASSETCONTROLLER_H
#define WBSPHISHINGASSETCONTROLLER_H

@class WBSRemotePlistController, NSURL, NSString;
@protocol WBSMobileAssetControllerDelegate, WBSRemotePlistControllerDelegate, WBSPhishingAssetControllerProtocol, OS_dispatch_queue, WBSMobileAssetControllerProtocol, WBSPhishingAssetControllerDelegate;

#import <Foundation/Foundation.h>

#import "WBSPhishingConfiguration.h"

@interface WBSPhishingAssetController : NSObject <WBSMobileAssetControllerDelegate, WBSRemotePlistControllerDelegate, WBSPhishingAssetControllerProtocol>

 {
    NSObject<OS_dispatch_queue> *_queue;
    id<WBSMobileAssetControllerProtocol> *_assetController;
    BOOL _canUpdateConfiguration;
    WBSPhishingConfiguration *_configuration;
    WBSRemotePlistController *_configurationController;
    id<WBSPhishingAssetControllerDelegate> *_delegate;
    NSURL *_assetURL;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak) NSObject<WBSPhishingAssetControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)mobileAssetType;
-(BOOL)_sendAssetToDelegateIfPossible;
-(BOOL)_sendAssetToDelegateIfPossible:(id)arg0 ;
-(id)_createConfigurationControllerWithDefaultConfigurationURL:(id)arg0 updateConfiguration:(id)arg1 defaultsKey:(id)arg2 ;
-(id)init;
-(id)initWithMobileAssetController:(id)arg0 canUpdateConfiguration:(BOOL)arg1 ;
-(void)_configurationWasUpdated:(id)arg0 ;
-(void)didDownloadPlistForRemotePlistController:(id)arg0 ;
-(void)mobileAssetController:(id)arg0 didBecomeAvailable:(id)arg1 ;
-(void)mobileAssetController:(id)arg0 didDownload:(id)arg1 ;
-(void)mobileAssetController:(id)arg0 didFailCatalogDownload:(id)arg1 ;
-(void)mobileAssetController:(id)arg0 didFailDownload:(id)arg1 ;
-(void)mobileAssetController:(id)arg0 didFailRetrieve:(id)arg1 ;
-(void)mobileAssetController:(id)arg0 willPerformQuery:(id)arg1 ;


@end


#endif