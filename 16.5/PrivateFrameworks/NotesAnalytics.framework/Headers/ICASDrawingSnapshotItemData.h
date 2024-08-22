// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICASDRAWINGSNAPSHOTITEMDATA_H
#define ICASDRAWINGSNAPSHOTITEMDATA_H

@class NSNumber;
@protocol AADataEventType;

#import <Foundation/Foundation.h>


@interface ICASDrawingSnapshotItemData : NSObject <AADataEventType>



@property (readonly, nonatomic) NSNumber *countOfFullscreenDrawingStrokes; // ivar: _countOfFullscreenDrawingStrokes
@property (readonly, nonatomic) NSNumber *countOfInlineDrawingV1FingerStrokes; // ivar: _countOfInlineDrawingV1FingerStrokes
@property (readonly, nonatomic) NSNumber *countOfInlineDrawingV1PencilStrokes; // ivar: _countOfInlineDrawingV1PencilStrokes
@property (readonly, nonatomic) NSNumber *countOfInlineDrawingV2FingerStrokes; // ivar: _countOfInlineDrawingV2FingerStrokes
@property (readonly, nonatomic) NSNumber *countOfInlineDrawingV2PencilStrokes; // ivar: _countOfInlineDrawingV2PencilStrokes


+(id)dataName;
-(id)initWithCountOfInlineDrawingV1PencilStrokes:(id)arg0 countOfInlineDrawingV1FingerStrokes:(id)arg1 countOfInlineDrawingV2PencilStrokes:(id)arg2 countOfInlineDrawingV2FingerStrokes:(id)arg3 countOfFullscreenDrawingStrokes:(id)arg4 ;
-(id)toDict;


@end


#endif