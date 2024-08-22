// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HKGRAPHSERIESDATASOURCE_H
#define HKGRAPHSERIESDATASOURCE_H

@protocol HKGraphSeriesDataSourceDelegate;

#import <Foundation/Foundation.h>


@interface HKGraphSeriesDataSource : NSObject

@property (weak, nonatomic) NSObject<HKGraphSeriesDataSourceDelegate> *delegate; // ivar: _delegate
@property (nonatomic) NSInteger maximumZoom; // ivar: _maximumZoom
@property (nonatomic) NSInteger minimumZoom; // ivar: _minimumZoom


-(BOOL)hasAllBlocksAvailableBetweenStartPath:(struct ? )arg0 endPath:(struct ? )arg1 ;
-(BOOL)hasAvailableBlocksBetweenStartPath:(struct ? )arg0 endPath:(struct ? )arg1 ;
-(BOOL)hasPendingQueriesBetweenStartPath:(struct ? )arg0 endPath:(struct ? )arg1 ;
-(id)cachedBlockForPath:(struct ? )arg0 context:(id)arg1 ;
-(id)init;
-(struct ? )blockPathForX:(id)arg0 zoom:(NSInteger)arg1 ;
-(void)blocksRequestedFromPath:(struct ? )arg0 toPath:(struct ? )arg1 priorityDelegate:(id)arg2 ;
-(void)invalidateCache;


@end


#endif