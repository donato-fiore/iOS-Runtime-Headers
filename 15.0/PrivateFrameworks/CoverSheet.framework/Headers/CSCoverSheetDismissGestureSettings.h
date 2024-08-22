// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CSCOVERSHEETDISMISSGESTURESETTINGS_H
#define CSCOVERSHEETDISMISSGESTURESETTINGS_H

@class PTSettings;



@interface CSCoverSheetDismissGestureSettings : PTSettings

@property (nonatomic) CGFloat edgeRegionSize; // ivar: _edgeRegionSize
@property (nonatomic) BOOL extendSwipeUpRegion; // ivar: _extendSwipeUpRegion
@property (nonatomic) CGFloat extendedEdgeRegionSize; // ivar: _extendedEdgeRegionSize
@property (nonatomic) CGFloat extendedRegionInsetX; // ivar: _extendedRegionInsetX
@property (nonatomic) CGFloat recognizeAlongEdge; // ivar: _recognizeAlongEdge
@property (nonatomic) BOOL usesGrapeFlags; // ivar: _usesGrapeFlags


+(id)settingsControllerModule;
-(void)setDefaultValues;


@end


#endif