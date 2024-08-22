// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATLEGACYASSETLINK_H
#define ATLEGACYASSETLINK_H

@class NSMutableSet, NSMutableDictionary, NSMutableArray, NSString, NSArray;
@protocol ATMessageLinkObserver, ATAssetLink, OS_dispatch_queue, ATAssetLinkDelegate, ATLegacyAssetLinkProgressDelegate;

#import <Foundation/Foundation.h>

#import "ATLegacyMessageLink.h"

@interface ATLegacyAssetLink : NSObject <ATMessageLinkObserver, ATAssetLink>

 {
    NSMutableSet *_unqueuedAssets;
    NSMutableDictionary *_enqueuedAssetsByDataClass;
    ATLegacyMessageLink *_messageLink;
    NSMutableDictionary *_syncIDToItemPidMap;
    NSMutableArray *_readyDataClasses;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    NSObject<OS_dispatch_queue> *_queue;
    NSString *_hostVersion;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<ATAssetLinkDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic, getter=isOpen) BOOL open; // ivar: _open
@property (weak, nonatomic) NSObject<ATLegacyAssetLinkProgressDelegate> *progressDelegate; // ivar: _progressDelegate
@property (copy, nonatomic) NSArray *readyDataClasses;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSArray *supportedDataClasses; // ivar: _supportedDataClasses


-(BOOL)canEnqueueAsset:(id)arg0 ;
-(BOOL)linkIsReady;
-(BOOL)open;
-(NSUInteger)maximumBatchSize;
-(NSUInteger)priority;
-(id)_assetManifestForDataclasses:(id)arg0 ;
-(id)_assetsForDataClass:(id)arg0 identifier:(id)arg1 ;
-(id)_manifestEntryForATAsset:(id)arg0 ;
-(id)enqueueAssets:(id)arg0 force:(BOOL)arg1 ;
-(id)initWithMessageLink:(id)arg0 hostVersion:(id)arg1 ;
-(void)_enqueueAndRequestAssets;
-(void)_finishAsset:(id)arg0 withError:(id)arg1 ;
-(void)_handleFileCompleteMessage:(id)arg0 ;
-(void)_handleFileErrorMessage:(id)arg0 ;
-(void)_handleFileProgressMessage:(id)arg0 ;
-(void)cancelAssets:(id)arg0 ;
-(void)close;
-(void)messageLinkWasClosed:(id)arg0 ;
-(void)prioritizeAsset:(id)arg0 ;


@end


#endif