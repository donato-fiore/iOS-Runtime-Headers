// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NPTVPNCOLLECTOR_H
#define NPTVPNCOLLECTOR_H

@class NSMutableDictionary, NEConfigurationManager, NSString, NSArray, NEVPNManager;
@protocol NPTMetadataCollection, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface NPTVPNCollector : NSObject <NPTMetadataCollection>



@property (retain, nonatomic) NSObject<OS_dispatch_queue> *backgroundQueue; // ivar: _backgroundQueue
@property (retain) NSMutableDictionary *cachedMetadata; // ivar: cachedMetadata
@property (retain, nonatomic) NEConfigurationManager *configManager; // ivar: _configManager
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSArray *eventsToMonitor; // ivar: _eventsToMonitor
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NEVPNManager *manager; // ivar: _manager
@property (copy, nonatomic) id *metadataDidChangeHandler; // ivar: metadataDidChangeHandler
@property (readonly) Class superclass;


+(id)collectorName;
-(id)getVPNStatusAsString:(NSInteger)arg0 ;
-(void)startCollectingWithCompletion:(id)arg0 ;
-(void)stopCollecting;
-(void)vpnNotificationReceived:(id)arg0 ;


@end


#endif