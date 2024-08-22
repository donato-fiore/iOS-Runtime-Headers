// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CHSTROKEGROUPBASEDVISUALIZATION_H
#define CHSTROKEGROUPBASEDVISUALIZATION_H

@class NSSet;
@protocol CHStrokeGroupBasedVisualizationDelegate;


#import "CHVisualization.h"
#import "CHRecognitionSessionResult.h"

@interface CHStrokeGroupBasedVisualization : CHVisualization

@property (copy, nonatomic) NSSet *activeStrokeGroupAncestorIdentifiers; // ivar: _activeStrokeGroupAncestorIdentifiers
@property (weak, nonatomic) NSObject<CHStrokeGroupBasedVisualizationDelegate> *delegate;
@property (readonly, nonatomic) BOOL newGroupsDefaultToActive; // ivar: _newGroupsDefaultToActive
@property (retain, nonatomic) CHRecognitionSessionResult *resultDrawn; // ivar: _resultDrawn


-(struct CGRect )dirtyRectForStrokeGroup:(id)arg0 ;
-(void)_markStrokeGroupsAsActive:(id)arg0 ;
-(void)drawVisualizationInRect:(struct CGRect )arg0 context:(struct CGContext *)arg1 viewBounds:(struct CGRect )arg2 ;
-(void)recognitionSessionDidUpdateRecognitionResult;
-(void)toggleVisualizationRegionAtPoint:(struct CGPoint )arg0 ;


@end


#endif