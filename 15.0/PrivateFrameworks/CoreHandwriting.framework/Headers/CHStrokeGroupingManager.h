// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CHSTROKEGROUPINGMANAGER_H
#define CHSTROKEGROUPINGMANAGER_H

@class NSDictionary, NSArray;
@protocol CHStrokeProvider;

#import <Foundation/Foundation.h>

#import "CHRecognitionSessionResult.h"

@interface CHStrokeGroupingManager : NSObject

@property (readonly, retain, nonatomic) NSDictionary *groupingStrategiesByIdentifier; // ivar: _groupingStrategiesByIdentifier
@property (readonly, nonatomic) BOOL isInlineContinuousMode; // ivar: _isInlineContinuousMode
@property (readonly, retain, nonatomic) NSArray *locales; // ivar: _locales
@property (readonly, retain, nonatomic) CHRecognitionSessionResult *sessionLastResult; // ivar: _sessionLastResult
@property (readonly, retain, nonatomic) NSObject<CHStrokeProvider> *strokeProvider; // ivar: _strokeProvider
@property (readonly, retain, nonatomic) NSArray *textInputTargets; // ivar: _textInputTargets


+(BOOL)_isGroupableNonTextForStrokeClassification:(NSInteger)arg0 ;
-(id)_greedyCombinationOfGroupingResults:(id)arg0 stableStrokeIdentifiers:(id)arg1 withCancellationBlock:(id)arg2 ;
-(id)_groupsFromClusterResult:(id)arg0 strokes:(id)arg1 strokeClassificationsByStrokeIdentifier:(id)arg2 ;
-(id)_simpleDrawingForStrokeGroup:(id)arg0 originalDrawing:(*id)arg1 orderedStrokeIDs:(*id)arg2 ;
-(id)initWithStrokeProvider:(id)arg0 sessionLastResult:(id)arg1 locales:(id)arg2 isInlineContinuousMode:(BOOL)arg3 inlineContinuousModeTargets:(id)arg4 ;
-(id)recognizableDrawingForStrokeGroup:(id)arg0 translationVector:(struct CGVector )arg1 originalDrawing:(*id)arg2 orderedStrokesIDs:(*id)arg3 rescalingFactor:(*CGFloat)arg4 ;
-(id)strokesForIdentifiers:(id)arg0 ;
-(id)updatedGroupingResultByAddingStrokes:(id)arg0 removingStrokeIdentifiers:(id)arg1 orderedStrokeIdentifiers:(id)arg2 strokeClassificationResult:(id)arg3 cancellationBlock:(id)arg4 ;
-(void)dealloc;


@end


#endif