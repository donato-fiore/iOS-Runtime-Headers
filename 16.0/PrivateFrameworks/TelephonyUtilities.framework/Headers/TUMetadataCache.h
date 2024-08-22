// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TUMETADATACACHE_H
#define TUMETADATACACHE_H

@class NSString, NSArray;
@protocol TUMetadataCacheDataProviderDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface TUMetadataCache : NSObject <TUMetadataCacheDataProviderDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic, getter=isEmpty) BOOL empty;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSArray *providers; // ivar: _providers
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly) Class superclass;


+(id)classIdentifier;
-(id)init;
-(id)initWithDataProviders:(id)arg0 ;
-(id)initWithQueue:(id)arg0 dataProviders:(id)arg1 ;
-(id)metadataForDestinationID:(id)arg0 ;
-(void)_updateCacheWithDestinationIDs:(id)arg0 onlyEmptyProviders:(BOOL)arg1 ;
-(void)dataProvider:(id)arg0 requestedRefreshWithDestinationIDs:(id)arg1 ;
-(void)updateCacheForEmptyDataProvidersWithDestinationIDs:(id)arg0 ;
-(void)updateCacheWithDestinationIDs:(id)arg0 ;


@end


#endif