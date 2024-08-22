// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TBREMOTEDATASOURCE_H
#define TBREMOTEDATASOURCE_H

@protocol OS_dispatch_queue;


#import "TBDataSource.h"

@interface TBRemoteDataSource : TBDataSource

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue


-(NSUInteger)type;
-(id)init;
-(void)_captureTileFetchError:(id)arg0 tileKey:(id)arg1 duration:(CGFloat)arg2 trigger:(NSUInteger)arg3 ;
-(void)_executeLocationFetchRequest:(id)arg0 ;
-(void)_executeNetworkFetchRequest:(id)arg0 ;
-(void)_executeTileFetchRequest:(id)arg0 ;
// -(void)_fetchTilesForTileItems:(id)arg0 completionHandler:(id)arg1 trigger:(unk)arg2  ;
-(void)_fetchTilesWithRequest:(id)arg0 ;
-(void)_submitNetworkSearch:(id)arg0 completion:(id)arg1 ;
-(void)_writeSearchTileToFile:(id)arg0 ;
-(void)executeFetchRequest:(id)arg0 ;


@end


#endif