// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSTSTROKELAYERMERGEDSTACK_H
#define TSTSTROKELAYERMERGEDSTACK_H



#import "TSTStrokeLayerAbstractStack.h"
#import "TSTMutableStrokeLayer.h"
#import "TSTStrokeOrderedLayer.h"
#import "TSTStrokeLayer.h"

@interface TSTStrokeLayerMergedStack : TSTStrokeLayerAbstractStack

@property (retain, nonatomic) TSTMutableStrokeLayer *clearedMajorStrokeLayer; // ivar: _clearedMajorStrokeLayer
@property (retain, nonatomic) TSTMutableStrokeLayer *clearedMinorStrokeLayer; // ivar: _clearedMinorStrokeLayer
@property (retain, nonatomic) TSTStrokeOrderedLayer *customOrderedStrokeLayer; // ivar: _customOrderedStrokeLayer
@property (retain, nonatomic) TSTStrokeLayer *customUnorderedStrokeLayer; // ivar: _customUnorderedStrokeLayer
@property (retain, nonatomic) TSTStrokeLayer *defaultMajorStrokeLayer; // ivar: _defaultMajorStrokeLayer
@property (retain, nonatomic) TSTStrokeLayer *defaultMinorStrokeLayer; // ivar: _defaultMinorStrokeLayer
@property (retain, nonatomic) TSTStrokeOrderedLayer *dynamicOrderedStrokeLayer; // ivar: _dynamicOrderedStrokeLayer
@property (retain, nonatomic) TSTMutableStrokeLayer *dynamicUnorderedStrokeLayer; // ivar: _dynamicUnorderedStrokeLayer
@property (retain, nonatomic) TSTMutableStrokeLayer *spillMajorStrokeLayer; // ivar: _spillMajorStrokeLayer
@property (retain, nonatomic) TSTMutableStrokeLayer *spillMinorStrokeLayer; // ivar: _spillMinorStrokeLayer


+(id)mergeLeftStrokes:(id)arg0 withRightStrokes:(id)arg1 ;
+(id)mergeTopStrokes:(id)arg0 withBottomStrokes:(id)arg1 ;
-(CGFloat)maxWidthOfStrokesInRange:(struct TSTSimpleRange )arg0 cachedMax:(CGFloat)arg1 ;
-(CGFloat)p_widthOfStrokesAtIndex:(NSInteger)arg0 ;
-(NSUInteger)count;
-(id)initWithCopyOfMajorStrokes:(id)arg0 andMinorStrokes:(id)arg1 ;
-(id)initWithReferenceOfMajorStrokes:(id)arg0 andMinorStrokes:(id)arg1 ;
-(id)p_strokeLayerEnumeration;
-(id)portalledStrokeLayer;
-(void)invalidateSpillStrokes;
-(void)lockForRead;
-(void)lockForWrite;
-(void)unlock;


@end


#endif