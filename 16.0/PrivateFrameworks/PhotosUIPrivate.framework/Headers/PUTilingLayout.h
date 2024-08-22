// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PUTILINGLAYOUT_H
#define PUTILINGLAYOUT_H

@class NSMutableDictionary;
@protocol PUTilingCoordinateSystem;

#import <Foundation/Foundation.h>

#import "PUTilingDataSource.h"
#import "PUTilingScrollInfo.h"
#import "PUTilingView.h"

@interface PUTilingLayout : NSObject {
    NSMutableDictionary *_tileIdentifierByIndexPathByKind;
}


@property (readonly, nonatomic) CGRect contentBounds;
@property (readonly, nonatomic) NSObject<PUTilingCoordinateSystem> *coordinateSystem; // ivar: _coordinateSystem
@property (nonatomic) CGPoint coordinateSystemOrigin; // ivar: _coordinateSystemOrigin
@property (retain, nonatomic) PUTilingDataSource *dataSource; // ivar: _dataSource
@property (weak, nonatomic) NSObject<PUTilingCoordinateSystem> *parentCoordinateSystem; // ivar: _parentCoordinateSystem
@property (readonly, nonatomic) PUTilingScrollInfo *preferredScrollInfo;
@property (weak, nonatomic) PUTilingView *tilingView; // ivar: _tilingView
@property (nonatomic) CGRect visibleRect; // ivar: _visibleRect


-(id)description;
-(id)init;
-(id)layoutInfoForTileWithIndexPath:(id)arg0 kind:(id)arg1 ;
-(id)layoutInfosForTilesInRect:(struct CGRect )arg0 ;
-(id)tileIdentifierForTileWithIndexPath:(id)arg0 kind:(id)arg1 ;
-(struct CGRect )visibleRectForScrollingToItemAtIndexPath:(id)arg0 scrollPosition:(NSInteger)arg1 ;
-(void)invalidateLayoutForUpdateWithItems:(id)arg0 ;
-(void)invalidateLayoutWithContext:(id)arg0 ;
-(void)prepareLayout;


@end


#endif