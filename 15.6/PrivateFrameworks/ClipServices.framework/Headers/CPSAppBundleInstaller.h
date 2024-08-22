// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CPSAPPBUNDLEINSTALLER_H
#define CPSAPPBUNDLEINSTALLER_H

@class NSURL, IXPlaceholder, IXInitiatingAppInstallCoordinator, IXPromisedTransferToPath, NSString;
@protocol IXAppInstallCoordinatorObserver;

#import <Foundation/Foundation.h>


@interface CPSAppBundleInstaller : NSObject <IXAppInstallCoordinatorObserver>

 {
    NSURL *_extractedBundleURL;
    IXPlaceholder *_placeholder;
    IXInitiatingAppInstallCoordinator *_installCoordinator;
    IXPromisedTransferToPath *_appAssetPromise;
    id *_completionHandler;
}


@property (readonly, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL inactive; // ivar: _inactive
@property (readonly) Class superclass;


-(BOOL)stopStallingCurrentInstallation;
-(id)initWithBundleIdentifier:(id)arg0 extractedBundleURL:(id)arg1 ;
-(void)coordinator:(id)arg0 canceledWithReason:(id)arg1 client:(NSUInteger)arg2 ;
-(void)coordinatorDidCompleteSuccessfully:(id)arg0 forApplicationRecord:(id)arg1 ;
-(void)coordinatorDidInstallPlaceholder:(id)arg0 forApplicationRecord:(id)arg1 ;
-(void)installWithCompletionHandler:(id)arg0 ;


@end


#endif