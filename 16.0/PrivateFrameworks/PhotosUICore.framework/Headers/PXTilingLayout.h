// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXTILINGLAYOUT_H
#define PXTILINGLAYOUT_H

@protocol PXTilingLayoutObserver;

#import <Foundation/Foundation.h>

#import "PXTilingCoordinateSpace.h"
#import "PXTilingScrollInfo.h"

@interface PXTilingLayout : NSObject

@property (readonly, nonatomic) BOOL allowHorizontalFlip;
@property (readonly, nonatomic) CGRect contentBounds;
@property (nonatomic) UIEdgeInsets contentInset; // ivar: _contentInset
@property (readonly, nonatomic) PXTilingCoordinateSpace *coordinateSpace; // ivar: _coordinateSpace
@property (readonly, nonatomic) *void coordinateSpaceIdentifier; // ivar: _coordinateSpaceIdentifier
@property (weak, nonatomic) NSObject<PXTilingLayoutObserver> *observer; // ivar: _observer
@property (nonatomic) CGSize referenceSize; // ivar: _referenceSize
@property (readonly, nonatomic) CGRect scrollBounds;
@property (readonly, copy, nonatomic) PXTilingScrollInfo *scrollInfo; // ivar: _scrollInfo
@property (readonly, nonatomic) BOOL shouldFlipHorizontally;
@property (nonatomic) CGPoint visibleOrigin; // ivar: _visibleOrigin
@property (readonly, nonatomic) CGRect visibleRect;
@property (nonatomic) CGSize visibleSize; // ivar: _visibleSize


-(BOOL)getGeometry:(struct PXTileGeometry *)arg0 group:(*NSUInteger)arg1 userData:(*id)arg2 forTileWithIdentifier:(struct PXTileIdentifier )arg3 ;
-(id)init;
-(void)enumerateTilesInRect:(struct CGRect )arg0 withOptions:(id)arg1 usingBlock:(id)arg2 ;
-(void)invalidateLayout;
-(void)invalidateLayoutWithContext:(id)arg0 ;
-(void)prepareLayout;


@end


#endif