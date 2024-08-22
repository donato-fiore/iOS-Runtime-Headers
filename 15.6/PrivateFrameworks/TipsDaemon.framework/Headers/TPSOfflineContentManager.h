// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TPSOFFLINECONTENTMANAGER_H
#define TPSOFFLINECONTENTMANAGER_H

@class NSBundle, NSString, NSDictionary;
@protocol TPSOfflineContentManagerDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface TPSOfflineContentManager : NSObject

@property (weak, nonatomic) NSObject<TPSOfflineContentManagerDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) NSBundle *frameworkBundle; // ivar: _frameworkBundle
@property (retain, nonatomic) NSString *lastProcessedLocalIdentifier; // ivar: _lastProcessedLocalIdentifier
@property (retain, nonatomic) NSDictionary *offlineContentMap; // ivar: _offlineContentMap
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue; // ivar: _serialQueue


-(BOOL)shouldProcessRemoteContentWithIdentifier:(id)arg0 ;
-(id)_localFormattedDataForURL:(id)arg0 ;
-(id)contentForIdentifier:(id)arg0 ;
-(id)init;
-(void)cacheEligibleContentWithMetadata:(id)arg0 tipStatusController:(id)arg1 miniTipsMap:(id)arg2 tipsDeliveryInfoMap:(id)arg3 deliveryInfoMap:(id)arg4 ;
-(void)removeCacheContent;
-(void)removeOfflineContentForIdentifier:(id)arg0 ;
-(void)updateOfflineContent;
-(void)updateOfflineContentMap:(id)arg0 ;


@end


#endif