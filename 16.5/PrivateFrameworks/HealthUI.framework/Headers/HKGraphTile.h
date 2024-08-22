// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKGRAPHTILE_H
#define HKGRAPHTILE_H

@class CALayer, NSString, UIView;
@protocol CALayerDelegate, HKGraphTileDrawingDelegate;

#import <Foundation/Foundation.h>

#import "HKGraphViewTileThread.h"

@interface HKGraphTile : NSObject <CALayerDelegate>



@property (retain, nonatomic) CALayer *caLayer; // ivar: _caLayer
@property (nonatomic) NSInteger configurationChangedCounter; // ivar: _configurationChangedCounter
@property (readonly, nonatomic) NSInteger currentColumn; // ivar: _currentColumn
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (weak, nonatomic) NSObject<HKGraphTileDrawingDelegate> *drawingDelegate; // ivar: _drawingDelegate
@property (readonly, weak, nonatomic) HKGraphViewTileThread *graphViewTileThread; // ivar: _graphViewTileThread
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL hidden;
@property (readonly, weak, nonatomic) UIView *parentView; // ivar: _parentView
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL tileDisplayedSinceSetNeedsDisplay; // ivar: _tileDisplayedSinceSetNeedsDisplay


-(id)initWithParentView:(id)arg0 graphViewTileThread:(id)arg1 ;
-(void)_handlePostRenderOperations;
-(void)configureTileWithScreenRect:(struct CGRect )arg0 column:(NSInteger)arg1 ;
-(void)dealloc;
-(void)drawLayer:(id)arg0 inContext:(struct CGContext *)arg1 ;
-(void)prepareTileForReuse;
-(void)refreshTileContent;
-(void)renderTileInBackgroundWithRenderer:(id)arg0 tileSize:(struct CGSize )arg1 configurationChangedCounter:(NSInteger)arg2 ;


@end


#endif