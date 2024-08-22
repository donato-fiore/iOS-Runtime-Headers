// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CHSTROKEGROUPINGSTRATEGY_H
#define CHSTROKEGROUPINGSTRATEGY_H

@class NSString;
@protocol CHStrokeProvider;

#import <Foundation/Foundation.h>


@interface CHStrokeGroupingStrategy : NSObject

@property (readonly, nonatomic) NSString *strategyIdentifier;
@property (readonly, nonatomic) NSObject<CHStrokeProvider> *strokeProvider; // ivar: _strokeProvider


-(id)initWithStrokeProvider:(id)arg0 ;
-(id)recognizableDrawingForStrokeGroup:(id)arg0 translationVector:(struct CGVector )arg1 originalDrawing:(*id)arg2 orderedStrokesIDs:(*id)arg3 rescalingFactor:(*CGFloat)arg4 ;
-(id)strokeGroupFromGroup:(id)arg0 addingStrokes:(id)arg1 ;
-(id)strokesForIdentifiers:(id)arg0 ;
-(id)updatedGroupingResult:(id)arg0 byAddingStrokes:(id)arg1 removingStrokeIdentifiers:(id)arg2 stableStrokeIdentifiers:(id)arg3 allSubstrokesByStrokeIdentifier:(id)arg4 withCancellationBlock:(id)arg5 ;
-(void)getFirstStrokeIdentifier:(*id)arg0 lastStrokeIdentifier:(*id)arg1 inGroup:(id)arg2 addingStrokeIdentifiers:(id)arg3 removingStrokeIdentifiers:(id)arg4 ;


@end


#endif