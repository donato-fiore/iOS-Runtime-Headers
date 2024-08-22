// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AKSHAPETOCHRECOGNITIONRESULT_H
#define AKSHAPETOCHRECOGNITIONRESULT_H

@class UIBezierPath, PKDrawing, CHRecognitionResult;

#import <Foundation/Foundation.h>

#import "AKAnnotation.h"

@interface AKShapeToCHRecognitionResult : NSObject

@property (retain) AKAnnotation *annotation; // ivar: _annotation
@property (retain) UIBezierPath *doodlePath; // ivar: _doodlePath
@property CGRect doodlePathBoundsInInputView; // ivar: _doodlePathBoundsInInputView
@property BOOL doodlePathIsPrestroked; // ivar: _doodlePathIsPrestroked
@property (retain) PKDrawing *inkDrawing; // ivar: _inkDrawing
@property (retain) CHRecognitionResult *result; // ivar: _result
@property NSInteger tag; // ivar: _tag


-(id)initWith:(NSInteger)arg0 result:(id)arg1 ;


@end


#endif