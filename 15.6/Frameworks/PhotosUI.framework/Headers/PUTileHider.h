// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PUTILEHIDER_H
#define PUTILEHIDER_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>

#import "PUTilingView.h"

@interface PUTileHider : NSObject

@property (readonly, nonatomic) CGFloat _animationDuration; // ivar: __animationDuration
@property (readonly, nonatomic) NSMutableDictionary *_hiddenTileControllersByLayoutInfo; // ivar: __hiddenTileControllersByLayoutInfo
@property (readonly, nonatomic) PUTilingView *tilingView; // ivar: _tilingView


-(id)init;
-(id)initWithTilingView:(id)arg0 ;
-(void)dealloc;
-(void)hideTilesAtIndexPath:(id)arg0 withKinds:(id)arg1 dataSourceIdentifier:(id)arg2 animated:(BOOL)arg3 ;
-(void)reattachTiles;
-(void)unhideTilesAnimated:(BOOL)arg0 ;


@end


#endif