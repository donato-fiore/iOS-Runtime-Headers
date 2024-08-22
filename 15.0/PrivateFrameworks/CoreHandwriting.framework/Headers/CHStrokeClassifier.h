// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CHSTROKECLASSIFIER_H
#define CHSTROKECLASSIFIER_H

@protocol CHStrokeProvider;

#import <Foundation/Foundation.h>

#import "CHStrokeClassificationResult.h"

@interface CHStrokeClassifier : NSObject

@property (readonly, retain, nonatomic) CHStrokeClassificationResult *strokeClassificationLastResult; // ivar: _strokeClassificationLastResult
@property (readonly, retain, nonatomic) NSObject<CHStrokeProvider> *strokeProvider; // ivar: _strokeProvider
@property (readonly, nonatomic) BOOL textOnly; // ivar: _textOnly


+(CGFloat)containerSupportForPoints:(*void)arg0 withBounds:(struct CGRect )arg1 ;
+(id)nonTextCandidateForStroke:(id)arg0 withSubstrokes:(id)arg1 ;
-(BOOL)changeableClassificationByRefinement:(NSInteger)arg0 stroke:(id)arg1 ;
-(NSInteger)_tileIndexForYPosition:(CGFloat)arg0 tileHeight:(NSInteger)arg1 ;
-(id)initWithStrokeProvider:(id)arg0 strokeClassificationLastResult:(id)arg1 textOnly:(BOOL)arg2 ;
-(id)refineStrokeClassificationResultUsingClassificationResult:(id)arg0 strokeClassificationModel:(id)arg1 sortedAddedStrokes:(id)arg2 removedStrokeIdentifiers:(id)arg3 cancellationBlock:(id)arg4 ;
-(id)updatedStrokeClassificationResultByAddingStrokes:(id)arg0 removingStrokeIdentifiers:(id)arg1 clutterFilter:(id)arg2 affectedClutterStrokeIDs:(id)arg3 cancellationBlock:(id)arg4 ;
-(void)dealloc;


@end


#endif