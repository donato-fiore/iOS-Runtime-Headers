// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PFUBIQUITYFILEPRESENTER_H
#define PFUBIQUITYFILEPRESENTER_H

@class NSString, NSURL, NSMutableArray, NSMutableDictionary, NSSet, NSOperationQueue;
@protocol NSFilePresenter, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "PFUbiquityLocation.h"

@interface PFUbiquityFilePresenter : NSObject <NSFilePresenter>

 {
    PFUbiquityLocation *_ubiquityRootLocation;
    NSString *_localPeerID;
    NSString *_storeName;
    NSURL *_presentedItemURL;
    NSObject<OS_dispatch_queue> *_processingQueue;
    BOOL _scheduledProcessingBlock;
    NSMutableArray *_pendingURLs;
    int _pendingURLsLock;
    NSMutableDictionary *_locationToSafeSaveFile;
    NSMutableDictionary *_locationToStatus;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSSet *observedPresentedItemUbiquityAttributes;
@property (readonly) NSOperationQueue *presentedItemOperationQueue;
@property (readonly, copy) NSURL *presentedItemURL;
@property (readonly, copy) NSURL *primaryPresentedItemURL;
@property (readonly) Class superclass;


+(void)initialize;
-(id)init;
-(id)initWithUbiquityRootLocation:(id)arg0 localPeerID:(id)arg1 storeName:(id)arg2 processingQueue:(id)arg3 ;
-(void)dealloc;
-(void)exporterDidMoveLog:(id)arg0 ;
-(void)logImportWasCancelled:(id)arg0 ;
-(void)logWasExported:(id)arg0 ;
-(void)logWasImported:(id)arg0 ;
-(void)logsWereScheduled:(id)arg0 ;
-(void)presentedSubitemDidChangeAtURL:(id)arg0 ;
-(void)printStatus:(id)arg0 ;
-(void)relinquishPresentedItemToReader:(id)arg0 ;
-(void)relinquishPresentedItemToWriter:(id)arg0 ;
-(void)setupAssistantDiscoveredPathsFromMetadataQuery:(id)arg0 ;


@end


#endif