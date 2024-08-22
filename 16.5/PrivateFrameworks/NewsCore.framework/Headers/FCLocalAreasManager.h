// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FCLOCALAREASMANAGER_H
#define FCLOCALAREASMANAGER_H

@class NSDate;
@protocol FCLocalAreasManager, FCContentContext;

#import <Foundation/Foundation.h>

#import "FCOnce.h"
#import "FCLocalAreasMapping.h"
#import "FCAsyncSerialQueue.h"

@interface FCLocalAreasManager : NSObject <FCLocalAreasManager>



@property (retain, nonatomic) NSObject<FCContentContext> *contentContext; // ivar: _contentContext
@property (readonly, nonatomic) FCOnce *loadFromCacheOnce; // ivar: _loadFromCacheOnce
@property (retain) FCLocalAreasMapping *localAreasMapping; // ivar: _localAreasMapping
@property (retain) NSDate *localAreasMappingFetchDate; // ivar: _localAreasMappingFetchDate
@property (retain, nonatomic) FCAsyncSerialQueue *queue; // ivar: _queue


-(id)initWithContentContext:(id)arg0 ;
-(void)_loadFromCache;
-(void)_refreshWithQoS:(NSInteger)arg0 completion:(id)arg1 ;
-(void)fetchLocalAreasProvider:(id)arg0 ;


@end


#endif