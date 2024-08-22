// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICASDRAWINGRECOGNITIONDATA_H
#define ICASDRAWINGRECOGNITIONDATA_H

@class NSNumber, NSString;
@protocol AADataEventType;

#import <Foundation/Foundation.h>


@interface ICASDrawingRecognitionData : NSObject <AADataEventType>



@property (readonly, nonatomic) NSNumber *countOfFingerStrokes; // ivar: _countOfFingerStrokes
@property (readonly, nonatomic) NSNumber *countOfPencilStrokes; // ivar: _countOfPencilStrokes
@property (readonly, nonatomic) NSNumber *countOfRecognizedHandwrittenCharacters; // ivar: _countOfRecognizedHandwrittenCharacters
@property (readonly, nonatomic) NSNumber *countOfRecognizedLines; // ivar: _countOfRecognizedLines
@property (readonly, nonatomic) NSString *drawingID; // ivar: _drawingID
@property (readonly, nonatomic) NSString *handwritingLanguage; // ivar: _handwritingLanguage


+(id)dataName;
-(id)initWithCountOfPencilStrokes:(id)arg0 countOfFingerStrokes:(id)arg1 countOfRecognizedHandwrittenCharacters:(id)arg2 countOfRecognizedLines:(id)arg3 handwritingLanguage:(id)arg4 drawingID:(id)arg5 ;
-(id)toDict;


@end


#endif