// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PERSONDETECTIONMANAGER_H
#define PERSONDETECTIONMANAGER_H

@class ARCamera, NSArray;

#import <Foundation/Foundation.h>


@interface PersonDetectionManager : NSObject

@property (retain) ARCamera *arCamera; // ivar: _arCamera
@property (readonly, nonatomic) CGSize centerDetectionSize; // ivar: _centerDetectionSize
@property (readonly, nonatomic) float closeDetectionFactor; // ivar: _closeDetectionFactor
@property (readonly, nonatomic) NSArray *detectedPersonArray; // ivar: _detectedPersonArray
@property (nonatomic) BOOL isCenterDetectionEnabled; // ivar: _isCenterDetectionEnabled
@property (readonly, nonatomic) *__CVBuffer labelBuffer; // ivar: _labelBuffer
@property (readonly, nonatomic) float labellingTolerance; // ivar: _labellingTolerance
@property (readonly, nonatomic) unsigned short maxLabel; // ivar: _maxLabel
@property (readonly, nonatomic) float significantAreaThresholdMM; // ivar: _significantAreaThresholdMM


-(BOOL)isInCenterRectFromRow:(NSUInteger)arg0 column:(NSUInteger)arg1 width:(NSUInteger)arg2 height:(NSUInteger)arg3 ;
-(BOOL)isIntersectingWithCenter:(id)arg0 width:(NSUInteger)arg1 height:(NSUInteger)arg2 ;
-(float)areaFactorForDepth:(float)arg0 camera:(id)arg1 orientation:(NSInteger)arg2 ;
-(id)computeLabelIn:(id)arg0 x:(NSUInteger)arg1 y:(NSUInteger)arg2 depth:(float)arg3 ;
-(id)getDetectedPersonsFromBuffer:(struct __CVBuffer *)arg0 camera:(id)arg1 interfaceOrientation:(NSInteger)arg2 ;
-(id)initWithCenterDetectionSize:(struct CGSize )arg0 labellingTolerance:(float)arg1 significantAreaThresholdMM:(float)arg2 closeDetectionFactor:(float)arg3 ;
-(id)unprojectPoint:(float)arg0 atDepth:(struct CGSize )arg1 viewSize:(NSInteger)arg2 interfaceOrientation;
-(struct CGPoint )project3dPoint:(struct CGSize )arg0 viewSize:(NSInteger)arg1 interfaceOrientation;
-(unsigned short)findLabel:(unsigned short)arg0 inLabels:(id)arg1 ;
-(unsigned short)unionLabel:(unsigned short)arg0 with:(unsigned short)arg1 inLabels:(id)arg2 ;
-(void)computePersonDetectionFromFrame:(id)arg0 interfaceOrientation:(NSInteger)arg1 ;
-(void)dealloc;
-(void)updateLabel:(id)arg0 x:(NSUInteger)arg1 y:(NSUInteger)arg2 depth:(float)arg3 ;


@end


#endif