// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CHTEXTLINESTRAIGHTENER_H
#define CHTEXTLINESTRAIGHTENER_H

@class NSArray, NSMutableArray;
@protocol CHStrokeProvider;

#import <Foundation/Foundation.h>

#import "CHStrokeClassificationResult.h"
#import "CHStrokeGroupingResult.h"

@interface CHTextLineStraightener : NSObject {
    vector<CoreHandwriting::BoundingBox, std::allocator<CoreHandwriting::BoundingBox>> _originalBoundingBoxes;
    vector<CoreHandwriting::BoundingBox, std::allocator<CoreHandwriting::BoundingBox>> _transformedBoundingBoxes;
}


@property (retain) NSArray *contextResults; // ivar: _contextResults
@property (retain) NSArray *contextStrokes; // ivar: _contextStrokes
@property (retain) NSMutableArray *correctionAngles; // ivar: _correctionAngles
@property (retain) CHStrokeClassificationResult *strokeClassificationResult; // ivar: _strokeClassificationResult
@property (retain) CHStrokeGroupingResult *strokeGroupingResult; // ivar: _strokeGroupingResult
@property (retain) NSObject<CHStrokeProvider> *strokeProvider; // ivar: _strokeProvider


-(id)createTelemetryDictionary:(CGFloat)arg0 nonTextRatio:(CGFloat)arg1 ;
-(id)initWithContextStrokes:(id)arg0 contextResults:(id)arg1 strokeGroupingResult:(id)arg2 strokeClassificationResult:(id)arg3 strokeProvider:(id)arg4 ;
-(id)majorityScriptId;
-(id)meanRotationCorrectionAngle;
-(id)numCharacters;
-(id)textStrokePointTransformationFromAffineTransformation:(SEL)arg0 ;
-(struct CGAffineTransform )fontTransferForDrawing:(id)arg0 transcription:(id)arg1 shouldCancel:(id)arg2 ;
-(struct CGAffineTransform )fontTransferTransformForLineAtIndex:(NSInteger)arg0 progress:(id)arg1 shouldCancel:(id)arg2 ;
-(struct CHTextLineStraighteningResult )straightenWithProgress:(id)arg0 shouldCancel:(id)arg1 ;
-(void)handleRemainingStrokes:(id)arg0 contextStrokeGroups:(id)arg1 transformations:(*void)arg2 groupBounds:(id)arg3 ;


@end


#endif