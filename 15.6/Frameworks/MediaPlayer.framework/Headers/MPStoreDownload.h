// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MPSTOREDOWNLOAD_H
#define MPSTOREDOWNLOAD_H

@class NSMutableArray, SSDownload, SSPurchase, SSPurchaseResponse, NSString, NSDictionary, NSError;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface MPStoreDownload : NSObject {
    NSObject<OS_dispatch_queue> *_accessQueue;
    BOOL _canceled;
    NSMutableArray *_overridePhaseIdentifiers;
    SSDownload *_SSDownload;
    SSPurchase *_SSPurchase;
    SSPurchaseResponse *_SSPurchaseResponse;
    NSString *_downloadFilePath;
}


@property (readonly, nonatomic) NSDictionary *attributes; // ivar: _attributes
@property (readonly, nonatomic) NSInteger bytesDownloaded;
@property (readonly, nonatomic) NSInteger bytesTotal;
@property (readonly, nonatomic, getter=isCanceled) BOOL canceled;
@property (readonly, nonatomic) NSInteger downloadIdentifier;
@property (readonly, nonatomic) NSInteger downloadSizeLimit;
@property (readonly, nonatomic) NSError *failureError;
@property (readonly, nonatomic, getter=isFinished) BOOL finished;
@property (readonly, nonatomic) NSUInteger libraryItemIdentifier;
@property (readonly, nonatomic, getter=isPaused) BOOL paused;
@property (readonly, nonatomic) CGFloat percentComplete;
@property (readonly, nonatomic) NSString *phaseIdentifier;
@property (readonly, nonatomic) NSError *purchaseError;
@property (readonly, nonatomic, getter=isPurchasing) BOOL purchasing;
@property (readonly, nonatomic) NSInteger reason;
@property (readonly, nonatomic) NSDictionary *rentalInformation;
@property (readonly, nonatomic, getter=isRestore) BOOL restore;
@property (readonly, nonatomic) NSInteger storeItemIdentifier;
@property (readonly, nonatomic) NSInteger type; // ivar: _type


+(id)_SSPurchaseForType:(NSInteger)arg0 attributes:(id)arg1 ;
+(id)storeDownloadForMediaItem:(id)arg0 type:(NSInteger)arg1 attributes:(id)arg2 ;
+(id)storeDownloadWithDownloadIdentifier:(NSInteger)arg0 ;
-(id)_SSDownload;
-(id)_SSPurchase;
-(id)_SSPurchaseResponse;
-(id)_currentOverridePhaseIdentifier;
-(id)_getDownloadFilePath;
-(id)_valueForDownloadProperty:(id)arg0 ;
-(id)assetsForType:(id)arg0 ;
-(id)description;
-(id)initWithType:(NSInteger)arg0 attributes:(id)arg1 ;
-(void)_addOverridePhaseIdentifier:(id)arg0 ;
-(void)_removeOverridePhaseIdentifier:(id)arg0 ;
-(void)_setDownloadFilePath:(id)arg0 ;
-(void)_setSSDownload:(id)arg0 ;
-(void)_setSSPurchase:(id)arg0 SSPurchaseResponse:(id)arg1 ;
-(void)resetCachedRentalInformation;


@end


#endif