// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VCPSEGMENT_H
#define VCPSEGMENT_H


#import <Foundation/Foundation.h>


@interface VCPSegment : NSObject {
    float _sumOfScore;
}


@property (nonatomic) float curationScore; // ivar: _curationScore
@property (readonly, nonatomic) NSUInteger numOfFrames; // ivar: _numOfFrames
@property (readonly, nonatomic) NSUInteger numOfValidFrames; // ivar: _numOfValidFrames
@property (nonatomic) ? timeRange; // ivar: _timeRange


-(BOOL)isContentTooShort;
-(float)score;
-(float)sumOfScore;
-(id)init;
-(id)initWithTimestamp:(struct ? )arg0 score:(float)arg1 valid:(BOOL)arg2 ;
-(void)copyFrom:(id)arg0 ;
-(void)mergeSegment:(id)arg0 ;
-(void)trimSegment:(struct ? )arg0 fromStart:(BOOL)arg1 ;
-(void)updateDuration:(struct ? )arg0 ;
-(void)updateSegment:(struct ? )arg0 score:(float)arg1 valid:(BOOL)arg2 ;
-(void)updateWithFirstFrame:(struct ? )arg0 score:(float)arg1 valid:(BOOL)arg2 ;


@end


#endif