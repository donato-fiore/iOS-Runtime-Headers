// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NPTMETADATACOLLECTOR_H
#define NPTMETADATACOLLECTOR_H

@class NSMutableDictionary, NSMutableArray, NSString, CWFInterface, NSDate;
@protocol NPTMetadataCollection, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface NPTMetadataCollector : NSObject <NPTMetadataCollection>



@property (retain, nonatomic) NSObject<OS_dispatch_queue> *backgroundQueue; // ivar: _backgroundQueue
@property (retain) NSMutableDictionary *cachedMetadata; // ivar: cachedMetadata
@property (retain, nonatomic) NSMutableArray *collectors; // ivar: _collectors
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) CWFInterface *interface; // ivar: _interface
@property (copy, nonatomic) id *metadataDidChangeHandler; // ivar: metadataDidChangeHandler
@property (copy, nonatomic) id *metadataDidChangeHandlerForCollectors; // ivar: _metadataDidChangeHandlerForCollectors
@property (retain, nonatomic) NSDate *startDate; // ivar: _startDate
@property (readonly) Class superclass;


+(id)collectorName;
+(id)fetch;
+(id)fetchCellularData;
+(id)fetchDeviceData;
+(id)fetchWRMMetrics;
-(BOOL)knownCollectionType:(Class)arg0 ;
-(id)init;
-(id)initWithCollectorTypes:(id)arg0 ;
-(void)startCollectingWithCompletion:(id)arg0 ;
-(void)stopCollecting;


@end


#endif