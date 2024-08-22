// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CACLABELEDGRIDOVERLAYMANAGER_H
#define CACLABELEDGRIDOVERLAYMANAGER_H

@class NSArray;
@protocol CACLabeledGridOverlayManagerDelegate;


#import "CACSimpleContentViewManager.h"

@interface CACLabeledGridOverlayManager : CACSimpleContentViewManager

@property CGRect currentGridPortraitUpFrame; // ivar: _currentGridPortraitUpFrame
@property NSInteger currentLevel; // ivar: _currentLevel
@property NSInteger currentNumberOfColumns; // ivar: _currentNumberOfColumns
@property NSInteger currentNumberOfRows; // ivar: _currentNumberOfRows
@property (weak, nonatomic) NSObject<CACLabeledGridOverlayManagerDelegate> *delegate; // ivar: _delegate
@property (retain) NSArray *labeledElements; // ivar: _labeledElements
@property float maxX; // ivar: _maxX
@property float maxY; // ivar: _maxY
@property (nonatomic) BOOL needsToBeRedrawn; // ivar: _needsToBeRedrawn
@property (readonly, nonatomic) CGPoint portraitUpCenterPoint;
@property float scale; // ivar: _scale


+(NSUInteger)maxNumberOfColumnsForDevice;
+(NSUInteger)maxNumberOfRowsForDevice;
-(BOOL)_isNextLevelAvailable;
-(BOOL)isOverlay;
-(BOOL)shouldZoom;
-(BOOL)updateOverlayWithPortraitUpRect:(struct CGRect )arg0 gridContainingLabel:(id)arg1 ;
-(struct CGRect )bestDrilledGridRectForPortraitUpRect:(struct CGRect )arg0 ;
-(struct CGSize )bestGridResolutionForPortraitUpRect:(struct CGRect )arg0 ;
-(void)_generateLabeledElementsForPortraitUpRect:(struct CGRect )arg0 ;
-(void)hideAnimated:(BOOL)arg0 completion:(id)arg1 ;
-(void)resetAndDrawAtTopLevel;
-(void)resetIdleTimer;
-(void)showOverlay;
-(void)startDelayedDimmingOfNumbers;
-(void)stopDelayedDimmingOfNumbers;


@end


#endif