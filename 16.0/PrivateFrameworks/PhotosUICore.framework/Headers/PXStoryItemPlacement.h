// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXSTORYITEMPLACEMENT_H
#define PXSTORYITEMPLACEMENT_H

@class NSMutableArray, NSString, NSUUID;
@protocol PXStoryMutableItemPlacement, NSCopying, UICoordinateSpace, PXDisplayAsset;

#import <Foundation/Foundation.h>

#import "PXStoryItemPlacementContext.h"
#import "PXGLayout.h"
#import "PXStoryItemPlacement.h"
#import "PXRegionOfInterest.h"

@interface PXStoryItemPlacement : NSObject <PXStoryMutableItemPlacement, NSCopying>

 {
    PXStoryItemPlacementContext *_context;
    CGRect _rect;
    CGRect _rectVelocity;
    NSInteger _rectReference;
    NSObject<UICoordinateSpace> *_coordinateSpace;
    PXGLayout *_layout;
    NSMutableArray *_registeredSourceIdentifiers;
}


@property (readonly, nonatomic) PXStoryItemPlacement *adjustedPreferredPlacement;
@property (readonly, nonatomic) CGFloat alpha; // ivar: _alpha
@property (readonly, nonatomic) CGFloat chromeAlpha; // ivar: _chromeAlpha
@property (readonly, nonatomic) ? cornerRadius; // ivar: _cornerRadius
@property (readonly, nonatomic) NSString *diagnosticDescription;
@property (readonly, nonatomic) NSObject<PXDisplayAsset> *displayedAsset; // ivar: _displayedAsset
@property (readonly, nonatomic) ? displayedAssetContentsRect; // ivar: _displayedAssetContentsRect
@property (readonly, nonatomic) BOOL hasGeometry;
@property (readonly, nonatomic) CGFloat legibilityOverlayAlpha; // ivar: _legibilityOverlayAlpha
@property (readonly, nonatomic) CGRect normalizedDisplayedAssetRect; // ivar: _normalizedDisplayedAssetRect
@property (readonly, nonatomic) CGRect normalizedSubtitleRect; // ivar: _normalizedSubtitleRect
@property (readonly, nonatomic) CGRect normalizedTitleRect; // ivar: _normalizedTitleRect
@property (readonly, nonatomic) PXStoryItemPlacement *otherItemsPlacement; // ivar: _otherItemsPlacement
@property (readonly, nonatomic) PXRegionOfInterest *regionOfInterest;
@property (readonly, nonatomic) CGFloat scrubberAlpha; // ivar: _scrubberAlpha
@property (readonly, nonatomic) float soundVolume; // ivar: _soundVolume
@property (readonly, nonatomic) NSUUID *uuid; // ivar: _uuid


-(id)copyWithConfiguration:(id)arg0 ;
-(id)copyWithRegionOfInterest:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithContext:(id)arg0 configuration:(id)arg1 ;
-(struct CGRect )rectInCoordinateSpace:(id)arg0 velocity:(struct CGRect *)arg1 ;
-(struct CGRect )rectInLayout:(id)arg0 velocity:(struct CGRect *)arg1 ;
-(void)adjustPreferredPlacementInSourceWithIdentifier:(id)arg0 configuration:(id)arg1 ;
-(void)registerSourceIdentifier:(id)arg0 ;
-(void)setRect:(struct CGRect )arg0 velocity:(struct CGRect )arg1 inCoordinateSpace:(id)arg2 ;
-(void)setRect:(struct CGRect )arg0 velocity:(struct CGRect )arg1 inLayout:(id)arg2 ;


@end


#endif