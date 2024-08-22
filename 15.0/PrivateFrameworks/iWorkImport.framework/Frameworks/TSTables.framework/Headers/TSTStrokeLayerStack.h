// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSTSTROKELAYERSTACK_H
#define TSTSTROKELAYERSTACK_H



#import "TSTStrokeLayerAbstractStack.h"
#import "TSTMutableStrokeLayer.h"
#import "TSTStrokeLayer.h"

@interface TSTStrokeLayerStack : TSTStrokeLayerAbstractStack

@property (retain, nonatomic) TSTMutableStrokeLayer *clearedStrokeLayer; // ivar: _clearedStrokeLayer
@property (retain, nonatomic) TSTStrokeLayer *customStrokeLayer; // ivar: _customStrokeLayer
@property (retain, nonatomic) TSTStrokeLayer *defaultStrokeLayer; // ivar: _defaultStrokeLayer
@property (retain, nonatomic) TSTMutableStrokeLayer *dynamicStrokeLayer; // ivar: _dynamicStrokeLayer
@property (readonly, nonatomic) BOOL isDefaultsOnly; // ivar: _isDefaultsOnly
@property (readonly, nonatomic) BOOL isEligibleForDefaultsOnlyReplacement;
@property (retain, nonatomic) TSTMutableStrokeLayer *spillStrokeLayer; // ivar: _spillStrokeLayer


+(id)defaultsOnlyStrokeLayerStack;
+(id)strokeLayerStack;
-(BOOL)hasSpillStrokeInRange:(struct TSTSimpleRange )arg0 ;
-(BOOL)replaceCustomStrokeLayerWith:(id)arg0 ;
-(BOOL)replaceDefaultStrokeLayerWith:(id)arg0 ;
-(NSUInteger)count;
-(id)p_strokeLayerEnumeration;
-(id)portalledStrokeLayer;
-(id)replacementWithDefaults;
-(void)insertClearedStrokeAtRange:(struct TSTSimpleRange )arg0 ;
-(void)insertDynamicStroke:(id)arg0 strokeOrder:(int)arg1 atRange:(struct TSTSimpleRange )arg2 ;
-(void)insertSpillStroke:(id)arg0 atRange:(struct TSTSimpleRange )arg1 ;
-(void)invalidateClearedStrokesInRange:(struct TSTSimpleRange )arg0 ;
-(void)invalidateCustomStrokes;
-(void)invalidateDynamicStrokes;
-(void)invalidateDynamicStrokesInRange:(struct TSTSimpleRange )arg0 ;
-(void)invalidateSpillStrokes;
-(void)verifyWithExpectedDefaultStrokeLayer:(id)arg0 ;


@end


#endif