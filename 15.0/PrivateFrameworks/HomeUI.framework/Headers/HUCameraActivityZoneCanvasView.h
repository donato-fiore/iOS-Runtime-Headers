// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HUCAMERAACTIVITYZONECANVASVIEW_H
#define HUCAMERAACTIVITYZONECANVASVIEW_H

@class UIView, NSMutableArray, UIImageView, HMPoint;
@protocol HUCameraActivityZoneCanvasDelegate;



@interface HUCameraActivityZoneCanvasView : UIView

@property (readonly, nonatomic) NSMutableArray *activityZones; // ivar: _activityZones
@property (retain, nonatomic) UIImageView *canvasView; // ivar: _canvasView
@property (retain, nonatomic) NSMutableArray *currentActivityZone; // ivar: _currentActivityZone
@property (nonatomic) NSInteger currentTouchPointIndex; // ivar: _currentTouchPointIndex
@property (weak, nonatomic) NSObject<HUCameraActivityZoneCanvasDelegate> *delegate; // ivar: _delegate
@property (nonatomic) BOOL displaysInclusionZones; // ivar: _displaysInclusionZones
@property (nonatomic, getter=isEditingActivityZone) BOOL editingActivityZone; // ivar: _editingActivityZone
@property (readonly, nonatomic) BOOL isCreatingActivityZone;
@property (retain, nonatomic) HMPoint *startingTouchPoint; // ivar: _startingTouchPoint


-(BOOL)canBecomeFirstResponder;
-(BOOL)canCreateActivityZone;
-(BOOL)currentZonesIntersectPoint:(struct CGPoint )arg0 ;
-(BOOL)currentZonesIntersectSegmentFromPoint:(struct CGPoint )arg0 toPoint:(struct CGPoint )arg1 ;
-(BOOL)isValidPointInView:(struct CGPoint )arg0 ;
-(id)_hmPointForTapPoint:(struct CGPoint )arg0 ;
-(id)activityZoneContainingPoint:(struct CGPoint )arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)selectedActivityZoneAtPoint:(struct CGPoint )arg0 ;
-(struct CGPoint )_hmPointToCGPoint:(id)arg0 ;
-(struct CGPoint )_normalizedPointForPoint:(struct CGPoint )arg0 ;
-(void)_addTouchpointAtPoint:(struct CGPoint )arg0 inContext:(struct CGContext *)arg1 withRed:(CGFloat)arg2 green:(CGFloat)arg3 blue:(CGFloat)arg4 ;
-(void)_displayMenuForActivityZone:(id)arg0 ;
-(void)_drawPolygonWithMaskPath:(id)arg0 ;
-(void)_drawTouchPoints;
-(void)_editActivityZone:(id)arg0 ;
-(void)_finishEditingCurrentActivityZone;
-(void)_handleBeginForGesture:(id)arg0 ;
-(void)_handleChangeForGesture:(id)arg0 ;
-(void)_handleEndForGesture:(id)arg0 ;
-(void)_prepCurrentActivityZoneForDeselection;
-(void)_resetCanvasAndCurrentZone;
-(void)clearActivityZone;
-(void)createActivityZone;
-(void)didPan:(id)arg0 ;
-(void)didTap:(id)arg0 ;
-(void)drawRect:(struct CGRect )arg0 ;
-(void)loadActivityZones:(id)arg0 ;
-(void)preventAttemptToMovePoint;
-(void)updateAfterVideoBoundsChange;


@end


#endif