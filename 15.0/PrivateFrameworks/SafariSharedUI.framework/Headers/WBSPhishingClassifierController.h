// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WBSPHISHINGCLASSIFIERCONTROLLER_H
#define WBSPHISHINGCLASSIFIERCONTROLLER_H

@protocol WBSPhishingAssetControllerDelegate, WBSPhishingClassifier, OS_dispatch_queue, WBSPhishingURLClassifier, WBSPhishingAssetControllerProtocol, WBSPhishingImageClassifierModelProtocol, WBSPhishingClassifierControllerDelegate;

#import <Foundation/Foundation.h>

#import "WBSPhishingURLClassifierCache.h"
#import "WBSPhishingURLClassifierConfigurationOverrideAdapter.h"
#import "WBSPhishingConfiguration.h"

@interface WBSPhishingClassifierController : NSObject <WBSPhishingAssetControllerDelegate, WBSPhishingClassifier>

 {
    NSObject<OS_dispatch_queue> *_queue;
    WBSPhishingURLClassifierCache *_cache;
    WBSPhishingURLClassifierConfigurationOverrideAdapter *_configurationAdapter;
    id<WBSPhishingURLClassifier> *_root;
    id<WBSPhishingAssetControllerProtocol> *_assetController;
    id<WBSPhishingImageClassifierModelProtocol> *_model;
    WBSPhishingConfiguration *_configuration;
}


@property (weak) NSObject<WBSPhishingClassifierControllerDelegate> *delegate; // ivar: _delegate


+(BOOL)isDisabled;
-(id)initWithAssetController:(id)arg0 history:(id)arg1 crowdsourcedFeedbackAllowList:(id)arg2 ;
-(id)initWithHistory:(id)arg0 crowdsourcedFeedbackAllowList:(id)arg1 ;
-(void)classifyURL:(id)arg0 image:(id)arg1 completionHandler:(id)arg2 ;
-(void)classifyURL:(id)arg0 options:(NSUInteger)arg1 completionHandler:(id)arg2 ;
-(void)classifyURL:(id)arg0 webView:(id)arg1 completionHandler:(id)arg2 ;
-(void)phishingAssetController:(id)arg0 didFailCatalogDownload:(id)arg1 ;
-(void)phishingAssetController:(id)arg0 didFailDownload:(id)arg1 ;
-(void)phishingAssetController:(id)arg0 didFailLoad:(id)arg1 ;
-(void)phishingAssetController:(id)arg0 didFailModelInitialization:(id)arg1 ;
-(void)phishingAssetController:(id)arg0 didLoadImageClassifierModel:(id)arg1 configuration:(id)arg2 ;
-(void)setClassification:(NSUInteger)arg0 forURL:(id)arg1 ;
-(void)takeSnapshotForWebView:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif