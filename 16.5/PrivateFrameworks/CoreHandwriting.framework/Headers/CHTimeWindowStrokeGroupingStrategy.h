// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CHTIMEWINDOWSTROKEGROUPINGSTRATEGY_H
#define CHTIMEWINDOWSTROKEGROUPINGSTRATEGY_H



#import "CHStrokeGroupingStrategy.h"

@interface CHTimeWindowStrokeGroupingStrategy : CHStrokeGroupingStrategy



-(id)_timeSortedStrokesForIdentifiers:(id)arg0 ;
-(id)recognizableDrawingForStrokeGroup:(id)arg0 translationVector:(struct CGVector )arg1 originalDrawing:(*id)arg2 orderedStrokesIDs:(*id)arg3 rescalingFactor:(*CGFloat)arg4 ;
-(id)updatedGroupingResult:(id)arg0 byAddingStrokes:(id)arg1 removingStrokeIdentifiers:(id)arg2 stableStrokeIdentifiers:(id)arg3 allSubstrokesByStrokeIdentifier:(id)arg4 withCancellationBlock:(id)arg5 ;


@end


#endif