// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKSTROKEPROVIDERSLICE_H
#define PKSTROKEPROVIDERSLICE_H

@class NSString, CHEncodedStrokeIdentifier;
@protocol CHStroke, CHStrokeIdentifier;

#import <Foundation/Foundation.h>

#import "PKStrokeProviderSliceIdentifier.h"
#import "PKStroke.h"

@interface PKStrokeProviderSlice : NSObject <CHStroke>



@property (readonly, nonatomic) CGRect bounds; // ivar: _bounds
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) CHEncodedStrokeIdentifier *encodedStrokeIdentifier; // ivar: _encodedStrokeIdentifier
@property (readonly, nonatomic) CGFloat endTimestamp;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) PKStrokeProviderSliceIdentifier *identifier; // ivar: _identifier
@property (readonly, nonatomic) BOOL isFinished;
@property (readonly, nonatomic) CGFloat startTimestamp;
@property (readonly, nonatomic) PKStroke *stroke; // ivar: _stroke
@property (readonly, nonatomic) NSUInteger strokeAttributes;
@property (readonly, nonatomic) NSObject<CHStrokeIdentifier> *strokeIdentifier;
@property (readonly) Class superclass;


-(BOOL)isEqual:(id)arg0 ;
-(CGFloat)_interpolatedTimeForSplineSegment:(NSInteger)arg0 t:(CGFloat)arg1 ;
-(CGFloat)_lengthOfSplineSegment:(NSUInteger)arg0 ;
-(NSInteger)_firstPointIndex;
-(NSInteger)_lastPointIndex;
-(NSInteger)compareTo:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 ;
-(id)initWithStroke:(id)arg0 tStart:(CGFloat)arg1 tEnd:(CGFloat)arg2 ;
-(struct CGPoint )_interpolatedPointForSplineSegment:(NSInteger)arg0 t:(CGFloat)arg1 ;
-(struct CGPoint )_splineControlPoint:(NSInteger)arg0 ;
-(void)enumeratePointsWithDistanceStep:(CGFloat)arg0 usingBlock:(id)arg1 ;
-(void)enumeratePointsWithTimestep:(CGFloat)arg0 usingBlock:(id)arg1 ;


@end


#endif