// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKDATAFLOWLINK_H
#define HKDATAFLOWLINK_H

@class NSHashTable, Protocol;
@protocol OS_os_log, HKDataFlowLinkProcessor;

#import <Foundation/Foundation.h>


@interface HKDataFlowLink : NSObject {
    NSHashTable *_sources;
    NSHashTable *_destinations;
    NSObject<OS_os_log> *_category;
    os_unfair_lock_s _lock;
}


@property (readonly, nonatomic) Protocol *destinationProtocol; // ivar: _destinationProtocol
@property (readonly, weak, nonatomic) NSObject<HKDataFlowLinkProcessor> *processor; // ivar: _processor
@property (readonly, nonatomic) Protocol *sourceProtocol; // ivar: _sourceProtocol


-(id)allDestinationProcessors;
-(id)allSourceProcessors;
-(id)description;
-(id)destinationProcessorsConformingToProtocol:(id)arg0 ;
-(id)initWithProcessor:(id)arg0 sourceProtocol:(id)arg1 destinationProtocol:(id)arg2 loggingCategory:(id)arg3 ;
-(void)addDestination:(id)arg0 ;
-(void)addSource:(id)arg0 ;
-(void)destination:(id)arg0 didAddDownstreamDestination:(id)arg1 ;
-(void)removeDestination:(id)arg0 ;
-(void)removeSource:(id)arg0 ;
-(void)sendToDestinationProcessors:(id)arg0 ;
-(void)source:(id)arg0 didAddUpstreamSource:(id)arg1 ;


@end


#endif