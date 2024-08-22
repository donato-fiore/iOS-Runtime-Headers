// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _HKGRAPHTILEBACKGROUNDRENDERINGCONTEXT_H
#define _HKGRAPHTILEBACKGROUNDRENDERINGCONTEXT_H

@protocol HKGraphViewTileThreadRenderer;

#import <Foundation/Foundation.h>

#import "HKGraphTile.h"
#import "HKGraphViewRenderer.h"

@interface _HKGraphTileBackgroundRenderingContext : NSObject <HKGraphViewTileThreadRenderer>



@property (readonly, nonatomic) NSInteger configurationChangedCounter; // ivar: _configurationChangedCounter
@property (readonly, nonatomic) HKGraphTile *graphTile; // ivar: _graphTile
@property (readonly, nonatomic) HKGraphViewRenderer *graphViewRenderer; // ivar: _graphViewRenderer
@property (readonly, nonatomic) CGSize tileSize; // ivar: _tileSize


-(BOOL)sameForRendering:(id)arg0 ;
-(id)debugDescription;
-(id)initWithGraphTile:(id)arg0 graphViewRenderer:(id)arg1 tileSize:(struct CGSize )arg2 configurationChangedCounter:(NSInteger)arg3 ;
-(void)renderTileContent;


@end


#endif