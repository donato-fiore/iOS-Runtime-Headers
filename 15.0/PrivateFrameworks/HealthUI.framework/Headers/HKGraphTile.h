// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HKGRAPHTILE_H
#define HKGRAPHTILE_H

@class CALayer, NSString;
@protocol CALayerDelegate, HKGraphTileDrawingDelegate;

#import <Foundation/Foundation.h>


@interface HKGraphTile : NSObject <CALayerDelegate>



@property (retain, nonatomic) CALayer *caLayer; // ivar: _caLayer
@property (nonatomic) NSInteger column; // ivar: _column
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (weak, nonatomic) NSObject<HKGraphTileDrawingDelegate> *drawingDelegate; // ivar: _drawingDelegate
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL hidden;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL tileDisplayedSinceSetNeedsDisplay; // ivar: _tileDisplayedSinceSetNeedsDisplay


-(id)initWithParentView:(id)arg0 ;
-(void)configureTileWithScreenRect:(struct CGRect )arg0 column:(NSInteger)arg1 ;
-(void)dealloc;
-(void)drawLayer:(id)arg0 inContext:(struct CGContext *)arg1 ;
-(void)prepareForReuse;
-(void)setNeedsDisplay;


@end


#endif