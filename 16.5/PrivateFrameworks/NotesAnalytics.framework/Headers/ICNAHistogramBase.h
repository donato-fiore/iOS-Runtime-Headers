// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICNAHISTOGRAMBASE_H
#define ICNAHISTOGRAMBASE_H

@class NSArray, NSMutableArray, NSNumber;

#import <Foundation/Foundation.h>


@interface ICNAHistogramBase : NSObject

@property (retain, nonatomic) NSArray *bucketLeftBounds; // ivar: _bucketLeftBounds
@property (retain, nonatomic) NSMutableArray *countsForEachBucket; // ivar: _countsForEachBucket
@property (retain, nonatomic) NSNumber *valueMax; // ivar: _valueMax
@property (nonatomic) CGFloat valuePrecision; // ivar: _valuePrecision


-(CGFloat)roundedValue:(CGFloat)arg0 ;
-(NSUInteger)roundedCount:(NSUInteger)arg0 ;
-(id)icasHistogram;
-(id)init;
-(void)reportValue:(CGFloat)arg0 ;
-(void)setup;


@end


#endif