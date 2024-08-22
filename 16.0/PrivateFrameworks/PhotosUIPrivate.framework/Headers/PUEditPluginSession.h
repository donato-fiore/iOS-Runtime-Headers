// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PUEDITPLUGINSESSION_H
#define PUEDITPLUGINSESSION_H

@class UINavigationController, NSString, UIViewController;
@protocol PUEditPluginHostViewControllerDataSource, PUEditPluginHostViewControllerDelegate, PUEditExtensionActivityViewControllerDelegate, PUEditableAsset, PUEditPluginSessionDataSource, PUEditPluginSessionDelegate;

#import <Foundation/Foundation.h>

#import "PUEditPluginManager.h"
#import "PUEditPlugin.h"

@interface PUEditPluginSession : NSObject <PUEditPluginHostViewControllerDataSource, PUEditPluginHostViewControllerDelegate, PUEditExtensionActivityViewControllerDelegate>

 {
    PUEditPluginManager *_pluginManager;
    UINavigationController *_pluginNavigationController;
}


@property (nonatomic) NSInteger adjustmentType; // ivar: _adjustmentType
@property (retain, nonatomic) NSObject<PUEditableAsset> *asset; // ivar: _asset
@property (retain, nonatomic) PUEditPlugin *currentPlugin; // ivar: _currentPlugin
@property (weak, nonatomic) NSObject<PUEditPluginSessionDataSource> *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PUEditPluginSessionDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) UIViewController *hostViewController; // ivar: _hostViewController
@property (nonatomic) BOOL isAvailable; // ivar: _isAvailable
@property (readonly, nonatomic) BOOL markupIsAvailable;
@property (readonly) Class superclass;


-(NSUInteger)pluginManagerMediaType;
-(id)_linkPresentationImage;
-(id)_localizedEditorListTitle;
-(id)init;
-(void)_beginMarkupSessionWithAsset:(id)arg0 fromViewController:(id)arg1 ;
-(void)_beginSessionWithAsset:(id)arg0 fromViewController:(id)arg1 sourceElement:(id)arg2 includeMarkupInList:(BOOL)arg3 ;
-(void)_launchPlugin:(id)arg0 afterDismissingViewController:(id)arg1 ;
-(void)_pluginManagerPluginsDidChange:(id)arg0 ;
-(void)_unlockScreenIfNeededWithCompletionHandler:(id)arg0 ;
-(void)beginMarkupSessionWithAsset:(id)arg0 fromViewController:(id)arg1 ;
-(void)beginSessionWithAsset:(id)arg0 fromViewController:(id)arg1 sourceElement:(id)arg2 includeMarkupInList:(BOOL)arg3 ;
-(void)dealloc;
-(void)dismissSession;
-(void)editExtensionActivityViewController:(id)arg0 didSelectActivity:(id)arg1 ;
-(void)editPluginHostViewController:(id)arg0 commitContentEditingOutput:(id)arg1 withCompletionHandler:(id)arg2 ;
-(void)editPluginHostViewController:(id)arg0 didFinishWithCompletionType:(NSUInteger)arg1 ;
-(void)editPluginHostViewController:(id)arg0 loadItemProviderWithHandler:(id)arg1 ;
-(void)loadItemProviderWithSupportedAdjustmentData:(id)arg0 loadHandler:(id)arg1 ;
-(void)presentAlertController:(id)arg0 ;
-(void)shouldLaunchPlugin:(id)arg0 completion:(id)arg1 ;
-(void)updateAvailability;
-(void)updatePluginManager;


@end


#endif