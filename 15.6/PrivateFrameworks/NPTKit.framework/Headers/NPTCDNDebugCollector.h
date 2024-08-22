// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NPTCDNDEBUGCOLLECTOR_H
#define NPTCDNDEBUGCOLLECTOR_H

@class NSMutableDictionary, NSString;
@protocol NPTMetadataCollection;

#import <Foundation/Foundation.h>


@interface NPTCDNDebugCollector : NSObject <NPTMetadataCollection>



@property (retain) NSMutableDictionary *cachedMetadata; // ivar: cachedMetadata
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) id *metadataDidChangeHandler; // ivar: metadataDidChangeHandler
@property (readonly) Class superclass;


+(id)collectorName;
-(void)startCollectingWithCompletion:(id)arg0 ;
-(void)stopCollecting;


@end


#endif