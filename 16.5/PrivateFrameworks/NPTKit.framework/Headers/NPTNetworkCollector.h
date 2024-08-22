// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NPTNETWORKCOLLECTOR_H
#define NPTNETWORKCOLLECTOR_H

@class NSMutableDictionary, W5Client, NSString, NSArray;
@protocol NPTMetadataCollection;

#import <Foundation/Foundation.h>


@interface NPTNetworkCollector : NSObject <NPTMetadataCollection>



@property (retain) NSMutableDictionary *cachedMetadata; // ivar: cachedMetadata
@property (retain, nonatomic) W5Client *client; // ivar: _client
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSArray *eventsToMonitor; // ivar: _eventsToMonitor
@property (readonly) NSUInteger hash;
@property (copy) id *metadataDidChangeHandler; // ivar: metadataDidChangeHandler
@property (readonly) Class superclass;


+(id)collectorName;
-(void)startCollectingWithCompletion:(id)arg0 ;
-(void)stopCollecting;


@end


#endif